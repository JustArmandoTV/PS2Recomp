#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00337BD0
// Address: 0x337bd0 - 0x337d50
void sub_00337BD0_0x337bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337BD0_0x337bd0");
#endif

    switch (ctx->pc) {
        case 0x337becu: goto label_337bec;
        case 0x337c0cu: goto label_337c0c;
        case 0x337c3cu: goto label_337c3c;
        case 0x337c5cu: goto label_337c5c;
        case 0x337c80u: goto label_337c80;
        case 0x337ce0u: goto label_337ce0;
        case 0x337cecu: goto label_337cec;
        case 0x337cf8u: goto label_337cf8;
        case 0x337d04u: goto label_337d04;
        case 0x337d10u: goto label_337d10;
        case 0x337d1cu: goto label_337d1c;
        case 0x337d34u: goto label_337d34;
        default: break;
    }

    ctx->pc = 0x337bd0u;

    // 0x337bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337bd4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x337bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x337bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x337bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x337bdc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x337bdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x337be0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x337be4: 0xc0cdf8c  jal         func_337E30
    ctx->pc = 0x337BE4u;
    SET_GPR_U32(ctx, 31, 0x337BECu);
    ctx->pc = 0x337BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337BE4u;
            // 0x337be8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x337E30u;
    if (runtime->hasFunction(0x337E30u)) {
        auto targetFn = runtime->lookupFunction(0x337E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337BECu; }
        if (ctx->pc != 0x337BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00337E30_0x337e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337BECu; }
        if (ctx->pc != 0x337BECu) { return; }
    }
    ctx->pc = 0x337BECu;
label_337bec:
    // 0x337bec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x337becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x337bf0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x337bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x337bf4: 0x24634e70  addiu       $v1, $v1, 0x4E70
    ctx->pc = 0x337bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20080));
    // 0x337bf8: 0x24424ea8  addiu       $v0, $v0, 0x4EA8
    ctx->pc = 0x337bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20136));
    // 0x337bfc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x337bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x337c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337c04: 0xc0cdf88  jal         func_337E20
    ctx->pc = 0x337C04u;
    SET_GPR_U32(ctx, 31, 0x337C0Cu);
    ctx->pc = 0x337C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337C04u;
            // 0x337c08: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x337E20u;
    if (runtime->hasFunction(0x337E20u)) {
        auto targetFn = runtime->lookupFunction(0x337E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337C0Cu; }
        if (ctx->pc != 0x337C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00337E20_0x337e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337C0Cu; }
        if (ctx->pc != 0x337C0Cu) { return; }
    }
    ctx->pc = 0x337C0Cu;
label_337c0c:
    // 0x337c0c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x337c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x337c10: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x337c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x337c14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x337c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x337c18: 0x24424dc0  addiu       $v0, $v0, 0x4DC0
    ctx->pc = 0x337c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19904));
    // 0x337c1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x337c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x337c20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x337c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x337c24: 0x24424df8  addiu       $v0, $v0, 0x4DF8
    ctx->pc = 0x337c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19960));
    // 0x337c28: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x337c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x337c2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x337c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x337c30: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x337c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x337c34: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x337C34u;
    SET_GPR_U32(ctx, 31, 0x337C3Cu);
    ctx->pc = 0x337C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337C34u;
            // 0x337c38: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337C3Cu; }
        if (ctx->pc != 0x337C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337C3Cu; }
        if (ctx->pc != 0x337C3Cu) { return; }
    }
    ctx->pc = 0x337C3Cu;
label_337c3c:
    // 0x337c3c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x337c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x337c40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x337c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337c44: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x337C44u;
    {
        const bool branch_taken_0x337c44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x337C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337C44u;
            // 0x337c48: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337c44) {
            ctx->pc = 0x337C60u;
            goto label_337c60;
        }
    }
    ctx->pc = 0x337C4Cu;
    // 0x337c4c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x337c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x337c50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x337c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x337c54: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x337C54u;
    SET_GPR_U32(ctx, 31, 0x337C5Cu);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337C5Cu; }
        if (ctx->pc != 0x337C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337C5Cu; }
        if (ctx->pc != 0x337C5Cu) { return; }
    }
    ctx->pc = 0x337C5Cu;
label_337c5c:
    // 0x337c5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x337c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_337c60:
    // 0x337c60: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x337c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x337c64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x337c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337c68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x337c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337c6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337c70: 0x3e00008  jr          $ra
    ctx->pc = 0x337C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337C70u;
            // 0x337c74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x337C78u;
    // 0x337c78: 0x0  nop
    ctx->pc = 0x337c78u;
    // NOP
    // 0x337c7c: 0x0  nop
    ctx->pc = 0x337c7cu;
    // NOP
