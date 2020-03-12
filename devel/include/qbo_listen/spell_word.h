// Generated by gencpp from file qbo_listen/spell_word.msg
// DO NOT EDIT!


#ifndef QBO_LISTEN_MESSAGE_SPELL_WORD_H
#define QBO_LISTEN_MESSAGE_SPELL_WORD_H

#include <ros/service_traits.h>


#include <qbo_listen/spell_wordRequest.h>
#include <qbo_listen/spell_wordResponse.h>


namespace qbo_listen
{

struct spell_word
{

typedef spell_wordRequest Request;
typedef spell_wordResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct spell_word
} // namespace qbo_listen


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::qbo_listen::spell_word > {
  static const char* value()
  {
    return "cf5cbdd7f0c6b9eaa898f882ab6eade6";
  }

  static const char* value(const ::qbo_listen::spell_word&) { return value(); }
};

template<>
struct DataType< ::qbo_listen::spell_word > {
  static const char* value()
  {
    return "qbo_listen/spell_word";
  }

  static const char* value(const ::qbo_listen::spell_word&) { return value(); }
};


// service_traits::MD5Sum< ::qbo_listen::spell_wordRequest> should match 
// service_traits::MD5Sum< ::qbo_listen::spell_word > 
template<>
struct MD5Sum< ::qbo_listen::spell_wordRequest>
{
  static const char* value()
  {
    return MD5Sum< ::qbo_listen::spell_word >::value();
  }
  static const char* value(const ::qbo_listen::spell_wordRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::qbo_listen::spell_wordRequest> should match 
// service_traits::DataType< ::qbo_listen::spell_word > 
template<>
struct DataType< ::qbo_listen::spell_wordRequest>
{
  static const char* value()
  {
    return DataType< ::qbo_listen::spell_word >::value();
  }
  static const char* value(const ::qbo_listen::spell_wordRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::qbo_listen::spell_wordResponse> should match 
// service_traits::MD5Sum< ::qbo_listen::spell_word > 
template<>
struct MD5Sum< ::qbo_listen::spell_wordResponse>
{
  static const char* value()
  {
    return MD5Sum< ::qbo_listen::spell_word >::value();
  }
  static const char* value(const ::qbo_listen::spell_wordResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::qbo_listen::spell_wordResponse> should match 
// service_traits::DataType< ::qbo_listen::spell_word > 
template<>
struct DataType< ::qbo_listen::spell_wordResponse>
{
  static const char* value()
  {
    return DataType< ::qbo_listen::spell_word >::value();
  }
  static const char* value(const ::qbo_listen::spell_wordResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // QBO_LISTEN_MESSAGE_SPELL_WORD_H