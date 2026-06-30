#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00435BB0
// Address: 0x435bb0 - 0x435d30
void sub_00435BB0_0x435bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435BB0_0x435bb0");
#endif

    switch (ctx->pc) {
        case 0x435bccu: goto label_435bcc;
        case 0x435becu: goto label_435bec;
        case 0x435c24u: goto label_435c24;
        case 0x435c44u: goto label_435c44;
        case 0x435c60u: goto label_435c60;
        case 0x435cc0u: goto label_435cc0;
        case 0x435cccu: goto label_435ccc;
        case 0x435cd8u: goto label_435cd8;
        case 0x435ce4u: goto label_435ce4;
        case 0x435cf0u: goto label_435cf0;
        case 0x435cfcu: goto label_435cfc;
        case 0x435d14u: goto label_435d14;
        default: break;
    }

    ctx->pc = 0x435bb0u;

    // 0x435bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x435bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x435bb4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x435bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x435bb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x435bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x435bbc: 0x34468702  ori         $a2, $v0, 0x8702
    ctx->pc = 0x435bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34562);
    // 0x435bc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x435bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x435bc4: 0xc10d784  jal         func_435E10
    ctx->pc = 0x435BC4u;
    SET_GPR_U32(ctx, 31, 0x435BCCu);
    ctx->pc = 0x435BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435BC4u;
            // 0x435bc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x435E10u;
    if (runtime->hasFunction(0x435E10u)) {
        auto targetFn = runtime->lookupFunction(0x435E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435BCCu; }
        if (ctx->pc != 0x435BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00435E10_0x435e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435BCCu; }
        if (ctx->pc != 0x435BCCu) { return; }
    }
    ctx->pc = 0x435BCCu;
label_435bcc:
    // 0x435bcc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x435bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x435bd0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x435bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x435bd4: 0x2463cc00  addiu       $v1, $v1, -0x3400
    ctx->pc = 0x435bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953984));
    // 0x435bd8: 0x2442cc38  addiu       $v0, $v0, -0x33C8
    ctx->pc = 0x435bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954040));
    // 0x435bdc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x435bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x435be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x435be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435be4: 0xc10d780  jal         func_435E00
    ctx->pc = 0x435BE4u;
    SET_GPR_U32(ctx, 31, 0x435BECu);
    ctx->pc = 0x435BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435BE4u;
            // 0x435be8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x435E00u;
    if (runtime->hasFunction(0x435E00u)) {
        auto targetFn = runtime->lookupFunction(0x435E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435BECu; }
        if (ctx->pc != 0x435BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00435E00_0x435e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435BECu; }
        if (ctx->pc != 0x435BECu) { return; }
    }
    ctx->pc = 0x435BECu;
label_435bec:
    // 0x435bec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x435becu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x435bf0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x435bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x435bf4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x435bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x435bf8: 0x2442cb50  addiu       $v0, $v0, -0x34B0
    ctx->pc = 0x435bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953808));
    // 0x435bfc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x435bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x435c00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x435c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x435c04: 0x2442cb88  addiu       $v0, $v0, -0x3478
    ctx->pc = 0x435c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953864));
    // 0x435c08: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x435c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x435c0c: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x435c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x435c10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x435c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x435c14: 0xa2000094  sb          $zero, 0x94($s0)
    ctx->pc = 0x435c14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x435c18: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x435c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x435c1c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x435C1Cu;
    SET_GPR_U32(ctx, 31, 0x435C24u);
    ctx->pc = 0x435C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435C1Cu;
            // 0x435c20: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435C24u; }
        if (ctx->pc != 0x435C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435C24u; }
        if (ctx->pc != 0x435C24u) { return; }
    }
    ctx->pc = 0x435C24u;
label_435c24:
    // 0x435c24: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x435c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x435c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x435c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435c2c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x435C2Cu;
    {
        const bool branch_taken_0x435c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x435C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435C2Cu;
            // 0x435c30: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435c2c) {
            ctx->pc = 0x435C48u;
            goto label_435c48;
        }
    }
    ctx->pc = 0x435C34u;
    // 0x435c34: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x435c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x435c38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x435c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x435c3c: 0xc0827ac  jal         func_209EB0
    ctx->pc = 0x435C3Cu;
    SET_GPR_U32(ctx, 31, 0x435C44u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435C44u; }
        if (ctx->pc != 0x435C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435C44u; }
        if (ctx->pc != 0x435C44u) { return; }
    }
    ctx->pc = 0x435C44u;
label_435c44:
    // 0x435c44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x435c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_435c48:
    // 0x435c48: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x435c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x435c4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x435c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435c50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x435c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x435c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x435c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x435c58: 0x3e00008  jr          $ra
    ctx->pc = 0x435C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435C58u;
            // 0x435c5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x435C60u;
