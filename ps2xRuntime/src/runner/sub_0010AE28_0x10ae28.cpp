#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010AE28
// Address: 0x10ae28 - 0x10afe8
void sub_0010AE28_0x10ae28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AE28_0x10ae28");
#endif

    switch (ctx->pc) {
        case 0x10ae98u: goto label_10ae98;
        case 0x10aec8u: goto label_10aec8;
        case 0x10aee4u: goto label_10aee4;
        case 0x10aeecu: goto label_10aeec;
        case 0x10af34u: goto label_10af34;
        case 0x10af5cu: goto label_10af5c;
        case 0x10af68u: goto label_10af68;
        case 0x10af98u: goto label_10af98;
        case 0x10afa0u: goto label_10afa0;
        case 0x10afc4u: goto label_10afc4;
        case 0x10afd0u: goto label_10afd0;
        default: break;
    }

    ctx->pc = 0x10ae28u;

    // 0x10ae28: 0x240703ff  addiu       $a3, $zero, 0x3FF
    ctx->pc = 0x10ae28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x10ae2c: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10ae2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10ae30: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x10ae30u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10ae34: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x10ae34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x10ae38: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x10ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x10ae3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10ae3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ae40: 0x3442fc00  ori         $v0, $v0, 0xFC00
    ctx->pc = 0x10ae40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64512);
    // 0x10ae44: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10ae48: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x10ae48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x10ae4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10ae4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10ae50: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10ae50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10ae54: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10ae58: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x10ae58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x10ae5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10ae5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10ae60: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10AE60u;
    {
        const bool branch_taken_0x10ae60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ae60) {
            ctx->pc = 0x10AE64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE60u;
            // 0x10ae64: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x10AE68u;
            goto label_10ae68;
        }
    }
    ctx->pc = 0x10AE68u;
label_10ae68:
    // 0x10ae68: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ae68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ae6c: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x10ae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x10ae70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ae70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ae74: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x10ae74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x10ae78: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x10ae78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10ae7c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x10ae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x10ae80: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10ae80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10ae84: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10ae88: 0x4012  mflo        $t0
    ctx->pc = 0x10ae88u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x10ae8c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x10ae8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x10ae90: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x10ae90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x10ae94: 0x0  nop
    ctx->pc = 0x10ae94u;
    // NOP
label_10ae98:
    // 0x10ae98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ae9c: 0x0  nop
    ctx->pc = 0x10ae9cu;
    // NOP
    // 0x10aea0: 0x0  nop
    ctx->pc = 0x10aea0u;
    // NOP
    // 0x10aea4: 0x0  nop
    ctx->pc = 0x10aea4u;
    // NOP
    // 0x10aea8: 0x0  nop
    ctx->pc = 0x10aea8u;
    // NOP
    // 0x10aeac: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10AEACu;
    {
        const bool branch_taken_0x10aeac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10aeac) {
            ctx->pc = 0x10AE98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ae98;
        }
    }
    ctx->pc = 0x10AEB4u;
    // 0x10aeb4: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x10aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x10aeb8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x10aeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10aebc: 0x24a5b4c0  addiu       $a1, $a1, -0x4B40
    ctx->pc = 0x10aebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948032));
    // 0x10aec0: 0xc043020  jal         func_10C080
    ctx->pc = 0x10AEC0u;
    SET_GPR_U32(ctx, 31, 0x10AEC8u);
    ctx->pc = 0x10AEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AEC0u;
            // 0x10aec4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C080u;
    if (runtime->hasFunction(0x10C080u)) {
        auto targetFn = runtime->lookupFunction(0x10C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AEC8u; }
        if (ctx->pc != 0x10AEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C080_0x10c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AEC8u; }
        if (ctx->pc != 0x10AEC8u) { return; }
    }
    ctx->pc = 0x10AEC8u;
label_10aec8:
    // 0x10aec8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10aec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aecc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x10aeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10aed0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10aed4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x10aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10aed8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x10aed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x10aedc: 0xc0433de  jal         func_10CF78
    ctx->pc = 0x10AEDCu;
    SET_GPR_U32(ctx, 31, 0x10AEE4u);
    ctx->pc = 0x10AEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AEDCu;
            // 0x10aee0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CF78u;
    if (runtime->hasFunction(0x10CF78u)) {
        auto targetFn = runtime->lookupFunction(0x10CF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AEE4u; }
        if (ctx->pc != 0x10AEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CF78_0x10cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AEE4u; }
        if (ctx->pc != 0x10AEE4u) { return; }
    }
    ctx->pc = 0x10AEE4u;
label_10aee4:
    // 0x10aee4: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10AEE4u;
    SET_GPR_U32(ctx, 31, 0x10AEECu);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AEECu; }
        if (ctx->pc != 0x10AEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AEECu; }
        if (ctx->pc != 0x10AEECu) { return; }
    }
    ctx->pc = 0x10AEECu;
