#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032BAD0
// Address: 0x32bad0 - 0x32bc70
void sub_0032BAD0_0x32bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BAD0_0x32bad0");
#endif

    switch (ctx->pc) {
        case 0x32baecu: goto label_32baec;
        case 0x32bb0cu: goto label_32bb0c;
        case 0x32bb58u: goto label_32bb58;
        case 0x32bb78u: goto label_32bb78;
        case 0x32bba0u: goto label_32bba0;
        case 0x32bc00u: goto label_32bc00;
        case 0x32bc0cu: goto label_32bc0c;
        case 0x32bc18u: goto label_32bc18;
        case 0x32bc24u: goto label_32bc24;
        case 0x32bc30u: goto label_32bc30;
        case 0x32bc3cu: goto label_32bc3c;
        case 0x32bc54u: goto label_32bc54;
        default: break;
    }

    ctx->pc = 0x32bad0u;

    // 0x32bad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32bad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32bad4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x32bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x32bad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32bad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32badc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x32badcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x32bae0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32bae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32bae4: 0xc0caf54  jal         func_32BD50
    ctx->pc = 0x32BAE4u;
    SET_GPR_U32(ctx, 31, 0x32BAECu);
    ctx->pc = 0x32BAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BAE4u;
            // 0x32bae8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32BD50u;
    if (runtime->hasFunction(0x32BD50u)) {
        auto targetFn = runtime->lookupFunction(0x32BD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BAECu; }
        if (ctx->pc != 0x32BAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032BD50_0x32bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BAECu; }
        if (ctx->pc != 0x32BAECu) { return; }
    }
    ctx->pc = 0x32BAECu;
label_32baec:
    // 0x32baec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32baecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32baf0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32baf4: 0x24634900  addiu       $v1, $v1, 0x4900
    ctx->pc = 0x32baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18688));
    // 0x32baf8: 0x24424938  addiu       $v0, $v0, 0x4938
    ctx->pc = 0x32baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18744));
    // 0x32bafc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x32bb00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32bb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bb04: 0xc0caf50  jal         func_32BD40
    ctx->pc = 0x32BB04u;
    SET_GPR_U32(ctx, 31, 0x32BB0Cu);
    ctx->pc = 0x32BB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BB04u;
            // 0x32bb08: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32BD40u;
    if (runtime->hasFunction(0x32BD40u)) {
        auto targetFn = runtime->lookupFunction(0x32BD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BB0Cu; }
        if (ctx->pc != 0x32BB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032BD40_0x32bd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BB0Cu; }
        if (ctx->pc != 0x32BB0Cu) { return; }
    }
    ctx->pc = 0x32BB0Cu;
label_32bb0c:
    // 0x32bb0c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x32bb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x32bb10: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x32bb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x32bb14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32bb18: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x32bb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x32bb1c: 0x24424850  addiu       $v0, $v0, 0x4850
    ctx->pc = 0x32bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18512));
    // 0x32bb20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32bb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32bb24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32bb28: 0x24424888  addiu       $v0, $v0, 0x4888
    ctx->pc = 0x32bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18568));
    // 0x32bb2c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x32bb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x32bb30: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x32bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x32bb34: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x32bb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x32bb38: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x32bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x32bb3c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x32bb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x32bb40: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x32bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x32bb44: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x32bb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x32bb48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x32bb4c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x32bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x32bb50: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x32BB50u;
    SET_GPR_U32(ctx, 31, 0x32BB58u);
    ctx->pc = 0x32BB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BB50u;
            // 0x32bb54: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BB58u; }
        if (ctx->pc != 0x32BB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BB58u; }
        if (ctx->pc != 0x32BB58u) { return; }
    }
    ctx->pc = 0x32BB58u;
label_32bb58:
    // 0x32bb58: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x32bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x32bb5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32bb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bb60: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32BB60u;
    {
        const bool branch_taken_0x32bb60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32BB60u;
            // 0x32bb64: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bb60) {
            ctx->pc = 0x32BB7Cu;
            goto label_32bb7c;
        }
    }
    ctx->pc = 0x32BB68u;
    // 0x32bb68: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x32bb6c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x32bb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32bb70: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x32BB70u;
    SET_GPR_U32(ctx, 31, 0x32BB78u);
    ctx->pc = 0x32BB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BB70u;
            // 0x32bb74: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BB78u; }
        if (ctx->pc != 0x32BB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BB78u; }
        if (ctx->pc != 0x32BB78u) { return; }
    }
    ctx->pc = 0x32BB78u;
label_32bb78:
    // 0x32bb78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32bb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32bb7c:
    // 0x32bb7c: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x32bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x32bb80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32bb80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bb84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32bb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bb88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32bb88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x32BB8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32BB8Cu;
            // 0x32bb90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32BB94u;
    // 0x32bb94: 0x0  nop
    ctx->pc = 0x32bb94u;
    // NOP
    // 0x32bb98: 0x0  nop
    ctx->pc = 0x32bb98u;
    // NOP
    // 0x32bb9c: 0x0  nop
    ctx->pc = 0x32bb9cu;
    // NOP
