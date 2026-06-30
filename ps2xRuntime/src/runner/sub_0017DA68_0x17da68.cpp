#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017DA68
// Address: 0x17da68 - 0x17dbf8
void sub_0017DA68_0x17da68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DA68_0x17da68");
#endif

    switch (ctx->pc) {
        case 0x17dab8u: goto label_17dab8;
        case 0x17daecu: goto label_17daec;
        case 0x17daf4u: goto label_17daf4;
        case 0x17daf8u: goto label_17daf8;
        case 0x17db00u: goto label_17db00;
        case 0x17db10u: goto label_17db10;
        case 0x17db18u: goto label_17db18;
        case 0x17db24u: goto label_17db24;
        case 0x17db3cu: goto label_17db3c;
        case 0x17db5cu: goto label_17db5c;
        case 0x17db78u: goto label_17db78;
        case 0x17db88u: goto label_17db88;
        case 0x17dba8u: goto label_17dba8;
        case 0x17dbc4u: goto label_17dbc4;
        default: break;
    }

    ctx->pc = 0x17da68u;

    // 0x17da68: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17da68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17da6c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x17da6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x17da70: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x17da70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da74: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x17da74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x17da78: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17da78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da7c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x17da7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x17da80: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17da80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da84: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x17da84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x17da88: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x17da88u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17da8c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x17da8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x17da90: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x17da90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x17da94: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x17da94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x17da98: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x17da98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x17da9c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x17da9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x17daa0: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x17daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x17daa4: 0x1ac0003c  blez        $s6, . + 4 + (0x3C << 2)
    ctx->pc = 0x17DAA4u;
    {
        const bool branch_taken_0x17daa4 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x17DAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DAA4u;
            // 0x17daa8: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17daa4) {
            ctx->pc = 0x17DB98u;
            goto label_17db98;
        }
    }
    ctx->pc = 0x17DAACu;
    // 0x17daac: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17daacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17dab0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x17dab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dab4: 0x245e6540  addiu       $fp, $v0, 0x6540
    ctx->pc = 0x17dab4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 25920));
label_17dab8:
    // 0x17dab8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x17dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x17dabc: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x17dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x17dac0: 0x542018  mult        $a0, $v0, $s4
    ctx->pc = 0x17dac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x17dac4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17dac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17dac8: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x17dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x17dacc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17daccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17dad0: 0x2a38821  addu        $s1, $s5, $v1
    ctx->pc = 0x17dad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x17dad4: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x17dad4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17dad8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x17DAD8u;
    {
        const bool branch_taken_0x17dad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DAD8u;
            // 0x17dadc: 0x3c13005e  lui         $s3, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dad8) {
            ctx->pc = 0x17DB88u;
            goto label_17db88;
        }
    }
    ctx->pc = 0x17DAE0u;
    // 0x17dae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17dae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dae4: 0xc05f55e  jal         func_17D578
    ctx->pc = 0x17DAE4u;
    SET_GPR_U32(ctx, 31, 0x17DAECu);
    ctx->pc = 0x17DAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DAE4u;
            // 0x17dae8: 0x26656668  addiu       $a1, $s3, 0x6668 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 26216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D578u;
    if (runtime->hasFunction(0x17D578u)) {
        auto targetFn = runtime->lookupFunction(0x17D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DAECu; }
        if (ctx->pc != 0x17DAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D578_0x17d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DAECu; }
        if (ctx->pc != 0x17DAECu) { return; }
    }
    ctx->pc = 0x17DAECu;
label_17daec:
    // 0x17daec: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17DAECu;
    SET_GPR_U32(ctx, 31, 0x17DAF4u);
    ctx->pc = 0x17DAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DAECu;
            // 0x17daf0: 0x34049400  ori         $a0, $zero, 0x9400 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DAF4u; }
        if (ctx->pc != 0x17DAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DAF4u; }
        if (ctx->pc != 0x17DAF4u) { return; }
    }
    ctx->pc = 0x17DAF4u;