label_10aeec:
    // 0x10aeec: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10aef0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10aef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10aef4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10aef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10aef8: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x10aef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x10aefc: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x10aefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x10af00: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10af00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10af04: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x10af04u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10af08: 0x34a5b020  ori         $a1, $a1, 0xB020
    ctx->pc = 0x10af08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45088);
    // 0x10af0c: 0x3403ffc0  ori         $v1, $zero, 0xFFC0
    ctx->pc = 0x10af0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x10af10: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10af10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10af14: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10af14u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10af18: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x10af18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x10af1c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x10af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10af20: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x10af20u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10af24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AF24u;
    {
        const bool branch_taken_0x10af24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF24u;
            // 0x10af28: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af24) {
            ctx->pc = 0x10AF38u;
            goto label_10af38;
        }
    }
    ctx->pc = 0x10AF2Cu;
    // 0x10af2c: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10AF2Cu;
    SET_GPR_U32(ctx, 31, 0x10AF34u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF34u; }
        if (ctx->pc != 0x10AF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF34u; }
        if (ctx->pc != 0x10AF34u) { return; }
    }
    ctx->pc = 0x10AF34u;
label_10af34:
    // 0x10af34: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10af34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_10af38:
    // 0x10af38: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x10af38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x10af3c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10af3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10af40: 0x346303ff  ori         $v1, $v1, 0x3FF
    ctx->pc = 0x10af40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1023);
    // 0x10af44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10af44u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x10af48: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x10af48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10af4c: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x10af4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x10af50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10af50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af54: 0xc0427c0  jal         func_109F00
    ctx->pc = 0x10AF54u;
    SET_GPR_U32(ctx, 31, 0x10AF5Cu);
    ctx->pc = 0x10AF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF54u;
            // 0x10af58: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F00u;
    if (runtime->hasFunction(0x109F00u)) {
        auto targetFn = runtime->lookupFunction(0x109F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF5Cu; }
        if (ctx->pc != 0x10AF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F00_0x109f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF5Cu; }
        if (ctx->pc != 0x10AF5Cu) { return; }
    }
    ctx->pc = 0x10AF5Cu;
label_10af5c:
    // 0x10af5c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x10af5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10af60: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10af60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10af64: 0x0  nop
    ctx->pc = 0x10af64u;
    // NOP
label_10af68:
    // 0x10af68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10af6c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10af6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10af70: 0x0  nop
    ctx->pc = 0x10af70u;
    // NOP
    // 0x10af74: 0x0  nop
    ctx->pc = 0x10af74u;
    // NOP
    // 0x10af78: 0x0  nop
    ctx->pc = 0x10af78u;
    // NOP
    // 0x10af7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10AF7Cu;
    {
        const bool branch_taken_0x10af7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10af7c) {
            ctx->pc = 0x10AF68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10af68;
        }
    }
    ctx->pc = 0x10AF84u;
    // 0x10af84: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AF84u;
    {
        const bool branch_taken_0x10af84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF84u;
            // 0x10af88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af84) {
            ctx->pc = 0x10AF98u;
            goto label_10af98;
        }
    }
    ctx->pc = 0x10AF8Cu;
    // 0x10af8c: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x10af8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x10af90: 0xc042e16  jal         func_10B858
    ctx->pc = 0x10AF90u;
    SET_GPR_U32(ctx, 31, 0x10AF98u);
    ctx->pc = 0x10AF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF90u;
            // 0x10af94: 0x24a5eb88  addiu       $a1, $a1, -0x1478 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF98u; }
        if (ctx->pc != 0x10AF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF98u; }
        if (ctx->pc != 0x10AF98u) { return; }
    }
    ctx->pc = 0x10AF98u;
label_10af98:
    // 0x10af98: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10af98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10af9c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10af9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_10afa0:
    // 0x10afa0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10afa4: 0x0  nop
    ctx->pc = 0x10afa4u;
    // NOP
    // 0x10afa8: 0x0  nop
    ctx->pc = 0x10afa8u;
    // NOP
    // 0x10afac: 0x0  nop
    ctx->pc = 0x10afacu;
    // NOP
    // 0x10afb0: 0x0  nop
    ctx->pc = 0x10afb0u;
    // NOP
    // 0x10afb4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10AFB4u;
    {
        const bool branch_taken_0x10afb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10afb4) {
            ctx->pc = 0x10AFA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10afa0;
        }
    }
    ctx->pc = 0x10AFBCu;
    // 0x10afbc: 0xc0433c4  jal         func_10CF10
    ctx->pc = 0x10AFBCu;
    SET_GPR_U32(ctx, 31, 0x10AFC4u);
    ctx->pc = 0x10AFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AFBCu;
            // 0x10afc0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CF10u;
    if (runtime->hasFunction(0x10CF10u)) {
        auto targetFn = runtime->lookupFunction(0x10CF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFC4u; }
        if (ctx->pc != 0x10AFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CF10_0x10cf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFC4u; }
        if (ctx->pc != 0x10AFC4u) { return; }
    }
    ctx->pc = 0x10AFC4u;
label_10afc4:
    // 0x10afc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10afc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10afc8: 0xc043024  jal         func_10C090
    ctx->pc = 0x10AFC8u;
    SET_GPR_U32(ctx, 31, 0x10AFD0u);
    ctx->pc = 0x10AFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AFC8u;
            // 0x10afcc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C090u;
    if (runtime->hasFunction(0x10C090u)) {
        auto targetFn = runtime->lookupFunction(0x10C090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFD0u; }
        if (ctx->pc != 0x10AFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C090_0x10c090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFD0u; }
        if (ctx->pc != 0x10AFD0u) { return; }
    }
    ctx->pc = 0x10AFD0u;
label_10afd0:
    // 0x10afd0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10afd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10afd4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x10afd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10afd8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x10afd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10afdc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x10afdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10afe0: 0x3e00008  jr          $ra
    ctx->pc = 0x10AFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AFE0u;
            // 0x10afe4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AFE8u;
}