label_337c80:
    // 0x337c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x337c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x337c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x337c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x337c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x337c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x337c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x337c90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x337c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337c94: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x337C94u;
    {
        const bool branch_taken_0x337c94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x337C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337C94u;
            // 0x337c98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337c94) {
            ctx->pc = 0x337D34u;
            goto label_337d34;
        }
    }
    ctx->pc = 0x337C9Cu;
    // 0x337c9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x337c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x337ca0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x337ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x337ca4: 0x24634e70  addiu       $v1, $v1, 0x4E70
    ctx->pc = 0x337ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20080));
    // 0x337ca8: 0x24424ea8  addiu       $v0, $v0, 0x4EA8
    ctx->pc = 0x337ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20136));
    // 0x337cac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x337cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x337cb0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x337CB0u;
    {
        const bool branch_taken_0x337cb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x337CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337CB0u;
            // 0x337cb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337cb0) {
            ctx->pc = 0x337D1Cu;
            goto label_337d1c;
        }
    }
    ctx->pc = 0x337CB8u;
    // 0x337cb8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x337cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x337cbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x337cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x337cc0: 0x24634e20  addiu       $v1, $v1, 0x4E20
    ctx->pc = 0x337cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20000));
    // 0x337cc4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x337cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x337cc8: 0x24424e58  addiu       $v0, $v0, 0x4E58
    ctx->pc = 0x337cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20056));
    // 0x337ccc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x337cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x337cd0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x337cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x337cd4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x337cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x337cd8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x337CD8u;
    SET_GPR_U32(ctx, 31, 0x337CE0u);
    ctx->pc = 0x337CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337CD8u;
            // 0x337cdc: 0x24a57800  addiu       $a1, $a1, 0x7800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337CE0u; }
        if (ctx->pc != 0x337CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337CE0u; }
        if (ctx->pc != 0x337CE0u) { return; }
    }
    ctx->pc = 0x337CE0u;
label_337ce0:
    // 0x337ce0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x337ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x337ce4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x337CE4u;
    SET_GPR_U32(ctx, 31, 0x337CECu);
    ctx->pc = 0x337CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337CE4u;
            // 0x337ce8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337CECu; }
        if (ctx->pc != 0x337CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337CECu; }
        if (ctx->pc != 0x337CECu) { return; }
    }
    ctx->pc = 0x337CECu;
label_337cec:
    // 0x337cec: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x337cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x337cf0: 0xc0cdf6c  jal         func_337DB0
    ctx->pc = 0x337CF0u;
    SET_GPR_U32(ctx, 31, 0x337CF8u);
    ctx->pc = 0x337CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337CF0u;
            // 0x337cf4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x337DB0u;
    if (runtime->hasFunction(0x337DB0u)) {
        auto targetFn = runtime->lookupFunction(0x337DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337CF8u; }
        if (ctx->pc != 0x337CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00337DB0_0x337db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337CF8u; }
        if (ctx->pc != 0x337CF8u) { return; }
    }
    ctx->pc = 0x337CF8u;
label_337cf8:
    // 0x337cf8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x337cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x337cfc: 0xc0cdf6c  jal         func_337DB0
    ctx->pc = 0x337CFCu;
    SET_GPR_U32(ctx, 31, 0x337D04u);
    ctx->pc = 0x337D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337CFCu;
            // 0x337d00: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x337DB0u;
    if (runtime->hasFunction(0x337DB0u)) {
        auto targetFn = runtime->lookupFunction(0x337DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337D04u; }
        if (ctx->pc != 0x337D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00337DB0_0x337db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337D04u; }
        if (ctx->pc != 0x337D04u) { return; }
    }
    ctx->pc = 0x337D04u;
label_337d04:
    // 0x337d04: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x337d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x337d08: 0xc0cdf54  jal         func_337D50
    ctx->pc = 0x337D08u;
    SET_GPR_U32(ctx, 31, 0x337D10u);
    ctx->pc = 0x337D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337D08u;
            // 0x337d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x337D50u;
    if (runtime->hasFunction(0x337D50u)) {
        auto targetFn = runtime->lookupFunction(0x337D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337D10u; }
        if (ctx->pc != 0x337D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00337D50_0x337d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337D10u; }
        if (ctx->pc != 0x337D10u) { return; }
    }
    ctx->pc = 0x337D10u;
label_337d10:
    // 0x337d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337d14: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x337D14u;
    SET_GPR_U32(ctx, 31, 0x337D1Cu);
    ctx->pc = 0x337D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337D14u;
            // 0x337d18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337D1Cu; }
        if (ctx->pc != 0x337D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337D1Cu; }
        if (ctx->pc != 0x337D1Cu) { return; }
    }
    ctx->pc = 0x337D1Cu;
label_337d1c:
    // 0x337d1c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x337d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x337d20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x337d20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x337d24: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x337D24u;
    {
        const bool branch_taken_0x337d24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x337d24) {
            ctx->pc = 0x337D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x337D24u;
            // 0x337d28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x337D38u;
            goto label_337d38;
        }
    }
    ctx->pc = 0x337D2Cu;
    // 0x337d2c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x337D2Cu;
    SET_GPR_U32(ctx, 31, 0x337D34u);
    ctx->pc = 0x337D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337D2Cu;
            // 0x337d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337D34u; }
        if (ctx->pc != 0x337D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337D34u; }
        if (ctx->pc != 0x337D34u) { return; }
    }
    ctx->pc = 0x337D34u;
label_337d34:
    // 0x337d34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x337d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_337d38:
    // 0x337d38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x337d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x337d3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337d40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337d44: 0x3e00008  jr          $ra
    ctx->pc = 0x337D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337D44u;
            // 0x337d48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x337D4Cu;
    // 0x337d4c: 0x0  nop
    ctx->pc = 0x337d4cu;
    // NOP
}
