#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00535AD0
// Address: 0x535ad0 - 0x535c80
void sub_00535AD0_0x535ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00535AD0_0x535ad0");
#endif

    switch (ctx->pc) {
        case 0x535bb4u: goto label_535bb4;
        case 0x535bc4u: goto label_535bc4;
        case 0x535bd8u: goto label_535bd8;
        case 0x535bf0u: goto label_535bf0;
        case 0x535c00u: goto label_535c00;
        case 0x535c60u: goto label_535c60;
        default: break;
    }

    ctx->pc = 0x535ad0u;

    // 0x535ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x535ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x535ad4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x535ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x535ad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x535ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x535adc: 0x3c0a006b  lui         $t2, 0x6B
    ctx->pc = 0x535adcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)107 << 16));
    // 0x535ae0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x535ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x535ae4: 0x246372f0  addiu       $v1, $v1, 0x72F0
    ctx->pc = 0x535ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29424));
    // 0x535ae8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x535ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x535aec: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x535aecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x535af0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x535af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x535af4: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x535af4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x535af8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x535af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x535afc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x535afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x535b00: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x535b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x535b04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x535b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x535b08: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x535b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x535b0c: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x535b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x535b10: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x535b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x535b14: 0x2449ffd8  addiu       $t1, $v0, -0x28
    ctx->pc = 0x535b14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x535b18: 0xa0850020  sb          $a1, 0x20($a0)
    ctx->pc = 0x535b18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x535b1c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x535b1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x535b20: 0xa0860021  sb          $a2, 0x21($a0)
    ctx->pc = 0x535b20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 6));
    // 0x535b24: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x535b24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x535b28: 0xa08c0022  sb          $t4, 0x22($a0)
    ctx->pc = 0x535b28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 34), (uint8_t)GPR_U32(ctx, 12));
    // 0x535b2c: 0x254a6e30  addiu       $t2, $t2, 0x6E30
    ctx->pc = 0x535b2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28208));
    // 0x535b30: 0xa0800023  sb          $zero, 0x23($a0)
    ctx->pc = 0x535b30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x535b34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x535b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x535b38: 0xa0800024  sb          $zero, 0x24($a0)
    ctx->pc = 0x535b38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x535b3c: 0x25086da0  addiu       $t0, $t0, 0x6DA0
    ctx->pc = 0x535b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28064));
    // 0x535b40: 0xa0800025  sb          $zero, 0x25($a0)
    ctx->pc = 0x535b40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x535b44: 0x24e76e14  addiu       $a3, $a3, 0x6E14
    ctx->pc = 0x535b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28180));
    // 0x535b48: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x535b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x535b4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x535b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x535b50: 0xac8b001c  sw          $t3, 0x1C($a0)
    ctx->pc = 0x535b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 11));
    // 0x535b54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x535b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x535b58: 0xac8a0028  sw          $t2, 0x28($a0)
    ctx->pc = 0x535b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 10));
    // 0x535b5c: 0x240600b8  addiu       $a2, $zero, 0xB8
    ctx->pc = 0x535b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x535b60: 0xac493e28  sw          $t1, 0x3E28($v0)
    ctx->pc = 0x535b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15912), GPR_U32(ctx, 9));
    // 0x535b64: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x535b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x535b68: 0xac870028  sw          $a3, 0x28($a0)
    ctx->pc = 0x535b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 7));
    // 0x535b6c: 0xa080002c  sb          $zero, 0x2C($a0)
    ctx->pc = 0x535b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x535b70: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x535b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x535b74: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x535b74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x535b78: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x535b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x535b7c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x535b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x535b80: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x535b80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x535b84: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x535b84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x535b88: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x535b88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x535b8c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x535b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x535b90: 0xac8b0050  sw          $t3, 0x50($a0)
    ctx->pc = 0x535b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 11));
    // 0x535b94: 0xa0800064  sb          $zero, 0x64($a0)
    ctx->pc = 0x535b94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x535b98: 0xac8007b4  sw          $zero, 0x7B4($a0)
    ctx->pc = 0x535b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1972), GPR_U32(ctx, 0));
    // 0x535b9c: 0xac8007b8  sw          $zero, 0x7B8($a0)
    ctx->pc = 0x535b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1976), GPR_U32(ctx, 0));
    // 0x535ba0: 0xa08c07c0  sb          $t4, 0x7C0($a0)
    ctx->pc = 0x535ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1984), (uint8_t)GPR_U32(ctx, 12));
    // 0x535ba4: 0xa08c07c1  sb          $t4, 0x7C1($a0)
    ctx->pc = 0x535ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1985), (uint8_t)GPR_U32(ctx, 12));
    // 0x535ba8: 0xa08007c2  sb          $zero, 0x7C2($a0)
    ctx->pc = 0x535ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1986), (uint8_t)GPR_U32(ctx, 0));
    // 0x535bac: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x535BACu;
    SET_GPR_U32(ctx, 31, 0x535BB4u);
    ctx->pc = 0x535BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535BACu;
            // 0x535bb0: 0x26040338  addiu       $a0, $s0, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535BB4u; }
        if (ctx->pc != 0x535BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535BB4u; }
        if (ctx->pc != 0x535BB4u) { return; }
    }
    ctx->pc = 0x535BB4u;
