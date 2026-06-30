#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00367CC0
// Address: 0x367cc0 - 0x3687c0
void sub_00367CC0_0x367cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367CC0_0x367cc0");
#endif

    switch (ctx->pc) {
        case 0x367d18u: goto label_367d18;
        case 0x367e48u: goto label_367e48;
        case 0x367e58u: goto label_367e58;
        case 0x367e68u: goto label_367e68;
        case 0x367e78u: goto label_367e78;
        case 0x367e88u: goto label_367e88;
        case 0x367ea8u: goto label_367ea8;
        case 0x367f08u: goto label_367f08;
        case 0x367f24u: goto label_367f24;
        case 0x3684d0u: goto label_3684d0;
        case 0x368560u: goto label_368560;
        case 0x3685f0u: goto label_3685f0;
        case 0x368740u: goto label_368740;
        case 0x368770u: goto label_368770;
        default: break;
    }

    ctx->pc = 0x367cc0u;

label_367cc0:
    // 0x367cc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x367cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x367cc4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x367cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x367cc8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x367cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x367ccc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x367cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x367cd0: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x367cd0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367cd4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x367cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x367cd8: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x367cd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367cdc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x367cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x367ce0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x367ce0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ce4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x367ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x367ce8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x367ce8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367cec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x367cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x367cf0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x367cf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367cf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x367cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x367cf8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x367cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x367cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x367d00: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x367d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d04: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x367d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x367d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367d0c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x367d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x367d10: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x367D10u;
    SET_GPR_U32(ctx, 31, 0x367D18u);
    ctx->pc = 0x367D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367D10u;
            // 0x367d14: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367D18u; }
        if (ctx->pc != 0x367D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367D18u; }
        if (ctx->pc != 0x367D18u) { return; }
    }
    ctx->pc = 0x367D18u;
label_367d18:
    // 0x367d18: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x367d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x367d1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x367d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x367d20: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x367d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x367d24: 0x244269b0  addiu       $v0, $v0, 0x69B0
    ctx->pc = 0x367d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27056));
    // 0x367d28: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x367d28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x367d2c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x367d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x367d30: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x367d30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x367d34: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x367d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x367d38: 0xaea00054  sw          $zero, 0x54($s5)
    ctx->pc = 0x367d38u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 0));
    // 0x367d3c: 0x24023e8a  addiu       $v0, $zero, 0x3E8A
    ctx->pc = 0x367d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16010));
    // 0x367d40: 0xaeb40058  sw          $s4, 0x58($s5)
    ctx->pc = 0x367d40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 20));
    // 0x367d44: 0xaea00060  sw          $zero, 0x60($s5)
    ctx->pc = 0x367d44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 0));
    // 0x367d48: 0xaea0007c  sw          $zero, 0x7C($s5)
    ctx->pc = 0x367d48u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 0));
    // 0x367d4c: 0xaea00098  sw          $zero, 0x98($s5)
    ctx->pc = 0x367d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 152), GPR_U32(ctx, 0));
    // 0x367d50: 0xaea300b4  sw          $v1, 0xB4($s5)
    ctx->pc = 0x367d50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 3));
    // 0x367d54: 0xaea300b8  sw          $v1, 0xB8($s5)
    ctx->pc = 0x367d54u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 184), GPR_U32(ctx, 3));
    // 0x367d58: 0xaeb60100  sw          $s6, 0x100($s5)
    ctx->pc = 0x367d58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 256), GPR_U32(ctx, 22));
    // 0x367d5c: 0xaea00104  sw          $zero, 0x104($s5)
    ctx->pc = 0x367d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 260), GPR_U32(ctx, 0));
    // 0x367d60: 0xaea00190  sw          $zero, 0x190($s5)
    ctx->pc = 0x367d60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 400), GPR_U32(ctx, 0));
    // 0x367d64: 0xaea00194  sw          $zero, 0x194($s5)
    ctx->pc = 0x367d64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 404), GPR_U32(ctx, 0));
    // 0x367d68: 0xaea00198  sw          $zero, 0x198($s5)
    ctx->pc = 0x367d68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 408), GPR_U32(ctx, 0));
    // 0x367d6c: 0xaea0019c  sw          $zero, 0x19C($s5)
    ctx->pc = 0x367d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 412), GPR_U32(ctx, 0));
    // 0x367d70: 0xaea001a0  sw          $zero, 0x1A0($s5)
    ctx->pc = 0x367d70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 416), GPR_U32(ctx, 0));
    // 0x367d74: 0xaea001a4  sw          $zero, 0x1A4($s5)
    ctx->pc = 0x367d74u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 420), GPR_U32(ctx, 0));
    // 0x367d78: 0xaea001a8  sw          $zero, 0x1A8($s5)
    ctx->pc = 0x367d78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 424), GPR_U32(ctx, 0));
    // 0x367d7c: 0xaea001ac  sw          $zero, 0x1AC($s5)
    ctx->pc = 0x367d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 428), GPR_U32(ctx, 0));
    // 0x367d80: 0xaea001b0  sw          $zero, 0x1B0($s5)
    ctx->pc = 0x367d80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 432), GPR_U32(ctx, 0));
    // 0x367d84: 0xaea001b4  sw          $zero, 0x1B4($s5)
    ctx->pc = 0x367d84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 436), GPR_U32(ctx, 0));
    // 0x367d88: 0xaea001b8  sw          $zero, 0x1B8($s5)
    ctx->pc = 0x367d88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 440), GPR_U32(ctx, 0));
    // 0x367d8c: 0xaea001bc  sw          $zero, 0x1BC($s5)
    ctx->pc = 0x367d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 444), GPR_U32(ctx, 0));
    // 0x367d90: 0xa6a401c0  sh          $a0, 0x1C0($s5)
    ctx->pc = 0x367d90u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 448), (uint16_t)GPR_U32(ctx, 4));
    // 0x367d94: 0xa6a401c2  sh          $a0, 0x1C2($s5)
    ctx->pc = 0x367d94u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 450), (uint16_t)GPR_U32(ctx, 4));
    // 0x367d98: 0xa6a401c4  sh          $a0, 0x1C4($s5)
    ctx->pc = 0x367d98u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 452), (uint16_t)GPR_U32(ctx, 4));
    // 0x367d9c: 0xa6a401c6  sh          $a0, 0x1C6($s5)
    ctx->pc = 0x367d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 454), (uint16_t)GPR_U32(ctx, 4));
    // 0x367da0: 0xa6a401c8  sh          $a0, 0x1C8($s5)
    ctx->pc = 0x367da0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 456), (uint16_t)GPR_U32(ctx, 4));
    // 0x367da4: 0xa6a401ca  sh          $a0, 0x1CA($s5)
    ctx->pc = 0x367da4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 458), (uint16_t)GPR_U32(ctx, 4));
    // 0x367da8: 0xaea001cc  sw          $zero, 0x1CC($s5)
    ctx->pc = 0x367da8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 460), GPR_U32(ctx, 0));
    // 0x367dac: 0xaea001d0  sw          $zero, 0x1D0($s5)
    ctx->pc = 0x367dacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 464), GPR_U32(ctx, 0));
    // 0x367db0: 0xaea001d4  sw          $zero, 0x1D4($s5)
    ctx->pc = 0x367db0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 468), GPR_U32(ctx, 0));
    // 0x367db4: 0x93a30090  lbu         $v1, 0x90($sp)
    ctx->pc = 0x367db4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x367db8: 0xa2b701d8  sb          $s7, 0x1D8($s5)
    ctx->pc = 0x367db8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 472), (uint8_t)GPR_U32(ctx, 23));
    // 0x367dbc: 0xa2a301d9  sb          $v1, 0x1D9($s5)
    ctx->pc = 0x367dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 473), (uint8_t)GPR_U32(ctx, 3));
    // 0x367dc0: 0xa6a001da  sh          $zero, 0x1DA($s5)
    ctx->pc = 0x367dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 474), (uint16_t)GPR_U32(ctx, 0));
    // 0x367dc4: 0xa6a401dc  sh          $a0, 0x1DC($s5)
    ctx->pc = 0x367dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 476), (uint16_t)GPR_U32(ctx, 4));
    // 0x367dc8: 0xa6a001de  sh          $zero, 0x1DE($s5)
    ctx->pc = 0x367dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 478), (uint16_t)GPR_U32(ctx, 0));
    // 0x367dcc: 0xa6a401e0  sh          $a0, 0x1E0($s5)
    ctx->pc = 0x367dccu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 480), (uint16_t)GPR_U32(ctx, 4));
    // 0x367dd0: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x367dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x367dd4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x367dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x367dd8: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x367DD8u;
    {
        const bool branch_taken_0x367dd8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x367DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367DD8u;
            // 0x367ddc: 0xaea30054  sw          $v1, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367dd8) {
            ctx->pc = 0x367DF8u;
            goto label_367df8;
        }
    }
    ctx->pc = 0x367DE0u;
    // 0x367de0: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x367de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x367de4: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x367de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x367de8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x367de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x367dec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x367decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x367df0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x367DF0u;
    {
        const bool branch_taken_0x367df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367DF0u;
            // 0x367df4: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367df0) {
            ctx->pc = 0x367E38u;
            goto label_367e38;
        }
    }
    ctx->pc = 0x367DF8u;
