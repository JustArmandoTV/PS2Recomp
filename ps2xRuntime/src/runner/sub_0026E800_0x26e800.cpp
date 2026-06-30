#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026E800
// Address: 0x26e800 - 0x26ebe0
void sub_0026E800_0x26e800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E800_0x26e800");
#endif

    switch (ctx->pc) {
        case 0x26e848u: goto label_26e848;
        case 0x26e8ccu: goto label_26e8cc;
        case 0x26e914u: goto label_26e914;
        case 0x26e960u: goto label_26e960;
        case 0x26e9c4u: goto label_26e9c4;
        case 0x26ea14u: goto label_26ea14;
        case 0x26ea68u: goto label_26ea68;
        case 0x26eaacu: goto label_26eaac;
        case 0x26eaf8u: goto label_26eaf8;
        case 0x26eb44u: goto label_26eb44;
        case 0x26eb90u: goto label_26eb90;
        default: break;
    }

    ctx->pc = 0x26e800u;

    // 0x26e800: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26e800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26e804: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26e804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26e808: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x26e808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x26e80c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26e80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x26e810: 0x24be0038  addiu       $fp, $a1, 0x38
    ctx->pc = 0x26e810u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
    // 0x26e814: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x26e814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26e818: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x26e818u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e81c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26e81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26e820: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x26e820u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e824: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26e824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26e828: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x26e828u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e82c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26e82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26e830: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26e830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26e834: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26e834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26e838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26e838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26e83c: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x26e83cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e840: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x26e840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e844: 0x0  nop
    ctx->pc = 0x26e844u;
    // NOP
label_26e848:
    // 0x26e848: 0x3d51821  addu        $v1, $fp, $s5
    ctx->pc = 0x26e848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 21)));
    // 0x26e84c: 0x24720003  addiu       $s2, $v1, 0x3
    ctx->pc = 0x26e84cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x26e850: 0x80630003  lb          $v1, 0x3($v1)
    ctx->pc = 0x26e850u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x26e854: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x26e854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x26e858: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x26e858u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26e85c: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x26E85Cu;
    {
        const bool branch_taken_0x26e85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e85c) {
            ctx->pc = 0x26E960u;
            goto label_26e960;
        }
    }
    ctx->pc = 0x26E864u;
    // 0x26e864: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x26e864u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x26e868: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x26e868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e86c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e870: 0x8ee60024  lw          $a2, 0x24($s7)
    ctx->pc = 0x26e870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x26e874: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x26e874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26e878: 0xa79823  subu        $s3, $a1, $a3
    ctx->pc = 0x26e878u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x26e87c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x26e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x26e880: 0xc31807  srav        $v1, $v1, $a2
    ctx->pc = 0x26e880u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x26e884: 0xd39807  srav        $s3, $s3, $a2
    ctx->pc = 0x26e884u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x26e888: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x26e888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e88c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26e88cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e890: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26e890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e894: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26e894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26e898: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26e898u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26e89c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26e8a0: 0xa067ffff  sb          $a3, -0x1($v1)
    ctx->pc = 0x26e8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 7));
    // 0x26e8a4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26e8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e8a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e8ac: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26e8b0: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26e8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e8b4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e8b8: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26e8b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e8bc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E8BCu;
    {
        const bool branch_taken_0x26e8bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e8bc) {
            ctx->pc = 0x26E8D0u;
            goto label_26e8d0;
        }
    }
    ctx->pc = 0x26E8C4u;
    // 0x26e8c4: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E8C4u;
    SET_GPR_U32(ctx, 31, 0x26E8CCu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E8CCu; }
        if (ctx->pc != 0x26E8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E8CCu; }
        if (ctx->pc != 0x26E8CCu) { return; }
    }
    ctx->pc = 0x26E8CCu;
label_26e8cc:
    // 0x26e8cc: 0x0  nop
    ctx->pc = 0x26e8ccu;
    // NOP
