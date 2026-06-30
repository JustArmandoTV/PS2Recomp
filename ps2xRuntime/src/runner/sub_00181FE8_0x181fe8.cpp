#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181FE8
// Address: 0x181fe8 - 0x1821b8
void sub_00181FE8_0x181fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181FE8_0x181fe8");
#endif

    switch (ctx->pc) {
        case 0x182184u: goto label_182184;
        case 0x182198u: goto label_182198;
        default: break;
    }

    ctx->pc = 0x181fe8u;

    // 0x181fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181fec: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x181fecu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ff0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x181ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181ff4: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x181ff4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x181ff8: 0x25ad6dd0  addiu       $t5, $t5, 0x6DD0
    ctx->pc = 0x181ff8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 28112));
    // 0x181ffc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x181ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x182000: 0x8f03001c  lw          $v1, 0x1C($t8)
    ctx->pc = 0x182000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 28)));
    // 0x182004: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x182004u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x182008: 0x8f020020  lw          $v0, 0x20($t8)
    ctx->pc = 0x182008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x18200c: 0x240bf211  addiu       $t3, $zero, -0xDEF
    ctx->pc = 0x18200cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963729));
    // 0x182010: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x182010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x182014: 0x240ff82a  addiu       $t7, $zero, -0x7D6
    ctx->pc = 0x182014u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965290));
    // 0x182018: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x182018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18201c: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x18201cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x182020: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x182020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x182024: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x182024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182028: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x182028u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18202c: 0x8f020028  lw          $v0, 0x28($t8)
    ctx->pc = 0x18202cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 40)));
    // 0x182030: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x182030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x182034: 0x70a82818  mult1       $a1, $a1, $t0
    ctx->pc = 0x182034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x182038: 0x8f080008  lw          $t0, 0x8($t8)
    ctx->pc = 0x182038u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x18203c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18203cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x182040: 0x8f0a0014  lw          $t2, 0x14($t8)
    ctx->pc = 0x182040u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x182044: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x182044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x182048: 0x8f0c0024  lw          $t4, 0x24($t8)
    ctx->pc = 0x182048u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x18204c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18204cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182050: 0x24020def  addiu       $v0, $zero, 0xDEF
    ctx->pc = 0x182050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3567));
    // 0x182054: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x182054u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x182058: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x182058u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x18205c: 0xa34818  mult        $t1, $a1, $v1
    ctx->pc = 0x18205cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x182060: 0x70831818  mult1       $v1, $a0, $v1
    ctx->pc = 0x182060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x182064: 0x8f10000c  lw          $s0, 0xC($t8)
    ctx->pc = 0x182064u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 12)));
    // 0x182068: 0xa7080  sll         $t6, $t2, 2
    ctx->pc = 0x182068u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x18206c: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x18206cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182070: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x182070u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x182074: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x182074u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x182078: 0x240807d6  addiu       $t0, $zero, 0x7D6
    ctx->pc = 0x182078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2006));
    // 0x18207c: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x18207cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x182080: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x182080u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x182084: 0x6b5818  mult        $t3, $v1, $t3
    ctx->pc = 0x182084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x182088: 0x70681818  mult1       $v1, $v1, $t0
    ctx->pc = 0x182088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18208c: 0x712f7818  mult1       $t7, $t1, $t7
    ctx->pc = 0x18208cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x182090: 0x1224818  mult        $t1, $t1, $v0
    ctx->pc = 0x182090u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x182094: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x182094u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x182098: 0x1506821  addu        $t5, $t2, $s0
    ctx->pc = 0x182098u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x18209c: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x18209cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1820a0: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x1820a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1820a4: 0x8da80000  lw          $t0, 0x0($t5)
    ctx->pc = 0x1820a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1820a8: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x1820a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x1820ac: 0x8d4c0000  lw          $t4, 0x0($t2)
    ctx->pc = 0x1820acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1820b0: 0xb5b03  sra         $t3, $t3, 12
    ctx->pc = 0x1820b0u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 12));
    // 0x1820b4: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1820b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1820b8: 0xadcb0000  sw          $t3, 0x0($t6)
    ctx->pc = 0x1820b8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 11));
    // 0x1820bc: 0x240b7fff  addiu       $t3, $zero, 0x7FFF
    ctx->pc = 0x1820bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1820c0: 0x70822018  mult1       $a0, $a0, $v0
    ctx->pc = 0x1820c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1820c4: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x1820c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1820c8: 0x8f020014  lw          $v0, 0x14($t8)
    ctx->pc = 0x1820c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x1820cc: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x1820ccu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x1820d0: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x1820d0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x1820d4: 0x240a7fff  addiu       $t2, $zero, 0x7FFF
    ctx->pc = 0x1820d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1820d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1820d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1820dc: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x1820dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1820e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1820e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1820e4: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x1820e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x1820e8: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x1820e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x1820ec: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1820ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1820f0: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x1820f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x1820f4: 0x240c8000  addiu       $t4, $zero, -0x8000
    ctx->pc = 0x1820f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1820f8: 0x8f080014  lw          $t0, 0x14($t8)
    ctx->pc = 0x1820f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x1820fc: 0x144502a  slt         $t2, $t2, $a0
    ctx->pc = 0x1820fcu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x182100: 0x165582a  slt         $t3, $t3, $a1
    ctx->pc = 0x182100u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x182104: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x182104u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x182108: 0x288d8000  slti        $t5, $a0, -0x8000
    ctx->pc = 0x182108u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x18210c: 0x8f090018  lw          $t1, 0x18($t8)
    ctx->pc = 0x18210cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x182110: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x182110u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x182114: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x182114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x182118: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x182118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18211c: 0x18d200b  movn        $a0, $t4, $t5
    ctx->pc = 0x18211cu;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 12));
    // 0x182120: 0x394a0000  xori        $t2, $t2, 0x0
    ctx->pc = 0x182120u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)0);
    // 0x182124: 0x396b0000  xori        $t3, $t3, 0x0
    ctx->pc = 0x182124u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)0);
    // 0x182128: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x182128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x18212c: 0x4a200b  movn        $a0, $v0, $t2
    ctx->pc = 0x18212cu;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x182130: 0x6b280b  movn        $a1, $v1, $t3
    ctx->pc = 0x182130u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x182134: 0x109482a  slt         $t1, $t0, $t1
    ctx->pc = 0x182134u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x182138: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x182138u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18213c: 0xaf080014  sw          $t0, 0x14($t8)
    ctx->pc = 0x18213cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 8));
    // 0x182140: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x182140u;
    {
        const bool branch_taken_0x182140 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x182144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182140u;
            // 0x182144: 0xa4e50000  sh          $a1, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182140) {
            ctx->pc = 0x18214Cu;
            goto label_18214c;
        }
    }
    ctx->pc = 0x182148u;
    // 0x182148: 0xaf000014  sw          $zero, 0x14($t8)
    ctx->pc = 0x182148u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 0));
