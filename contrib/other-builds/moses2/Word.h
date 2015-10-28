/*
 * Word.h
 *
 *  Created on: 23 Oct 2015
 *      Author: hieu
 */

#pragma once

#include <iostream>
#include "TypeDef.h"
#include "moses/Factor.h"
#include "moses/FactorCollection.h"

class Word {
	  friend std::ostream& operator<<(std::ostream &, const Word &);
public:
  Word();
  virtual ~Word();

  void CreateFromString(Moses::FactorCollection &vocab, const std::string &str);

  size_t hash() const;
  bool operator==(const Word &compare) const;

  const Moses::Factor* operator[](size_t ind) const {
	return m_factors[ind];
  }

  const Moses::Factor*& operator[](size_t ind) {
	return m_factors[ind];
  }

protected:
  const Moses::Factor *m_factors[MAX_NUM_FACTORS];

};