label_367df8:
    // 0x367df8: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x367df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x367dfc: 0x34428bd7  ori         $v0, $v0, 0x8BD7
    ctx->pc = 0x367dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35799);
    // 0x367e00: 0x56620007  bnel        $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x367E00u;
    {
        const bool branch_taken_0x367e00 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x367e00) {
            ctx->pc = 0x367E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367E00u;
            // 0x367e04: 0x2e623e80  sltiu       $v0, $s3, 0x3E80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16000) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x367E20u;
            goto label_367e20;
        }
    }
    ctx->pc = 0x367E08u;
    // 0x367e08: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x367e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x367e0c: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x367e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x367e10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x367e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x367e14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x367e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x367e18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x367E18u;
    {
        const bool branch_taken_0x367e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367E18u;
            // 0x367e1c: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367e18) {
            ctx->pc = 0x367E38u;
            goto label_367e38;
        }
    }
    ctx->pc = 0x367E20u;
label_367e20:
    // 0x367e20: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x367E20u;
    {
        const bool branch_taken_0x367e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367e20) {
            ctx->pc = 0x367E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367E20u;
            // 0x367e24: 0x26a40064  addiu       $a0, $s5, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x367E3Cu;
            goto label_367e3c;
        }
    }
    ctx->pc = 0x367E28u;
    // 0x367e28: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x367e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x367e2c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x367e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x367e30: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x367e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x367e34: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x367e34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_367e38:
    // 0x367e38: 0x26a40064  addiu       $a0, $s5, 0x64
    ctx->pc = 0x367e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
label_367e3c:
    // 0x367e3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x367e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e40: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x367E40u;
    SET_GPR_U32(ctx, 31, 0x367E48u);
    ctx->pc = 0x367E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367E40u;
            // 0x367e44: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367E48u; }
        if (ctx->pc != 0x367E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367E48u; }
        if (ctx->pc != 0x367E48u) { return; }
    }
    ctx->pc = 0x367E48u;
label_367e48:
    // 0x367e48: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x367e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x367e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x367e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e50: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x367E50u;
    SET_GPR_U32(ctx, 31, 0x367E58u);
    ctx->pc = 0x367E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367E50u;
            // 0x367e54: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367E58u; }
        if (ctx->pc != 0x367E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367E58u; }
        if (ctx->pc != 0x367E58u) { return; }
    }
    ctx->pc = 0x367E58u;
label_367e58:
    // 0x367e58: 0x26a40080  addiu       $a0, $s5, 0x80
    ctx->pc = 0x367e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x367e5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x367e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e60: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x367E60u;
    SET_GPR_U32(ctx, 31, 0x367E68u);
    ctx->pc = 0x367E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367E60u;
            // 0x367e64: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367E68u; }
        if (ctx->pc != 0x367E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367E68u; }
        if (ctx->pc != 0x367E68u) { return; }
    }
    ctx->pc = 0x367E68u;
label_367e68:
    // 0x367e68: 0x26a4008c  addiu       $a0, $s5, 0x8C
    ctx->pc = 0x367e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 140));
    // 0x367e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x367e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e70: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x367E70u;
    SET_GPR_U32(ctx, 31, 0x367E78u);
    ctx->pc = 0x367E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367E70u;
            // 0x367e74: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367E78u; }
        if (ctx->pc != 0x367E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367E78u; }
        if (ctx->pc != 0x367E78u) { return; }
    }
    ctx->pc = 0x367E78u;
label_367e78:
    // 0x367e78: 0x26a400a8  addiu       $a0, $s5, 0xA8
    ctx->pc = 0x367e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 168));
    // 0x367e7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x367e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e80: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x367E80u;
    SET_GPR_U32(ctx, 31, 0x367E88u);
    ctx->pc = 0x367E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367E80u;
            // 0x367e84: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367E88u; }
        if (ctx->pc != 0x367E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367E88u; }
        if (ctx->pc != 0x367E88u) { return; }
    }
    ctx->pc = 0x367E88u;
label_367e88:
    // 0x367e88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x367e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x367e8c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x367e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x367e90: 0xaea200a4  sw          $v0, 0xA4($s5)
    ctx->pc = 0x367e90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 2));
    // 0x367e94: 0x26a400c0  addiu       $a0, $s5, 0xC0
    ctx->pc = 0x367e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x367e98: 0xaea200a0  sw          $v0, 0xA0($s5)
    ctx->pc = 0x367e98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 160), GPR_U32(ctx, 2));
    // 0x367e9c: 0x24a54c10  addiu       $a1, $a1, 0x4C10
    ctx->pc = 0x367e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19472));
    // 0x367ea0: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x367EA0u;
    SET_GPR_U32(ctx, 31, 0x367EA8u);
    ctx->pc = 0x367EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367EA0u;
            // 0x367ea4: 0xaea2009c  sw          $v0, 0x9C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367EA8u; }
        if (ctx->pc != 0x367EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367EA8u; }
        if (ctx->pc != 0x367EA8u) { return; }
    }
    ctx->pc = 0x367EA8u;