label_435c60:
    // 0x435c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x435c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x435c64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x435c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x435c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x435c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x435c6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x435c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x435c70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x435c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435c74: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x435C74u;
    {
        const bool branch_taken_0x435c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x435C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435C74u;
            // 0x435c78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435c74) {
            ctx->pc = 0x435D14u;
            goto label_435d14;
        }
    }
    ctx->pc = 0x435C7Cu;
    // 0x435c7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x435c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x435c80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x435c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x435c84: 0x2463cc00  addiu       $v1, $v1, -0x3400
    ctx->pc = 0x435c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953984));
    // 0x435c88: 0x2442cc38  addiu       $v0, $v0, -0x33C8
    ctx->pc = 0x435c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954040));
    // 0x435c8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x435c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x435c90: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x435C90u;
    {
        const bool branch_taken_0x435c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x435C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435C90u;
            // 0x435c94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435c90) {
            ctx->pc = 0x435CFCu;
            goto label_435cfc;
        }
    }
    ctx->pc = 0x435C98u;
    // 0x435c98: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x435c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x435c9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x435c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x435ca0: 0x2463cbb0  addiu       $v1, $v1, -0x3450
    ctx->pc = 0x435ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953904));
    // 0x435ca4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x435ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x435ca8: 0x2442cbe8  addiu       $v0, $v0, -0x3418
    ctx->pc = 0x435ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953960));
    // 0x435cac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x435cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x435cb0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x435cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x435cb4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x435cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x435cb8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x435CB8u;
    SET_GPR_U32(ctx, 31, 0x435CC0u);
    ctx->pc = 0x435CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435CB8u;
            // 0x435cbc: 0x24a55560  addiu       $a1, $a1, 0x5560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435CC0u; }
        if (ctx->pc != 0x435CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435CC0u; }
        if (ctx->pc != 0x435CC0u) { return; }
    }
    ctx->pc = 0x435CC0u;
label_435cc0:
    // 0x435cc0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x435cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x435cc4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x435CC4u;
    SET_GPR_U32(ctx, 31, 0x435CCCu);
    ctx->pc = 0x435CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435CC4u;
            // 0x435cc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435CCCu; }
        if (ctx->pc != 0x435CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435CCCu; }
        if (ctx->pc != 0x435CCCu) { return; }
    }
    ctx->pc = 0x435CCCu;
label_435ccc:
    // 0x435ccc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x435cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x435cd0: 0xc10d764  jal         func_435D90
    ctx->pc = 0x435CD0u;
    SET_GPR_U32(ctx, 31, 0x435CD8u);
    ctx->pc = 0x435CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435CD0u;
            // 0x435cd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x435D90u;
    if (runtime->hasFunction(0x435D90u)) {
        auto targetFn = runtime->lookupFunction(0x435D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435CD8u; }
        if (ctx->pc != 0x435CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00435D90_0x435d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435CD8u; }
        if (ctx->pc != 0x435CD8u) { return; }
    }
    ctx->pc = 0x435CD8u;
label_435cd8:
    // 0x435cd8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x435cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x435cdc: 0xc10d764  jal         func_435D90
    ctx->pc = 0x435CDCu;
    SET_GPR_U32(ctx, 31, 0x435CE4u);
    ctx->pc = 0x435CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435CDCu;
            // 0x435ce0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x435D90u;
    if (runtime->hasFunction(0x435D90u)) {
        auto targetFn = runtime->lookupFunction(0x435D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435CE4u; }
        if (ctx->pc != 0x435CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00435D90_0x435d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435CE4u; }
        if (ctx->pc != 0x435CE4u) { return; }
    }
    ctx->pc = 0x435CE4u;
label_435ce4:
    // 0x435ce4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x435ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x435ce8: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x435CE8u;
    SET_GPR_U32(ctx, 31, 0x435CF0u);
    ctx->pc = 0x435CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435CE8u;
            // 0x435cec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (runtime->hasFunction(0x435D30u)) {
        auto targetFn = runtime->lookupFunction(0x435D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435CF0u; }
        if (ctx->pc != 0x435CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00435D30_0x435d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435CF0u; }
        if (ctx->pc != 0x435CF0u) { return; }
    }
    ctx->pc = 0x435CF0u;
label_435cf0:
    // 0x435cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x435cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435cf4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x435CF4u;
    SET_GPR_U32(ctx, 31, 0x435CFCu);
    ctx->pc = 0x435CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435CF4u;
            // 0x435cf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435CFCu; }
        if (ctx->pc != 0x435CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435CFCu; }
        if (ctx->pc != 0x435CFCu) { return; }
    }
    ctx->pc = 0x435CFCu;
label_435cfc:
    // 0x435cfc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x435cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x435d00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x435d00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x435d04: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x435D04u;
    {
        const bool branch_taken_0x435d04 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x435d04) {
            ctx->pc = 0x435D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x435D04u;
            // 0x435d08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x435D18u;
            goto label_435d18;
        }
    }
    ctx->pc = 0x435D0Cu;
    // 0x435d0c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x435D0Cu;
    SET_GPR_U32(ctx, 31, 0x435D14u);
    ctx->pc = 0x435D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x435D0Cu;
            // 0x435d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435D14u; }
        if (ctx->pc != 0x435D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435D14u; }
        if (ctx->pc != 0x435D14u) { return; }
    }
    ctx->pc = 0x435D14u;
label_435d14:
    // 0x435d14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x435d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_435d18:
    // 0x435d18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x435d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x435d1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x435d1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x435d20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x435d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x435d24: 0x3e00008  jr          $ra
    ctx->pc = 0x435D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435D24u;
            // 0x435d28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x435D2Cu;
    // 0x435d2c: 0x0  nop
    ctx->pc = 0x435d2cu;
    // NOP
}