label_26e8d0:
    // 0x26e8d0: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x26e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26e8d4: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26e8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e8d8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26e8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e8dc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26e8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26e8e0: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26e8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26e8e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26e8e8: 0xa073ffff  sb          $s3, -0x1($v1)
    ctx->pc = 0x26e8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 19));
    // 0x26e8ec: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26e8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e8f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e8f4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26e8f8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26e8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e8fc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e900: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26e900u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e904: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E904u;
    {
        const bool branch_taken_0x26e904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e904) {
            ctx->pc = 0x26E918u;
            goto label_26e918;
        }
    }
    ctx->pc = 0x26E90Cu;
    // 0x26e90c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E90Cu;
    SET_GPR_U32(ctx, 31, 0x26E914u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E914u; }
        if (ctx->pc != 0x26E914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E914u; }
        if (ctx->pc != 0x26E914u) { return; }
    }
    ctx->pc = 0x26E914u;
label_26e914:
    // 0x26e914: 0x0  nop
    ctx->pc = 0x26e914u;
    // NOP
label_26e918:
    // 0x26e918: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x26e918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26e91c: 0x26a70026  addiu       $a3, $s5, 0x26
    ctx->pc = 0x26e91cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 38));
    // 0x26e920: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26e920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e924: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26e924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e928: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26e928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26e92c: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26e92cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26e930: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26e930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26e934: 0xa067ffff  sb          $a3, -0x1($v1)
    ctx->pc = 0x26e934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 7));
    // 0x26e938: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26e938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e93c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e940: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26e940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26e944: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26e944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26e948: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26e948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26e94c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26e94cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e950: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E950u;
    {
        const bool branch_taken_0x26e950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e950) {
            ctx->pc = 0x26E960u;
            goto label_26e960;
        }
    }
    ctx->pc = 0x26E958u;
    // 0x26e958: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E958u;
    SET_GPR_U32(ctx, 31, 0x26E960u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E960u; }
        if (ctx->pc != 0x26E960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E960u; }
        if (ctx->pc != 0x26E960u) { return; }
    }
    ctx->pc = 0x26E960u;
label_26e960:
    // 0x26e960: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x26e960u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26e964: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x26e964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x26e968: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x26e968u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26e96c: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x26E96Cu;
    {
        const bool branch_taken_0x26e96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e96c) {
            ctx->pc = 0x26EB90u;
            goto label_26eb90;
        }
    }
    ctx->pc = 0x26E974u;
    // 0x26e974: 0x8ed20010  lw          $s2, 0x10($s6)
    ctx->pc = 0x26e974u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26e978: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x26e978u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26e97c: 0x8e14000c  lw          $s4, 0xC($s0)
    ctx->pc = 0x26e97cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26e980: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x26e980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26e984: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26e984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26e988: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x26e988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26e98c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x26e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26e990: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26e990u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26e994: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26e994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26e998: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26e998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26e99c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26e9a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e9a4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x26e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x26e9a8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26e9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26e9ac: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x26e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26e9b0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26e9b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26e9b4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E9B4u;
    {
        const bool branch_taken_0x26e9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E9B4u;
            // 0x26e9b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e9b4) {
            ctx->pc = 0x26E9C8u;
            goto label_26e9c8;
        }
    }
    ctx->pc = 0x26E9BCu;
    // 0x26e9bc: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26E9BCu;
    SET_GPR_U32(ctx, 31, 0x26E9C4u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E9C4u; }
        if (ctx->pc != 0x26E9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E9C4u; }
        if (ctx->pc != 0x26E9C4u) { return; }
    }
    ctx->pc = 0x26E9C4u;
label_26e9c4:
    // 0x26e9c4: 0x0  nop
    ctx->pc = 0x26e9c4u;
    // NOP