label_367ea8:
    // 0x367ea8: 0x8ea40058  lw          $a0, 0x58($s5)
    ctx->pc = 0x367ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x367eac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x367eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x367eb0: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x367eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
    // 0x367eb4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x367eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x367eb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x367eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x367ebc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x367ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x367ec0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x367ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x367ec4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x367ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x367ec8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x367ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x367ecc: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x367ECCu;
    {
        const bool branch_taken_0x367ecc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x367ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367ECCu;
            // 0x367ed0: 0xaea20104  sw          $v0, 0x104($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367ecc) {
            ctx->pc = 0x367EFCu;
            goto label_367efc;
        }
    }
    ctx->pc = 0x367ED4u;
    // 0x367ed4: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x367ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x367ed8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x367ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x367edc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x367edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x367ee0: 0x24424714  addiu       $v0, $v0, 0x4714
    ctx->pc = 0x367ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18196));
    // 0x367ee4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x367ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x367ee8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x367ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x367eec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x367eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x367ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x367ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x367ef4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x367ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x367ef8: 0xaea20190  sw          $v0, 0x190($s5)
    ctx->pc = 0x367ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 400), GPR_U32(ctx, 2));
label_367efc:
    // 0x367efc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x367efcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x367f00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x367f04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_367f08:
    // 0x367f08: 0x2b31821  addu        $v1, $s5, $s3
    ctx->pc = 0x367f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x367f0c: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x367f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x367f10: 0xac600108  sw          $zero, 0x108($v1)
    ctx->pc = 0x367f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 0));
    // 0x367f14: 0x24440110  addiu       $a0, $v0, 0x110
    ctx->pc = 0x367f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x367f18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x367f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f1c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x367F1Cu;
    SET_GPR_U32(ctx, 31, 0x367F24u);
    ctx->pc = 0x367F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x367F1Cu;
            // 0x367f20: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367F24u; }
        if (ctx->pc != 0x367F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x367F24u; }
        if (ctx->pc != 0x367F24u) { return; }
    }
    ctx->pc = 0x367F24u;
label_367f24:
    // 0x367f24: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x367f24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x367f28: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x367f28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x367f2c: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x367f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x367f30: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x367F30u;
    {
        const bool branch_taken_0x367f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367F30u;
            // 0x367f34: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367f30) {
            ctx->pc = 0x367F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_367f08;
        }
    }
    ctx->pc = 0x367F38u;
    // 0x367f38: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x367F38u;
    {
        const bool branch_taken_0x367f38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x367f38) {
            ctx->pc = 0x367F50u;
            goto label_367f50;
        }
    }
    ctx->pc = 0x367F40u;
    // 0x367f40: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x367f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x367f44: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x367f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x367f48: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x367f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x367f4c: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x367f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_367f50:
    // 0x367f50: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x367F50u;
    {
        const bool branch_taken_0x367f50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x367f50) {
            ctx->pc = 0x367F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367F50u;
            // 0x367f54: 0x8ea20104  lw          $v0, 0x104($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x367F6Cu;
            goto label_367f6c;
        }
    }
    ctx->pc = 0x367F58u;
    // 0x367f58: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x367f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x367f5c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x367f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x367f60: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x367f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x367f64: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x367f64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    // 0x367f68: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x367f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
label_367f6c:
    // 0x367f6c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x367f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x367f70: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x367F70u;
    {
        const bool branch_taken_0x367f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x367f70) {
            ctx->pc = 0x367F74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367F70u;
            // 0x367f74: 0x8ea20104  lw          $v0, 0x104($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x367F88u;
            goto label_367f88;
        }
    }
    ctx->pc = 0x367F78u;
    // 0x367f78: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x367f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x367f7c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x367f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x367f80: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x367f80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    // 0x367f84: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x367f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
label_367f88:
    // 0x367f88: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x367f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x367f8c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x367F8Cu;
    {
        const bool branch_taken_0x367f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x367f8c) {
            ctx->pc = 0x367F90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367F8Cu;
            // 0x367f90: 0x8ea20104  lw          $v0, 0x104($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x367FA4u;
            goto label_367fa4;
        }
    }
    ctx->pc = 0x367F94u;
    // 0x367f94: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x367f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x367f98: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x367f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x367f9c: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x367f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    // 0x367fa0: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x367fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
label_367fa4:
    // 0x367fa4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x367fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x367fa8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x367FA8u;
    {
        const bool branch_taken_0x367fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x367fa8) {
            ctx->pc = 0x367FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x367FA8u;
            // 0x367fac: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x367FC0u;
            goto label_367fc0;
        }
    }
    ctx->pc = 0x367FB0u;
    // 0x367fb0: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x367fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x367fb4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x367fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x367fb8: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x367fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    // 0x367fbc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x367fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_367fc0:
    // 0x367fc0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x367fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x367fc4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x367fc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x367fc8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x367fc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x367fcc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x367fccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x367fd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x367fd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x367fd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x367fd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367fd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x367fd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367fdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x367fdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367fe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x367fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x367FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x367FE4u;
            // 0x367fe8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x367FECu;
    // 0x367fec: 0x0  nop
    ctx->pc = 0x367fecu;
    // NOP
    // 0x367ff0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x367ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x367ff4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x367ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x367ff8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x367ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x367ffc: 0x24424680  addiu       $v0, $v0, 0x4680
    ctx->pc = 0x367ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18048));
    // 0x368000: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x368000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x368004: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x368004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x368008: 0x8c870044  lw          $a3, 0x44($a0)
    ctx->pc = 0x368008u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x36800c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36800cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x368010: 0x80d9e64  j           func_367990
    ctx->pc = 0x368010u;
    ctx->pc = 0x368014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368010u;
            // 0x368014: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x367990u;
    {
        auto targetFn = runtime->lookupFunction(0x367990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x368018u;
    // 0x368018: 0x0  nop
    ctx->pc = 0x368018u;
    // NOP
    // 0x36801c: 0x0  nop
    ctx->pc = 0x36801cu;
    // NOP
    // 0x368020: 0x3e00008  jr          $ra
    ctx->pc = 0x368020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x368028u;
    // 0x368028: 0x0  nop
    ctx->pc = 0x368028u;
    // NOP
    // 0x36802c: 0x0  nop
    ctx->pc = 0x36802cu;
    // NOP
    // 0x368030: 0x3e00008  jr          $ra
    ctx->pc = 0x368030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x368038u;
    // 0x368038: 0x0  nop
    ctx->pc = 0x368038u;
    // NOP
    // 0x36803c: 0x0  nop
    ctx->pc = 0x36803cu;
    // NOP
    // 0x368040: 0x3e00008  jr          $ra
    ctx->pc = 0x368040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x368048u;
    // 0x368048: 0x0  nop
    ctx->pc = 0x368048u;
    // NOP
    // 0x36804c: 0x0  nop
    ctx->pc = 0x36804cu;
    // NOP
    // 0x368050: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x368050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x368054: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x368054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x368058: 0x24634680  addiu       $v1, $v1, 0x4680
    ctx->pc = 0x368058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18048));
    // 0x36805c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x36805cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x368060: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368064: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x368064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368068: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x368068u;
    {
        const bool branch_taken_0x368068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x368068) {
            ctx->pc = 0x368080u;
            goto label_368080;
        }
    }
    ctx->pc = 0x368070u;
    // 0x368070: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x368070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x368074: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x368074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x368078: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x368078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x36807c: 0xaca30054  sw          $v1, 0x54($a1)
    ctx->pc = 0x36807cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