label_17daf4:
    // 0x17daf4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17daf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17daf8:
    // 0x17daf8: 0xc047aee  jal         func_11EBB8
    ctx->pc = 0x17DAF8u;
    SET_GPR_U32(ctx, 31, 0x17DB00u);
    ctx->pc = 0x17DAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DAF8u;
            // 0x17dafc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBB8u;
    if (runtime->hasFunction(0x11EBB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB00u; }
        if (ctx->pc != 0x17DB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBB8_0x11ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB00u; }
        if (ctx->pc != 0x17DB00u) { return; }
    }
    ctx->pc = 0x17DB00u;
label_17db00:
    // 0x17db00: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x17DB00u;
    {
        const bool branch_taken_0x17db00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x17db00) {
            ctx->pc = 0x17DAF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17daf8;
        }
    }
    ctx->pc = 0x17DB08u;
    // 0x17db08: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17DB08u;
    SET_GPR_U32(ctx, 31, 0x17DB10u);
    ctx->pc = 0x17DB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB08u;
            // 0x17db0c: 0x34049401  ori         $a0, $zero, 0x9401 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37889);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB10u; }
        if (ctx->pc != 0x17DB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB10u; }
        if (ctx->pc != 0x17DB10u) { return; }
    }
    ctx->pc = 0x17DB10u;
label_17db10:
    // 0x17db10: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17DB10u;
    SET_GPR_U32(ctx, 31, 0x17DB18u);
    ctx->pc = 0x17DB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB10u;
            // 0x17db14: 0x34049500  ori         $a0, $zero, 0x9500 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38144);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB18u; }
        if (ctx->pc != 0x17DB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB18u; }
        if (ctx->pc != 0x17DB18u) { return; }
    }
    ctx->pc = 0x17DB18u;
label_17db18:
    // 0x17db18: 0x26656668  addiu       $a1, $s3, 0x6668
    ctx->pc = 0x17db18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 26216));
    // 0x17db1c: 0xc05f24e  jal         func_17C938
    ctx->pc = 0x17DB1Cu;
    SET_GPR_U32(ctx, 31, 0x17DB24u);
    ctx->pc = 0x17DB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB1Cu;
            // 0x17db20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C938u;
    if (runtime->hasFunction(0x17C938u)) {
        auto targetFn = runtime->lookupFunction(0x17C938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB24u; }
        if (ctx->pc != 0x17DB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C938_0x17c938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB24u; }
        if (ctx->pc != 0x17DB24u) { return; }
    }
    ctx->pc = 0x17DB24u;
label_17db24:
    // 0x17db24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17db24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17db28: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x17DB28u;
    {
        const bool branch_taken_0x17db28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17db28) {
            ctx->pc = 0x17DB2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB28u;
            // 0x17db2c: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17DB68u;
            goto label_17db68;
        }
    }
    ctx->pc = 0x17DB30u;
    // 0x17db30: 0x34049501  ori         $a0, $zero, 0x9501
    ctx->pc = 0x17db30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38145);
    // 0x17db34: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17DB34u;
    SET_GPR_U32(ctx, 31, 0x17DB3Cu);
    ctx->pc = 0x17DB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB34u;
            // 0x17db38: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB3Cu; }
        if (ctx->pc != 0x17DB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB3Cu; }
        if (ctx->pc != 0x17DB3Cu) { return; }
    }
    ctx->pc = 0x17DB3Cu;
label_17db3c:
    // 0x17db3c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x17db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x17db40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17db40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17db44: 0x24446038  addiu       $a0, $v0, 0x6038
    ctx->pc = 0x17db44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24632));
    // 0x17db48: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x17db48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17db4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17db4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db50: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x17db50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x17db54: 0xc05b97e  jal         func_16E5F8
    ctx->pc = 0x17DB54u;
    SET_GPR_U32(ctx, 31, 0x17DB5Cu);
    ctx->pc = 0x17DB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB54u;
            // 0x17db58: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5F8u;
    if (runtime->hasFunction(0x16E5F8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB5Cu; }
        if (ctx->pc != 0x17DB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E5F8_0x16e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB5Cu; }
        if (ctx->pc != 0x17DB5Cu) { return; }
    }
    ctx->pc = 0x17DB5Cu;