label_26e9c8:
    // 0x26e9c8: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x26e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26e9cc: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x26e9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x26e9d0: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x26e9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26e9d4: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x26e9d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x26e9d8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26e9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26e9dc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x26e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26e9e0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26e9e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26e9e8: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26e9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26e9ec: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26e9f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26e9f4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x26e9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x26e9f8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26e9fc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x26e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26ea00: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26ea00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26ea04: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EA04u;
    {
        const bool branch_taken_0x26ea04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EA04u;
            // 0x26ea08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea04) {
            ctx->pc = 0x26EA18u;
            goto label_26ea18;
        }
    }
    ctx->pc = 0x26EA0Cu;
    // 0x26ea0c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26EA0Cu;
    SET_GPR_U32(ctx, 31, 0x26EA14u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EA14u; }
        if (ctx->pc != 0x26EA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EA14u; }
        if (ctx->pc != 0x26EA14u) { return; }
    }
    ctx->pc = 0x26EA14u;
label_26ea14:
    // 0x26ea14: 0x0  nop
    ctx->pc = 0x26ea14u;
    // NOP
label_26ea18:
    // 0x26ea18: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x26ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26ea1c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x26ea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x26ea20: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x26ea20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26ea24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26ea24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26ea28: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26ea28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ea2c: 0x33403  sra         $a2, $v1, 16
    ctx->pc = 0x26ea2cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 16));
    // 0x26ea30: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x26ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26ea34: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26ea34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26ea38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26ea3c: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26ea3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26ea40: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ea44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26ea48: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x26ea48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x26ea4c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26ea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ea50: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x26ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26ea54: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26ea54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26ea58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EA58u;
    {
        const bool branch_taken_0x26ea58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EA58u;
            // 0x26ea5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea58) {
            ctx->pc = 0x26EA68u;
            goto label_26ea68;
        }
    }
    ctx->pc = 0x26EA60u;
    // 0x26ea60: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26EA60u;
    SET_GPR_U32(ctx, 31, 0x26EA68u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EA68u; }
        if (ctx->pc != 0x26EA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EA68u; }
        if (ctx->pc != 0x26EA68u) { return; }
    }
    ctx->pc = 0x26EA68u;
label_26ea68:
    // 0x26ea68: 0x8ed20010  lw          $s2, 0x10($s6)
    ctx->pc = 0x26ea68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26ea6c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x26ea6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26ea70: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ea74: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x26ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26ea78: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26ea78u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26ea7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26ea80: 0xa074ffff  sb          $s4, -0x1($v1)
    ctx->pc = 0x26ea80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 20));
    // 0x26ea84: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ea88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26ea8c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x26ea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x26ea90: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26ea90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ea94: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x26ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26ea98: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26ea98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26ea9c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EA9Cu;
    {
        const bool branch_taken_0x26ea9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EA9Cu;
            // 0x26eaa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ea9c) {
            ctx->pc = 0x26EAB0u;
            goto label_26eab0;
        }
    }
    ctx->pc = 0x26EAA4u;
    // 0x26eaa4: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26EAA4u;
    SET_GPR_U32(ctx, 31, 0x26EAACu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EAACu; }
        if (ctx->pc != 0x26EAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EAACu; }
        if (ctx->pc != 0x26EAACu) { return; }
    }
    ctx->pc = 0x26EAACu;
label_26eaac:
    // 0x26eaac: 0x0  nop
    ctx->pc = 0x26eaacu;
    // NOP
label_26eab0:
    // 0x26eab0: 0x3283ff00  andi        $v1, $s4, 0xFF00
    ctx->pc = 0x26eab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65280);
    // 0x26eab4: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x26eab4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x26eab8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x26eab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26eabc: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26eabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26eac0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x26eac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26eac4: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26eac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26eac8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26eacc: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26eaccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26ead0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26ead4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26ead8: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x26ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x26eadc: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26eadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26eae0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x26eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26eae4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26eae4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26eae8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EAE8u;
    {
        const bool branch_taken_0x26eae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EAE8u;
            // 0x26eaec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eae8) {
            ctx->pc = 0x26EAF8u;
            goto label_26eaf8;
        }
    }
    ctx->pc = 0x26EAF0u;
    // 0x26eaf0: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26EAF0u;
    SET_GPR_U32(ctx, 31, 0x26EAF8u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EAF8u; }
        if (ctx->pc != 0x26EAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EAF8u; }
        if (ctx->pc != 0x26EAF8u) { return; }
    }
    ctx->pc = 0x26EAF8u;