label_368080:
    // 0x368080: 0x3e00008  jr          $ra
    ctx->pc = 0x368080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x368088u;
    // 0x368088: 0x0  nop
    ctx->pc = 0x368088u;
    // NOP
    // 0x36808c: 0x0  nop
    ctx->pc = 0x36808cu;
    // NOP
    // 0x368090: 0x3e00008  jr          $ra
    ctx->pc = 0x368090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x368098u;
    // 0x368098: 0x0  nop
    ctx->pc = 0x368098u;
    // NOP
    // 0x36809c: 0x0  nop
    ctx->pc = 0x36809cu;
    // NOP
    // 0x3680a0: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x3680a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x3680a4: 0x24850064  addiu       $a1, $a0, 0x64
    ctx->pc = 0x3680a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x3680a8: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x3680a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3680ac: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3680acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3680b0: 0x24634680  addiu       $v1, $v1, 0x4680
    ctx->pc = 0x3680b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18048));
    // 0x3680b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3680b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3680b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3680b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3680bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3680bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3680c0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3680C0u;
    {
        const bool branch_taken_0x3680c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3680c0) {
            ctx->pc = 0x3680F0u;
            goto label_3680f0;
        }
    }
    ctx->pc = 0x3680C8u;
    // 0x3680c8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3680c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3680cc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3680ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3680d0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3680d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x3680d4: 0xe4810098  swc1        $f1, 0x98($a0)
    ctx->pc = 0x3680d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x3680d8: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x3680d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x3680dc: 0xe48000ac  swc1        $f0, 0xAC($a0)
    ctx->pc = 0x3680dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x3680e0: 0xe48000b0  swc1        $f0, 0xB0($a0)
    ctx->pc = 0x3680e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x3680e4: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x3680e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3680e8: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x3680e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x3680ec: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x3680ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_3680f0:
    // 0x3680f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3680F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3680F8u;
    // 0x3680f8: 0x0  nop
    ctx->pc = 0x3680f8u;
    // NOP
    // 0x3680fc: 0x0  nop
    ctx->pc = 0x3680fcu;
    // NOP
    // 0x368100: 0x24880024  addiu       $t0, $a0, 0x24
    ctx->pc = 0x368100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x368104: 0x24870034  addiu       $a3, $a0, 0x34
    ctx->pc = 0x368104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x368108: 0x24860044  addiu       $a2, $a0, 0x44
    ctx->pc = 0x368108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    // 0x36810c: 0x24850054  addiu       $a1, $a0, 0x54
    ctx->pc = 0x36810cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x368110: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x368110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x368114: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x368114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x368118: 0x24634680  addiu       $v1, $v1, 0x4680
    ctx->pc = 0x368118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18048));
    // 0x36811c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x36811cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x368120: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368124: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x368124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368128: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x368128u;
    {
        const bool branch_taken_0x368128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x368128) {
            ctx->pc = 0x368168u;
            goto label_368168;
        }
    }
    ctx->pc = 0x368130u;
    // 0x368130: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x368130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368134: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x368134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x368138: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x368138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36813c: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x36813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x368140: 0x46030083  div.s       $f2, $f0, $f3
    ctx->pc = 0x368140u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[3];
    // 0x368144: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x368144u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x368148: 0xe483007c  swc1        $f3, 0x7C($a0)
    ctx->pc = 0x368148u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x36814c: 0xe482008c  swc1        $f2, 0x8C($a0)
    ctx->pc = 0x36814cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x368150: 0x46032003  div.s       $f0, $f4, $f3
    ctx->pc = 0x368150u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[3];
    // 0x368154: 0xe4810090  swc1        $f1, 0x90($a0)
    ctx->pc = 0x368154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x368158: 0xe4800094  swc1        $f0, 0x94($a0)
    ctx->pc = 0x368158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x36815c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x36815cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x368160: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x368160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x368164: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x368164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_368168:
    // 0x368168: 0x3e00008  jr          $ra
    ctx->pc = 0x368168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x368170u;
    // 0x368170: 0x24880024  addiu       $t0, $a0, 0x24
    ctx->pc = 0x368170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x368174: 0x24870034  addiu       $a3, $a0, 0x34
    ctx->pc = 0x368174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x368178: 0x24860044  addiu       $a2, $a0, 0x44
    ctx->pc = 0x368178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    // 0x36817c: 0x24850054  addiu       $a1, $a0, 0x54
    ctx->pc = 0x36817cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x368180: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x368180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x368184: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x368184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x368188: 0x24634680  addiu       $v1, $v1, 0x4680
    ctx->pc = 0x368188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18048));
    // 0x36818c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x36818cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x368190: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368194: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x368194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368198: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x368198u;
    {
        const bool branch_taken_0x368198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x368198) {
            ctx->pc = 0x3681D8u;
            goto label_3681d8;
        }
    }
    ctx->pc = 0x3681A0u;
    // 0x3681a0: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x3681a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3681a4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x3681a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3681a8: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x3681a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3681ac: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x3681acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3681b0: 0x46030083  div.s       $f2, $f0, $f3
    ctx->pc = 0x3681b0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[3];
    // 0x3681b4: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x3681b4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x3681b8: 0xe4830060  swc1        $f3, 0x60($a0)
    ctx->pc = 0x3681b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x3681bc: 0xe4820070  swc1        $f2, 0x70($a0)
    ctx->pc = 0x3681bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x3681c0: 0x46032003  div.s       $f0, $f4, $f3
    ctx->pc = 0x3681c0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[3];
    // 0x3681c4: 0xe4810074  swc1        $f1, 0x74($a0)
    ctx->pc = 0x3681c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x3681c8: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x3681c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x3681cc: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x3681ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3681d0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x3681d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x3681d4: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x3681d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_3681d8:
    // 0x3681d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3681D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3681E0u;
    // 0x3681e0: 0x24850024  addiu       $a1, $a0, 0x24
    ctx->pc = 0x3681e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x3681e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3681e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3681e8: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x3681e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3681ec: 0x24634680  addiu       $v1, $v1, 0x4680
    ctx->pc = 0x3681ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18048));
    // 0x3681f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3681f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3681f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3681f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3681f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3681f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3681fc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3681FCu;
    {
        const bool branch_taken_0x3681fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3681fc) {
            ctx->pc = 0x368220u;
            goto label_368220;
        }
    }
    ctx->pc = 0x368204u;
    // 0x368204: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x368204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368208: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x368208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x36820c: 0xe48000a0  swc1        $f0, 0xA0($a0)
    ctx->pc = 0x36820cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x368210: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x368210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x368214: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x368214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x368218: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x368218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x36821c: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x36821cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_368220:
    // 0x368220: 0x3e00008  jr          $ra
    ctx->pc = 0x368220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x368228u;
    // 0x368228: 0x0  nop
    ctx->pc = 0x368228u;
    // NOP
    // 0x36822c: 0x0  nop
    ctx->pc = 0x36822cu;
    // NOP
    // 0x368230: 0x24870024  addiu       $a3, $a0, 0x24
    ctx->pc = 0x368230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x368234: 0x24860034  addiu       $a2, $a0, 0x34
    ctx->pc = 0x368234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x368238: 0x24850044  addiu       $a1, $a0, 0x44
    ctx->pc = 0x368238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    // 0x36823c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36823cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x368240: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x368240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x368244: 0x24634680  addiu       $v1, $v1, 0x4680
    ctx->pc = 0x368244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18048));
    // 0x368248: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x368248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36824c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36824cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368250: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x368250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368254: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x368254u;
    {
        const bool branch_taken_0x368254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x368254) {
            ctx->pc = 0x368280u;
            goto label_368280;
        }
    }
    ctx->pc = 0x36825Cu;
    // 0x36825c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x36825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x368260: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x368260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368264: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x368264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368268: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x368268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x36826c: 0xe4810084  swc1        $f1, 0x84($a0)
    ctx->pc = 0x36826cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x368270: 0xe4820088  swc1        $f2, 0x88($a0)
    ctx->pc = 0x368270u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x368274: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x368274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x368278: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x368278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x36827c: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x36827cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_368280:
    // 0x368280: 0x3e00008  jr          $ra
    ctx->pc = 0x368280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x368288u;
    // 0x368288: 0x0  nop
    ctx->pc = 0x368288u;
    // NOP
    // 0x36828c: 0x0  nop
    ctx->pc = 0x36828cu;
    // NOP
    // 0x368290: 0x24870024  addiu       $a3, $a0, 0x24
    ctx->pc = 0x368290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x368294: 0x24860034  addiu       $a2, $a0, 0x34
    ctx->pc = 0x368294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x368298: 0x24850044  addiu       $a1, $a0, 0x44
    ctx->pc = 0x368298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    // 0x36829c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36829cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3682a0: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x3682a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3682a4: 0x24634680  addiu       $v1, $v1, 0x4680
    ctx->pc = 0x3682a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18048));
    // 0x3682a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3682a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3682ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3682acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3682b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3682b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3682b4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3682B4u;
    {
        const bool branch_taken_0x3682b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3682b4) {
            ctx->pc = 0x3682E0u;
            goto label_3682e0;
        }
    }
    ctx->pc = 0x3682BCu;
    // 0x3682bc: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x3682bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3682c0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x3682c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3682c4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3682c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3682c8: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x3682c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x3682cc: 0xe4810068  swc1        $f1, 0x68($a0)
    ctx->pc = 0x3682ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x3682d0: 0xe482006c  swc1        $f2, 0x6C($a0)
    ctx->pc = 0x3682d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x3682d4: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x3682d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3682d8: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x3682d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x3682dc: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x3682dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_3682e0:
    // 0x3682e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3682E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3682E8u;
    // 0x3682e8: 0x0  nop
    ctx->pc = 0x3682e8u;
    // NOP
    // 0x3682ec: 0x0  nop
    ctx->pc = 0x3682ecu;
    // NOP
    // 0x3682f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3682F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3682F8u;
    // 0x3682f8: 0x0  nop
    ctx->pc = 0x3682f8u;
    // NOP
    // 0x3682fc: 0x0  nop
    ctx->pc = 0x3682fcu;
    // NOP
    // 0x368300: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x368300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x368304: 0x80da190  j           func_368640
    ctx->pc = 0x368304u;
    ctx->pc = 0x368308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368304u;
            // 0x368308: 0xac8200a4  sw          $v0, 0xA4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x368640u;
    goto label_368640;
    ctx->pc = 0x36830Cu;
    // 0x36830c: 0x0  nop
    ctx->pc = 0x36830cu;
    // NOP
    // 0x368310: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x368310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368314: 0x80da190  j           func_368640
    ctx->pc = 0x368314u;
    ctx->pc = 0x368318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368314u;
            // 0x368318: 0xac8200a4  sw          $v0, 0xA4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x368640u;
    goto label_368640;
    ctx->pc = 0x36831Cu;
    // 0x36831c: 0x0  nop
    ctx->pc = 0x36831cu;
    // NOP
    // 0x368320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x368320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368324: 0x80da190  j           func_368640
    ctx->pc = 0x368324u;
    ctx->pc = 0x368328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368324u;
            // 0x368328: 0xac8200a4  sw          $v0, 0xA4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x368640u;
    goto label_368640;
    ctx->pc = 0x36832Cu;
    // 0x36832c: 0x0  nop
    ctx->pc = 0x36832cu;
    // NOP
    // 0x368330: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x368330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x368334: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x368334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x368338: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x368338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x36833c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36833cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x368340: 0x24634040  addiu       $v1, $v1, 0x4040
    ctx->pc = 0x368340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16448));
    // 0x368344: 0x24424680  addiu       $v0, $v0, 0x4680
    ctx->pc = 0x368344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18048));
    // 0x368348: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x368348u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x36834c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36834cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368350: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x368350u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368354: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x368354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x368358: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x368358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36835c: 0x80d9ec8  j           func_367B20
    ctx->pc = 0x36835Cu;
    ctx->pc = 0x368360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36835Cu;
            // 0x368360: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x367B20u;
    {
        auto targetFn = runtime->lookupFunction(0x367B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x368364u;
    // 0x368364: 0x0  nop
    ctx->pc = 0x368364u;
    // NOP
    // 0x368368: 0x0  nop
    ctx->pc = 0x368368u;
    // NOP
    // 0x36836c: 0x0  nop
    ctx->pc = 0x36836cu;
    // NOP
    // 0x368370: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x368370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x368374: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x368374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x368378: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x368378u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x36837c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36837cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x368380: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x368380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x368384: 0x24634040  addiu       $v1, $v1, 0x4040
    ctx->pc = 0x368384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16448));
    // 0x368388: 0x24424680  addiu       $v0, $v0, 0x4680
    ctx->pc = 0x368388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18048));
    // 0x36838c: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x36838cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x368390: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368394: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x368394u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368398: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x368398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36839c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36839cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3683a0: 0x80d9ed4  j           func_367B50
    ctx->pc = 0x3683A0u;
    ctx->pc = 0x3683A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3683A0u;
            // 0x3683a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x367B50u;
    {
        auto targetFn = runtime->lookupFunction(0x367B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3683A8u;
    // 0x3683a8: 0x0  nop
    ctx->pc = 0x3683a8u;
    // NOP
    // 0x3683ac: 0x0  nop
    ctx->pc = 0x3683acu;
    // NOP
    // 0x3683b0: 0x8c890024  lw          $t1, 0x24($a0)
    ctx->pc = 0x3683b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3683b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3683b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3683b8: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x3683b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3683bc: 0xc48d0044  lwc1        $f13, 0x44($a0)
    ctx->pc = 0x3683bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3683c0: 0x8c870064  lw          $a3, 0x64($a0)
    ctx->pc = 0x3683c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x3683c4: 0xc48c0074  lwc1        $f12, 0x74($a0)
    ctx->pc = 0x3683c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3683c8: 0xc48e0084  lwc1        $f14, 0x84($a0)
    ctx->pc = 0x3683c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3683cc: 0x8c8500b4  lw          $a1, 0xB4($a0)
    ctx->pc = 0x3683ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x3683d0: 0xc48f0094  lwc1        $f15, 0x94($a0)
    ctx->pc = 0x3683d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x3683d4: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x3683d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3683d8: 0xc49000a4  lwc1        $f16, 0xA4($a0)
    ctx->pc = 0x3683d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x3683dc: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x3683dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3683e0: 0x24424680  addiu       $v0, $v0, 0x4680
    ctx->pc = 0x3683e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18048));
    // 0x3683e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3683e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3683e8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3683e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x3683ec: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x3683ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3683f0: 0x24844040  addiu       $a0, $a0, 0x4040
    ctx->pc = 0x3683f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16448));
    // 0x3683f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3683f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3683f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3683f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3683fc: 0x80d9e78  j           func_3679E0
    ctx->pc = 0x3683FCu;
    ctx->pc = 0x368400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3683FCu;
            // 0x368400: 0xa4690000  sh          $t1, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3679E0u;
    {
        auto targetFn = runtime->lookupFunction(0x3679E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x368404u;
    // 0x368404: 0x0  nop
    ctx->pc = 0x368404u;
    // NOP
    // 0x368408: 0x0  nop
    ctx->pc = 0x368408u;
    // NOP
    // 0x36840c: 0x0  nop
    ctx->pc = 0x36840cu;
    // NOP
    // 0x368410: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x368410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x368414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x368414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368418: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x368418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x36841c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x36841Cu;
    {
        const bool branch_taken_0x36841c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36841c) {
            ctx->pc = 0x368458u;
            goto label_368458;
        }
    }
    ctx->pc = 0x368424u;
    // 0x368424: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x368424u;
    {
        const bool branch_taken_0x368424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x368424) {
            ctx->pc = 0x368434u;
            goto label_368434;
        }
    }
    ctx->pc = 0x36842Cu;
    // 0x36842c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x36842Cu;
    {
        const bool branch_taken_0x36842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36842c) {
            ctx->pc = 0x36847Cu;
            goto label_36847c;
        }
    }
    ctx->pc = 0x368434u;