label_32bba0:
    // 0x32bba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32bba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32bba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32bba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32bba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32bbac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32bbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32bbb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32bbb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bbb4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x32BBB4u;
    {
        const bool branch_taken_0x32bbb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32BBB4u;
            // 0x32bbb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bbb4) {
            ctx->pc = 0x32BC54u;
            goto label_32bc54;
        }
    }
    ctx->pc = 0x32BBBCu;
    // 0x32bbbc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32bbc0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32bbc4: 0x24634900  addiu       $v1, $v1, 0x4900
    ctx->pc = 0x32bbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18688));
    // 0x32bbc8: 0x24424938  addiu       $v0, $v0, 0x4938
    ctx->pc = 0x32bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18744));
    // 0x32bbcc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x32bbd0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x32BBD0u;
    {
        const bool branch_taken_0x32bbd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32BBD0u;
            // 0x32bbd4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bbd0) {
            ctx->pc = 0x32BC3Cu;
            goto label_32bc3c;
        }
    }
    ctx->pc = 0x32BBD8u;
    // 0x32bbd8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32bbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32bbdc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32bbe0: 0x246348b0  addiu       $v1, $v1, 0x48B0
    ctx->pc = 0x32bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18608));
    // 0x32bbe4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32bbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32bbe8: 0x244248e8  addiu       $v0, $v0, 0x48E8
    ctx->pc = 0x32bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18664));
    // 0x32bbec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32bbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x32bbf0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x32bbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x32bbf4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x32bbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x32bbf8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x32BBF8u;
    SET_GPR_U32(ctx, 31, 0x32BC00u);
    ctx->pc = 0x32BBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BBF8u;
            // 0x32bbfc: 0x24a5b700  addiu       $a1, $a1, -0x4900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BC00u; }
        if (ctx->pc != 0x32BC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BC00u; }
        if (ctx->pc != 0x32BC00u) { return; }
    }
    ctx->pc = 0x32BC00u;
label_32bc00:
    // 0x32bc00: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x32bc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x32bc04: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x32BC04u;
    SET_GPR_U32(ctx, 31, 0x32BC0Cu);
    ctx->pc = 0x32BC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BC04u;
            // 0x32bc08: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BC0Cu; }
        if (ctx->pc != 0x32BC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BC0Cu; }
        if (ctx->pc != 0x32BC0Cu) { return; }
    }
    ctx->pc = 0x32BC0Cu;
label_32bc0c:
    // 0x32bc0c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x32bc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x32bc10: 0xc0caf34  jal         func_32BCD0
    ctx->pc = 0x32BC10u;
    SET_GPR_U32(ctx, 31, 0x32BC18u);
    ctx->pc = 0x32BC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BC10u;
            // 0x32bc14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32BCD0u;
    if (runtime->hasFunction(0x32BCD0u)) {
        auto targetFn = runtime->lookupFunction(0x32BCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BC18u; }
        if (ctx->pc != 0x32BC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032BCD0_0x32bcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BC18u; }
        if (ctx->pc != 0x32BC18u) { return; }
    }
    ctx->pc = 0x32BC18u;
label_32bc18:
    // 0x32bc18: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x32bc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x32bc1c: 0xc0caf34  jal         func_32BCD0
    ctx->pc = 0x32BC1Cu;
    SET_GPR_U32(ctx, 31, 0x32BC24u);
    ctx->pc = 0x32BC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BC1Cu;
            // 0x32bc20: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32BCD0u;
    if (runtime->hasFunction(0x32BCD0u)) {
        auto targetFn = runtime->lookupFunction(0x32BCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BC24u; }
        if (ctx->pc != 0x32BC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032BCD0_0x32bcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BC24u; }
        if (ctx->pc != 0x32BC24u) { return; }
    }
    ctx->pc = 0x32BC24u;
label_32bc24:
    // 0x32bc24: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x32bc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x32bc28: 0xc0caf1c  jal         func_32BC70
    ctx->pc = 0x32BC28u;
    SET_GPR_U32(ctx, 31, 0x32BC30u);
    ctx->pc = 0x32BC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BC28u;
            // 0x32bc2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32BC70u;
    if (runtime->hasFunction(0x32BC70u)) {
        auto targetFn = runtime->lookupFunction(0x32BC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BC30u; }
        if (ctx->pc != 0x32BC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032BC70_0x32bc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BC30u; }
        if (ctx->pc != 0x32BC30u) { return; }
    }
    ctx->pc = 0x32BC30u;
label_32bc30:
    // 0x32bc30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32bc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bc34: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x32BC34u;
    SET_GPR_U32(ctx, 31, 0x32BC3Cu);
    ctx->pc = 0x32BC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BC34u;
            // 0x32bc38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BC3Cu; }
        if (ctx->pc != 0x32BC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BC3Cu; }
        if (ctx->pc != 0x32BC3Cu) { return; }
    }
    ctx->pc = 0x32BC3Cu;
label_32bc3c:
    // 0x32bc3c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x32bc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x32bc40: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32bc40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32bc44: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32BC44u;
    {
        const bool branch_taken_0x32bc44 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x32bc44) {
            ctx->pc = 0x32BC48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32BC44u;
            // 0x32bc48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32BC58u;
            goto label_32bc58;
        }
    }
    ctx->pc = 0x32BC4Cu;
    // 0x32bc4c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x32BC4Cu;
    SET_GPR_U32(ctx, 31, 0x32BC54u);
    ctx->pc = 0x32BC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BC4Cu;
            // 0x32bc50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BC54u; }
        if (ctx->pc != 0x32BC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BC54u; }
        if (ctx->pc != 0x32BC54u) { return; }
    }
    ctx->pc = 0x32BC54u;
label_32bc54:
    // 0x32bc54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32bc54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32bc58:
    // 0x32bc58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32bc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32bc5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32bc5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bc60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32bc60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bc64: 0x3e00008  jr          $ra
    ctx->pc = 0x32BC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32BC64u;
            // 0x32bc68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32BC6Cu;
    // 0x32bc6c: 0x0  nop
    ctx->pc = 0x32bc6cu;
    // NOP
}