label_26eaf8:
    // 0x26eaf8: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x26eaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x26eafc: 0x2831824  and         $v1, $s4, $v1
    ctx->pc = 0x26eafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x26eb00: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x26eb00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26eb04: 0x33403  sra         $a2, $v1, 16
    ctx->pc = 0x26eb04u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 16));
    // 0x26eb08: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26eb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26eb0c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x26eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x26eb10: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26eb10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26eb14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26eb18: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26eb18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26eb1c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26eb20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26eb24: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x26eb24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x26eb28: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26eb2c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x26eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26eb30: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26eb30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26eb34: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EB34u;
    {
        const bool branch_taken_0x26eb34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EB34u;
            // 0x26eb38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb34) {
            ctx->pc = 0x26EB48u;
            goto label_26eb48;
        }
    }
    ctx->pc = 0x26EB3Cu;
    // 0x26eb3c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26EB3Cu;
    SET_GPR_U32(ctx, 31, 0x26EB44u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB44u; }
        if (ctx->pc != 0x26EB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB44u; }
        if (ctx->pc != 0x26EB44u) { return; }
    }
    ctx->pc = 0x26EB44u;
label_26eb44:
    // 0x26eb44: 0x0  nop
    ctx->pc = 0x26eb44u;
    // NOP
label_26eb48:
    // 0x26eb48: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x26eb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x26eb4c: 0x26a70029  addiu       $a3, $s5, 0x29
    ctx->pc = 0x26eb4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 41));
    // 0x26eb50: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x26eb50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26eb54: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26eb54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26eb58: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26eb5c: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x26eb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26eb60: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26eb64: 0xa067ffff  sb          $a3, -0x1($v1)
    ctx->pc = 0x26eb64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 7));
    // 0x26eb68: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x26eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26eb6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26eb70: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x26eb74: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26eb74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26eb78: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26eb7c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x26eb7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26eb80: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EB80u;
    {
        const bool branch_taken_0x26eb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26eb80) {
            ctx->pc = 0x26EB90u;
            goto label_26eb90;
        }
    }
    ctx->pc = 0x26EB88u;
    // 0x26eb88: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26EB88u;
    SET_GPR_U32(ctx, 31, 0x26EB90u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB90u; }
        if (ctx->pc != 0x26EB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EB90u; }
        if (ctx->pc != 0x26EB90u) { return; }
    }
    ctx->pc = 0x26EB90u;
label_26eb90:
    // 0x26eb90: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x26eb90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x26eb94: 0x2aa30003  slti        $v1, $s5, 0x3
    ctx->pc = 0x26eb94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26eb98: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x26eb98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x26eb9c: 0x1460ff2a  bnez        $v1, . + 4 + (-0xD6 << 2)
    ctx->pc = 0x26EB9Cu;
    {
        const bool branch_taken_0x26eb9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EB9Cu;
            // 0x26eba0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb9c) {
            ctx->pc = 0x26E848u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26e848;
        }
    }
    ctx->pc = 0x26EBA4u;
    // 0x26eba4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26eba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26eba8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x26eba8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26ebac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26ebacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26ebb0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26ebb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26ebb4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26ebb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26ebb8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26ebb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26ebbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26ebbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ebc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26ebc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ebc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ebc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ebc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ebc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ebcc: 0x3e00008  jr          $ra
    ctx->pc = 0x26EBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EBCCu;
            // 0x26ebd0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26EBD4u;
    // 0x26ebd4: 0x0  nop
    ctx->pc = 0x26ebd4u;
    // NOP
    // 0x26ebd8: 0x0  nop
    ctx->pc = 0x26ebd8u;
    // NOP
    // 0x26ebdc: 0x0  nop
    ctx->pc = 0x26ebdcu;
    // NOP
}