label_368434:
    // 0x368434: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x368434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x368438: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x368438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36843c: 0x24634680  addiu       $v1, $v1, 0x4680
    ctx->pc = 0x36843cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18048));
    // 0x368440: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368444: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x368444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368448: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x368448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x36844c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x36844cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x368450: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x368450u;
    {
        const bool branch_taken_0x368450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x368450u;
            // 0x368454: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368450) {
            ctx->pc = 0x36847Cu;
            goto label_36847c;
        }
    }
    ctx->pc = 0x368458u;
label_368458:
    // 0x368458: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x368458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36845c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x36845cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x368460: 0x24634680  addiu       $v1, $v1, 0x4680
    ctx->pc = 0x368460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18048));
    // 0x368464: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x368464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x368468: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x368468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36846c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x36846cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x368470: 0x8ca40054  lw          $a0, 0x54($a1)
    ctx->pc = 0x368470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x368474: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x368474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x368478: 0xaca30054  sw          $v1, 0x54($a1)
    ctx->pc = 0x368478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
label_36847c:
    // 0x36847c: 0x3e00008  jr          $ra
    ctx->pc = 0x36847Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x368484u;
    // 0x368484: 0x0  nop
    ctx->pc = 0x368484u;
    // NOP
    // 0x368488: 0x0  nop
    ctx->pc = 0x368488u;
    // NOP
    // 0x36848c: 0x0  nop
    ctx->pc = 0x36848cu;
    // NOP
    // 0x368490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x368490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x368494: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x368494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x368498: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x368498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36849c: 0x24424680  addiu       $v0, $v0, 0x4680
    ctx->pc = 0x36849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18048));
    // 0x3684a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3684a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3684a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3684a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3684a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3684a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3684ac: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3684acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3684b0: 0xc48c0064  lwc1        $f12, 0x64($a0)
    ctx->pc = 0x3684b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3684b4: 0x8c910024  lw          $s1, 0x24($a0)
    ctx->pc = 0x3684b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3684b8: 0x8c900054  lw          $s0, 0x54($a0)
    ctx->pc = 0x3684b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3684bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3684bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3684c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3684c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3684c4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3684c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3684c8: 0xc0d9e5c  jal         func_367970
    ctx->pc = 0x3684C8u;
    SET_GPR_U32(ctx, 31, 0x3684D0u);
    ctx->pc = 0x3684CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3684C8u;
            // 0x3684cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x367970u;
    if (runtime->hasFunction(0x367970u)) {
        auto targetFn = runtime->lookupFunction(0x367970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3684D0u; }
        if (ctx->pc != 0x3684D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00367970_0x367970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3684D0u; }
        if (ctx->pc != 0x3684D0u) { return; }
    }
    ctx->pc = 0x3684D0u;