label_535bb4:
    // 0x535bb4: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x535bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x535bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x535bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x535bbc: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x535BBCu;
    SET_GPR_U32(ctx, 31, 0x535BC4u);
    ctx->pc = 0x535BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535BBCu;
            // 0x535bc0: 0x240602d0  addiu       $a2, $zero, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535BC4u; }
        if (ctx->pc != 0x535BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535BC4u; }
        if (ctx->pc != 0x535BC4u) { return; }
    }
    ctx->pc = 0x535BC4u;
label_535bc4:
    // 0x535bc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x535bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x535bc8: 0x24050500  addiu       $a1, $zero, 0x500
    ctx->pc = 0x535bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x535bcc: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x535bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x535bd0: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x535BD0u;
    SET_GPR_U32(ctx, 31, 0x535BD8u);
    ctx->pc = 0x535BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535BD0u;
            // 0x535bd4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535BD8u; }
        if (ctx->pc != 0x535BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535BD8u; }
        if (ctx->pc != 0x535BD8u) { return; }
    }
    ctx->pc = 0x535BD8u;
label_535bd8:
    // 0x535bd8: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x535bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
    // 0x535bdc: 0xae0207b4  sw          $v0, 0x7B4($s0)
    ctx->pc = 0x535bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 2));
    // 0x535be0: 0x2484b610  addiu       $a0, $a0, -0x49F0
    ctx->pc = 0x535be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948368));
    // 0x535be4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x535be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x535be8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x535BE8u;
    SET_GPR_U32(ctx, 31, 0x535BF0u);
    ctx->pc = 0x535BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535BE8u;
            // 0x535bec: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535BF0u; }
        if (ctx->pc != 0x535BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535BF0u; }
        if (ctx->pc != 0x535BF0u) { return; }
    }
    ctx->pc = 0x535BF0u;
label_535bf0:
    // 0x535bf0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x535bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x535bf4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x535bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x535bf8: 0xc0484e4  jal         func_121390
    ctx->pc = 0x535BF8u;
    SET_GPR_U32(ctx, 31, 0x535C00u);
    ctx->pc = 0x535BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535BF8u;
            // 0x535bfc: 0xac43cf98  sw          $v1, -0x3068($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954904), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121390u;
    if (runtime->hasFunction(0x121390u)) {
        auto targetFn = runtime->lookupFunction(0x121390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535C00u; }
        if (ctx->pc != 0x535C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121390_0x121390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535C00u; }
        if (ctx->pc != 0x535C00u) { return; }
    }
    ctx->pc = 0x535C00u;
label_535c00:
    // 0x535c00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x535c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x535c04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x535c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x535c08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x535c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x535c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x535C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x535C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535C0Cu;
            // 0x535c10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x535C14u;
    // 0x535c14: 0x0  nop
    ctx->pc = 0x535c14u;
    // NOP
    // 0x535c18: 0x0  nop
    ctx->pc = 0x535c18u;
    // NOP
    // 0x535c1c: 0x0  nop
    ctx->pc = 0x535c1cu;
    // NOP
    // 0x535c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x535c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x535c24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x535c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x535c28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x535c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x535c2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x535c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x535c30: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x535C30u;
    {
        const bool branch_taken_0x535c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x535c30) {
            ctx->pc = 0x535C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x535C30u;
            // 0x535c34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x535C64u;
            goto label_535c64;
        }
    }
    ctx->pc = 0x535C38u;
    // 0x535c38: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x535c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x535c3c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x535c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x535c40: 0x24426e30  addiu       $v0, $v0, 0x6E30
    ctx->pc = 0x535c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28208));
    // 0x535c44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x535c44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x535c48: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x535c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x535c4c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x535c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x535c50: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x535C50u;
    {
        const bool branch_taken_0x535c50 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x535C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535C50u;
            // 0x535c54: 0xac403e28  sw          $zero, 0x3E28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535c50) {
            ctx->pc = 0x535C60u;
            goto label_535c60;
        }
    }
    ctx->pc = 0x535C58u;
    // 0x535c58: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x535C58u;
    SET_GPR_U32(ctx, 31, 0x535C60u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535C60u; }
        if (ctx->pc != 0x535C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535C60u; }
        if (ctx->pc != 0x535C60u) { return; }
    }
    ctx->pc = 0x535C60u;
label_535c60:
    // 0x535c60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x535c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_535c64:
    // 0x535c64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x535c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x535c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x535c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x535c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x535C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x535C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535C6Cu;
            // 0x535c70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x535C74u;
    // 0x535c74: 0x0  nop
    ctx->pc = 0x535c74u;
    // NOP
    // 0x535c78: 0x0  nop
    ctx->pc = 0x535c78u;
    // NOP
    // 0x535c7c: 0x0  nop
    ctx->pc = 0x535c7cu;
    // NOP
}