label_18214c:
    // 0x18214c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18214cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182150: 0x3e00008  jr          $ra
    ctx->pc = 0x182150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182150u;
            // 0x182154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182158u;
    // 0x182158: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x182158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18215c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18215cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182160: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182164: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x182164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x182168: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x182168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18216c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18216cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x182170: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x182170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182174: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x182174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x182178: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x182178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18217c: 0xc060704  jal         func_181C10
    ctx->pc = 0x18217Cu;
    SET_GPR_U32(ctx, 31, 0x182184u);
    ctx->pc = 0x182180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18217Cu;
            // 0x182180: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C10u;
    if (runtime->hasFunction(0x181C10u)) {
        auto targetFn = runtime->lookupFunction(0x181C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182184u; }
        if (ctx->pc != 0x182184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C10_0x181c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182184u; }
        if (ctx->pc != 0x182184u) { return; }
    }
    ctx->pc = 0x182184u;
label_182184:
    // 0x182184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x182188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18218c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18218cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182190: 0xc06086e  jal         func_1821B8
    ctx->pc = 0x182190u;
    SET_GPR_U32(ctx, 31, 0x182198u);
    ctx->pc = 0x182194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182190u;
            // 0x182194: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1821B8u;
    if (runtime->hasFunction(0x1821B8u)) {
        auto targetFn = runtime->lookupFunction(0x1821B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182198u; }
        if (ctx->pc != 0x182198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001821B8_0x1821b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182198u; }
        if (ctx->pc != 0x182198u) { return; }
    }
    ctx->pc = 0x182198u;
label_182198:
    // 0x182198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x182198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18219c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18219cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1821a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1821a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1821a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1821a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1821a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1821a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1821ac: 0x806070a  j           func_181C28
    ctx->pc = 0x1821ACu;
    ctx->pc = 0x1821B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1821ACu;
            // 0x1821b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C28u;
    if (runtime->hasFunction(0x181C28u)) {
        auto targetFn = runtime->lookupFunction(0x181C28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00181C28_0x181c28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1821B4u;
    // 0x1821b4: 0x0  nop
    ctx->pc = 0x1821b4u;
    // NOP
}