label_3684d0:
    // 0x3684d0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3684D0u;
    {
        const bool branch_taken_0x3684d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3684D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3684D0u;
            // 0x3684d4: 0xa65101ca  sh          $s1, 0x1CA($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 458), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3684d0) {
            ctx->pc = 0x3684ECu;
            goto label_3684ec;
        }
    }
    ctx->pc = 0x3684D8u;
    // 0x3684d8: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x3684d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x3684dc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3684dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3684e0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3684e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3684e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3684E4u;
    {
        const bool branch_taken_0x3684e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3684E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3684E4u;
            // 0x3684e8: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3684e4) {
            ctx->pc = 0x368500u;
            goto label_368500;
        }
    }
    ctx->pc = 0x3684ECu;
label_3684ec:
    // 0x3684ec: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x3684ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x3684f0: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x3684f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x3684f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3684f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3684f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3684f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3684fc: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3684fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_368500:
    // 0x368500: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x368500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x368504: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x368504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x368508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36850c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36850cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368510: 0x3e00008  jr          $ra
    ctx->pc = 0x368510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x368510u;
            // 0x368514: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x368518u;
    // 0x368518: 0x0  nop
    ctx->pc = 0x368518u;
    // NOP
    // 0x36851c: 0x0  nop
    ctx->pc = 0x36851cu;
    // NOP
    // 0x368520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x368520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x368524: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x368524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x368528: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x368528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36852c: 0x24424680  addiu       $v0, $v0, 0x4680
    ctx->pc = 0x36852cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18048));
    // 0x368530: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x368530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x368534: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x368534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x368538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x368538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36853c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x36853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x368540: 0xc48c0064  lwc1        $f12, 0x64($a0)
    ctx->pc = 0x368540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x368544: 0x8c910024  lw          $s1, 0x24($a0)
    ctx->pc = 0x368544u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x368548: 0x8c900054  lw          $s0, 0x54($a0)
    ctx->pc = 0x368548u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x36854c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36854cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x368550: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x368550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x368554: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x368554u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x368558: 0xc0d9e5c  jal         func_367970
    ctx->pc = 0x368558u;
    SET_GPR_U32(ctx, 31, 0x368560u);
    ctx->pc = 0x36855Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368558u;
            // 0x36855c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x367970u;
    if (runtime->hasFunction(0x367970u)) {
        auto targetFn = runtime->lookupFunction(0x367970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368560u; }
        if (ctx->pc != 0x368560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00367970_0x367970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368560u; }
        if (ctx->pc != 0x368560u) { return; }
    }
    ctx->pc = 0x368560u;
