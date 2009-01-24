#pragma once

#include <iostream>
#include <vector>
#include "../../moses/src/TargetPhrase.h"
#include "../../moses/src/WordsRange.h"
#include "../../moses/src/InputType.h"
#include "../../moses/src/ChartRule.h"

namespace MosesChart
{

class TranslationOption
{
	friend std::ostream& operator<<(std::ostream& out, const TranslationOption &transOpt);

protected:
	const Moses::ChartRule &m_rule; /*< output phrase when using this translation option */
	Moses::WordsRange			m_wordsRange;
public:
	TranslationOption(const Moses::WordsRange &wordsRange
									, const Moses::ChartRule &chartRule
									, const Moses::InputType &inputType);

	~TranslationOption();

	const Moses::ChartRule &GetChartRule() const
	{ return m_rule; }
	const Moses::WordsRange &GetSourceWordsRange() const
	{ return m_wordsRange; }
};

}