label_17db5c:
    // 0x17db5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17DB5Cu;
    {
        const bool branch_taken_0x17db5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB5Cu;
            // 0x17db60: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db5c) {
            ctx->pc = 0x17DB8Cu;
            goto label_17db8c;
        }
    }
    ctx->pc = 0x17DB64u;
    // 0x17db64: 0x0  nop
    ctx->pc = 0x17db64u;
    // NOP
label_17db68:
    // 0x17db68: 0x34049502  ori         $a0, $zero, 0x9502
    ctx->pc = 0x17db68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38146);
    // 0x17db6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17db70: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17DB70u;
    SET_GPR_U32(ctx, 31, 0x17DB78u);
    ctx->pc = 0x17DB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB70u;
            // 0x17db74: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB78u; }
        if (ctx->pc != 0x17DB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB78u; }
        if (ctx->pc != 0x17DB78u) { return; }
    }
    ctx->pc = 0x17DB78u;
label_17db78:
    // 0x17db78: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x17db78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x17db7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17db7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db80: 0xc05b97e  jal         func_16E5F8
    ctx->pc = 0x17DB80u;
    SET_GPR_U32(ctx, 31, 0x17DB88u);
    ctx->pc = 0x17DB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB80u;
            // 0x17db84: 0x24446050  addiu       $a0, $v0, 0x6050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5F8u;
    if (runtime->hasFunction(0x16E5F8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB88u; }
        if (ctx->pc != 0x17DB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E5F8_0x16e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB88u; }
        if (ctx->pc != 0x17DB88u) { return; }
    }
    ctx->pc = 0x17DB88u;
label_17db88:
    // 0x17db88: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x17db88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_17db8c:
    // 0x17db8c: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x17db8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x17db90: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x17DB90u;
    {
        const bool branch_taken_0x17db90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB90u;
            // 0x17db94: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db90) {
            ctx->pc = 0x17DAB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17dab8;
        }
    }
    ctx->pc = 0x17DB98u;
label_17db98:
    // 0x17db98: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17db98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17db9c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x17db9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dba0: 0xc05b97e  jal         func_16E5F8
    ctx->pc = 0x17DBA0u;
    SET_GPR_U32(ctx, 31, 0x17DBA8u);
    ctx->pc = 0x17DBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DBA0u;
            // 0x17dba4: 0x24846068  addiu       $a0, $a0, 0x6068 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5F8u;
    if (runtime->hasFunction(0x16E5F8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBA8u; }
        if (ctx->pc != 0x17DBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E5F8_0x16e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBA8u; }
        if (ctx->pc != 0x17DBA8u) { return; }
    }
    ctx->pc = 0x17DBA8u;
label_17dba8:
    // 0x17dba8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x17dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dbac: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DBACu;
    {
        const bool branch_taken_0x17dbac = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x17DBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DBACu;
            // 0x17dbb0: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dbac) {
            ctx->pc = 0x17DBC8u;
            goto label_17dbc8;
        }
    }
    ctx->pc = 0x17DBB4u;
    // 0x17dbb4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17dbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17dbb8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x17dbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17dbbc: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17DBBCu;
    SET_GPR_U32(ctx, 31, 0x17DBC4u);
    ctx->pc = 0x17DBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DBBCu;
            // 0x17dbc0: 0x24846080  addiu       $a0, $a0, 0x6080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBC4u; }
        if (ctx->pc != 0x17DBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DBC4u; }
        if (ctx->pc != 0x17DBC4u) { return; }
    }
    ctx->pc = 0x17DBC4u;
label_17dbc4:
    // 0x17dbc4: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x17dbc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_17dbc8:
    // 0x17dbc8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x17dbc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17dbcc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x17dbccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17dbd0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x17dbd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17dbd4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x17dbd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17dbd8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x17dbd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17dbdc: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x17dbdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17dbe0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x17dbe0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17dbe4: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x17dbe4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17dbe8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x17dbe8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17dbec: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x17dbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x17dbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x17DBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DBF0u;
            // 0x17dbf4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17DBF8u;
}