label_368560:
    // 0x368560: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x368560u;
    {
        const bool branch_taken_0x368560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x368564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x368560u;
            // 0x368564: 0xa65101c8  sh          $s1, 0x1C8($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 456), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368560) {
            ctx->pc = 0x36857Cu;
            goto label_36857c;
        }
    }
    ctx->pc = 0x368568u;
    // 0x368568: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x368568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x36856c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x36856cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x368570: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x368570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x368574: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x368574u;
    {
        const bool branch_taken_0x368574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x368574u;
            // 0x368578: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368574) {
            ctx->pc = 0x368590u;
            goto label_368590;
        }
    }
    ctx->pc = 0x36857Cu;
label_36857c:
    // 0x36857c: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x36857cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x368580: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x368580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x368584: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x368584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x368588: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x368588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x36858c: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x36858cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_368590:
    // 0x368590: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x368590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x368594: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x368594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x368598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36859c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36859cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3685a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3685A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3685A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3685A0u;
            // 0x3685a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3685A8u;
    // 0x3685a8: 0x0  nop
    ctx->pc = 0x3685a8u;
    // NOP
    // 0x3685ac: 0x0  nop
    ctx->pc = 0x3685acu;
    // NOP
    // 0x3685b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3685b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3685b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3685b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3685b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3685b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3685bc: 0x24424680  addiu       $v0, $v0, 0x4680
    ctx->pc = 0x3685bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18048));
    // 0x3685c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3685c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3685c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3685c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3685c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3685c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3685cc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3685ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3685d0: 0xc48c0064  lwc1        $f12, 0x64($a0)
    ctx->pc = 0x3685d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3685d4: 0x8c910024  lw          $s1, 0x24($a0)
    ctx->pc = 0x3685d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3685d8: 0x8c900054  lw          $s0, 0x54($a0)
    ctx->pc = 0x3685d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3685dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3685dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3685e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3685e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3685e4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3685e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3685e8: 0xc0d9e5c  jal         func_367970
    ctx->pc = 0x3685E8u;
    SET_GPR_U32(ctx, 31, 0x3685F0u);
    ctx->pc = 0x3685ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3685E8u;
            // 0x3685ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x367970u;
    if (runtime->hasFunction(0x367970u)) {
        auto targetFn = runtime->lookupFunction(0x367970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3685F0u; }
        if (ctx->pc != 0x3685F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00367970_0x367970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3685F0u; }
        if (ctx->pc != 0x3685F0u) { return; }
    }
    ctx->pc = 0x3685F0u;
label_3685f0:
    // 0x3685f0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3685F0u;
    {
        const bool branch_taken_0x3685f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3685F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3685F0u;
            // 0x3685f4: 0xa65101c6  sh          $s1, 0x1C6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 454), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3685f0) {
            ctx->pc = 0x36860Cu;
            goto label_36860c;
        }
    }
    ctx->pc = 0x3685F8u;
    // 0x3685f8: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x3685f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x3685fc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3685fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x368600: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x368600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x368604: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x368604u;
    {
        const bool branch_taken_0x368604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x368604u;
            // 0x368608: 0xae430054  sw          $v1, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368604) {
            ctx->pc = 0x368620u;
            goto label_368620;
        }
    }
    ctx->pc = 0x36860Cu;
label_36860c:
    // 0x36860c: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x36860cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x368610: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x368610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x368614: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x368614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x368618: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x368618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x36861c: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x36861cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_368620:
    // 0x368620: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x368620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x368624: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x368624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368628: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x368628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36862c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36862cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368630: 0x3e00008  jr          $ra
    ctx->pc = 0x368630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x368630u;
            // 0x368634: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x368638u;
    // 0x368638: 0x0  nop
    ctx->pc = 0x368638u;
    // NOP
    // 0x36863c: 0x0  nop
    ctx->pc = 0x36863cu;
    // NOP
label_368640:
    // 0x368640: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x368640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x368644: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x368644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x368648: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x368648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x36864c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x36864cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x368650: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x368650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x368654: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x368654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x368658: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x368658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x36865c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x36865cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x368660: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x368660u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368664: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x368664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x368668: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x368668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36866c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36866cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x368670: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x368670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x368674: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x368674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x368678: 0x8c940034  lw          $s4, 0x34($a0)
    ctx->pc = 0x368678u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x36867c: 0x8c930044  lw          $s3, 0x44($a0)
    ctx->pc = 0x36867cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x368680: 0x8c920074  lw          $s2, 0x74($a0)
    ctx->pc = 0x368680u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x368684: 0x8c960084  lw          $s6, 0x84($a0)
    ctx->pc = 0x368684u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x368688: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x368688u;
    {
        const bool branch_taken_0x368688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x36868Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x368688u;
            // 0x36868c: 0x8c9e0014  lw          $fp, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368688) {
            ctx->pc = 0x3686CCu;
            goto label_3686cc;
        }
    }
    ctx->pc = 0x368690u;
    // 0x368690: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x368690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x368694: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x368694u;
    {
        const bool branch_taken_0x368694 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x368694) {
            ctx->pc = 0x368698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368694u;
            // 0x368698: 0x3c020007  lui         $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3686C4u;
            goto label_3686c4;
        }
    }
    ctx->pc = 0x36869Cu;
    // 0x36869c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36869cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3686a0: 0x50a2000c  beql        $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3686A0u;
    {
        const bool branch_taken_0x3686a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3686a0) {
            ctx->pc = 0x3686A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3686A0u;
            // 0x3686a4: 0x24113e80  addiu       $s1, $zero, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3686D4u;
            goto label_3686d4;
        }
    }
    ctx->pc = 0x3686A8u;
    // 0x3686a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3686a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3686ac: 0x50a20009  beql        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3686ACu;
    {
        const bool branch_taken_0x3686ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3686ac) {
            ctx->pc = 0x3686B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3686ACu;
            // 0x3686b0: 0x24113c8c  addiu       $s1, $zero, 0x3C8C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15500));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3686D4u;
            goto label_3686d4;
        }
    }
    ctx->pc = 0x3686B4u;
    // 0x3686b4: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3686B4u;
    {
        const bool branch_taken_0x3686b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3686b4) {
            ctx->pc = 0x3686B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3686B4u;
            // 0x3686b8: 0x24113a98  addiu       $s1, $zero, 0x3A98 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15000));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3686D4u;
            goto label_3686d4;
        }
    }
    ctx->pc = 0x3686BCu;
    // 0x3686bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3686BCu;
    {
        const bool branch_taken_0x3686bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3686C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3686BCu;
            // 0x3686c0: 0x24b13e7e  addiu       $s1, $a1, 0x3E7E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 15998));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3686bc) {
            ctx->pc = 0x3686D4u;
            goto label_3686d4;
        }
    }
    ctx->pc = 0x3686C4u;
label_3686c4:
    // 0x3686c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3686C4u;
    {
        const bool branch_taken_0x3686c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3686C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3686C4u;
            // 0x3686c8: 0x34518bd6  ori         $s1, $v0, 0x8BD6 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35798);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3686c4) {
            ctx->pc = 0x3686D4u;
            goto label_3686d4;
        }
    }
    ctx->pc = 0x3686CCu;
label_3686cc:
    // 0x3686cc: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x3686ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x3686d0: 0x34518bd7  ori         $s1, $v0, 0x8BD7
    ctx->pc = 0x3686d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35799);
label_3686d4:
    // 0x3686d4: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x3686d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x3686d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3686d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3686dc: 0x90970094  lbu         $s7, 0x94($a0)
    ctx->pc = 0x3686dcu;
    SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x3686e0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3686E0u;
    {
        const bool branch_taken_0x3686e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3686E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3686E0u;
            // 0x3686e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3686e0) {
            ctx->pc = 0x368728u;
            goto label_368728;
        }
    }
    ctx->pc = 0x3686E8u;
    // 0x3686e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3686e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3686ec: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3686ECu;
    {
        const bool branch_taken_0x3686ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3686ec) {
            ctx->pc = 0x368718u;
            goto label_368718;
        }
    }
    ctx->pc = 0x3686F4u;
    // 0x3686f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3686f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3686f8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3686F8u;
    {
        const bool branch_taken_0x3686f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3686f8) {
            ctx->pc = 0x3686FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3686F8u;
            // 0x3686fc: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x368710u;
            goto label_368710;
        }
    }
    ctx->pc = 0x368700u;
    // 0x368700: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x368700u;
    {
        const bool branch_taken_0x368700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x368700) {
            ctx->pc = 0x368704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x368700u;
            // 0x368704: 0x240401f0  addiu       $a0, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->in_delay_slot = false;
            ctx->pc = 0x368730u;
            goto label_368730;
        }
    }
    ctx->pc = 0x368708u;
    // 0x368708: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x368708u;
    {
        const bool branch_taken_0x368708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368708) {
            ctx->pc = 0x36872Cu;
            goto label_36872c;
        }
    }
    ctx->pc = 0x368710u;
label_368710:
    // 0x368710: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x368710u;
    {
        const bool branch_taken_0x368710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x368710u;
            // 0x368714: 0x24b12af8  addiu       $s1, $a1, 0x2AF8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 11000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368710) {
            ctx->pc = 0x36872Cu;
            goto label_36872c;
        }
    }
    ctx->pc = 0x368718u;
label_368718:
    // 0x368718: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x368718u;
    {
        const bool branch_taken_0x368718 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x368718) {
            ctx->pc = 0x36872Cu;
            goto label_36872c;
        }
    }
    ctx->pc = 0x368720u;
    // 0x368720: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x368720u;
    {
        const bool branch_taken_0x368720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x368720u;
            // 0x368724: 0x24113c8c  addiu       $s1, $zero, 0x3C8C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368720) {
            ctx->pc = 0x36872Cu;
            goto label_36872c;
        }
    }
    ctx->pc = 0x368728u;
label_368728:
    // 0x368728: 0x64100002  daddiu      $s0, $zero, 0x2
    ctx->pc = 0x368728u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_36872c:
    // 0x36872c: 0x240401f0  addiu       $a0, $zero, 0x1F0
    ctx->pc = 0x36872cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_368730:
    // 0x368730: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x368730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x368734: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x368734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368738: 0xc040140  jal         func_100500
    ctx->pc = 0x368738u;
    SET_GPR_U32(ctx, 31, 0x368740u);
    ctx->pc = 0x36873Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368738u;
            // 0x36873c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368740u; }
        if (ctx->pc != 0x368740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x368740u; }
        if (ctx->pc != 0x368740u) { return; }
    }
    ctx->pc = 0x368740u;
label_368740:
    // 0x368740: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x368740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368744: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x368744u;
    {
        const bool branch_taken_0x368744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x368744) {
            ctx->pc = 0x368774u;
            goto label_368774;
        }
    }
    ctx->pc = 0x36874Cu;
    // 0x36874c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36874cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368750: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x368750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368754: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x368754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368758: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x368758u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36875c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x36875cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368760: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x368760u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368764: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x368764u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368768: 0xc0d9f30  jal         func_367CC0
    ctx->pc = 0x368768u;
    SET_GPR_U32(ctx, 31, 0x368770u);
    ctx->pc = 0x36876Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x368768u;
            // 0x36876c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x367CC0u;
    goto label_367cc0;
    ctx->pc = 0x368770u;
label_368770:
    // 0x368770: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x368770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_368774:
    // 0x368774: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x368774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x368778: 0x1e2880  sll         $a1, $fp, 2
    ctx->pc = 0x368778u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x36877c: 0x24634680  addiu       $v1, $v1, 0x4680
    ctx->pc = 0x36877cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18048));
    // 0x368780: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x368780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x368784: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x368784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x368788: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x368788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36878c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x36878cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x368790: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x368790u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x368794: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x368794u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x368798: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x368798u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36879c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x36879cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3687a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3687a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3687a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3687a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3687a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3687a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3687ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3687acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3687b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3687B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3687B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3687B0u;
            // 0x3687b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3687B8u;
    // 0x3687b8: 0x0  nop
    ctx->pc = 0x3687b8u;
    // NOP
    // 0x3687bc: 0x0  nop
    ctx->pc = 0x3687bcu;
    // NOP
}
