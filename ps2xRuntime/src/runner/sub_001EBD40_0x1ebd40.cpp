#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EBD40
// Address: 0x1ebd40 - 0x1ebe50
void sub_001EBD40_0x1ebd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBD40_0x1ebd40");
#endif

    switch (ctx->pc) {
        case 0x1ebd98u: goto label_1ebd98;
        case 0x1ebde4u: goto label_1ebde4;
        case 0x1ebe34u: goto label_1ebe34;
        default: break;
    }

    ctx->pc = 0x1ebd40u;

    // 0x1ebd40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ebd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ebd44: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1ebd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1ebd48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ebd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ebd4c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ebd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ebd50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ebd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ebd54: 0x2463a1f0  addiu       $v1, $v1, -0x5E10
    ctx->pc = 0x1ebd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943216));
    // 0x1ebd58: 0x24429ac0  addiu       $v0, $v0, -0x6540
    ctx->pc = 0x1ebd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941376));
    // 0x1ebd5c: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1ebd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x1ebd60: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1ebd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x1ebd64: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1ebd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1ebd68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ebd68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebd6c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ebd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ebd70: 0x24639a20  addiu       $v1, $v1, -0x65E0
    ctx->pc = 0x1ebd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941216));
    // 0x1ebd74: 0x244298e0  addiu       $v0, $v0, -0x6720
    ctx->pc = 0x1ebd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940896));
    // 0x1ebd78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ebd78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebd7c: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x1ebd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x1ebd80: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1ebd80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1ebd84: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1ebd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ebd88: 0xa3a70070  sb          $a3, 0x70($sp)
    ctx->pc = 0x1ebd88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ebd8c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1ebd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ebd90: 0xc07ff48  jal         func_1FFD20
    ctx->pc = 0x1EBD90u;
    SET_GPR_U32(ctx, 31, 0x1EBD98u);
    ctx->pc = 0x1EBD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD90u;
            // 0x1ebd94: 0xa3a70071  sb          $a3, 0x71($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 113), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD98u; }
        if (ctx->pc != 0x1EBD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD98u; }
        if (ctx->pc != 0x1EBD98u) { return; }
    }
    ctx->pc = 0x1EBD98u;
label_1ebd98:
    // 0x1ebd98: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ebd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ebd9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ebd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebda0: 0x2442a2a0  addiu       $v0, $v0, -0x5D60
    ctx->pc = 0x1ebda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943392));
    // 0x1ebda4: 0xa3a60051  sb          $a2, 0x51($sp)
    ctx->pc = 0x1ebda4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ebda8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1ebda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1ebdac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ebdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebdb0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ebdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ebdb4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1ebdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ebdb8: 0x24428930  addiu       $v0, $v0, -0x76D0
    ctx->pc = 0x1ebdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936880));
    // 0x1ebdbc: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x1ebdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ebdc0: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1ebdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1ebdc4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ebdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ebdc8: 0xa3a00050  sb          $zero, 0x50($sp)
    ctx->pc = 0x1ebdc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ebdcc: 0x24428630  addiu       $v0, $v0, -0x79D0
    ctx->pc = 0x1ebdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936112));
    // 0x1ebdd0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1ebdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1ebdd4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ebdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ebdd8: 0x244293c0  addiu       $v0, $v0, -0x6C40
    ctx->pc = 0x1ebdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939584));
    // 0x1ebddc: 0xc07ff48  jal         func_1FFD20
    ctx->pc = 0x1EBDDCu;
    SET_GPR_U32(ctx, 31, 0x1EBDE4u);
    ctx->pc = 0x1EBDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBDDCu;
            // 0x1ebde0: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDE4u; }
        if (ctx->pc != 0x1EBDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDE4u; }
        if (ctx->pc != 0x1EBDE4u) { return; }
    }
    ctx->pc = 0x1EBDE4u;
label_1ebde4:
    // 0x1ebde4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ebde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ebde8: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1ebde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1ebdec: 0x244290e0  addiu       $v0, $v0, -0x6F20
    ctx->pc = 0x1ebdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938848));
    // 0x1ebdf0: 0x24638930  addiu       $v1, $v1, -0x76D0
    ctx->pc = 0x1ebdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936880));
    // 0x1ebdf4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1ebdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1ebdf8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1ebdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ebdfc: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ebdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ebe00: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1ebe00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1ebe04: 0x24428630  addiu       $v0, $v0, -0x79D0
    ctx->pc = 0x1ebe04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936112));
    // 0x1ebe08: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1ebe08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1ebe0c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1ebe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1ebe10: 0x246393c0  addiu       $v1, $v1, -0x6C40
    ctx->pc = 0x1ebe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939584));
    // 0x1ebe14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebe18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ebe18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe1c: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x1ebe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x1ebe20: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1ebe20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ebe24: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x1ebe24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ebe28: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1ebe28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe2c: 0xc07ff48  jal         func_1FFD20
    ctx->pc = 0x1EBE2Cu;
    SET_GPR_U32(ctx, 31, 0x1EBE34u);
    ctx->pc = 0x1EBE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE2Cu;
            // 0x1ebe30: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBE34u; }
        if (ctx->pc != 0x1EBE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBE34u; }
        if (ctx->pc != 0x1EBE34u) { return; }
    }
    ctx->pc = 0x1EBE34u;
label_1ebe34:
    // 0x1ebe34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ebe34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebe38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ebe38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebe3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBE3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE3Cu;
            // 0x1ebe40: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EBE44u;
    // 0x1ebe44: 0x0  nop
    ctx->pc = 0x1ebe44u;
    // NOP
    // 0x1ebe48: 0x0  nop
    ctx->pc = 0x1ebe48u;
    // NOP
    // 0x1ebe4c: 0x0  nop
    ctx->pc = 0x1ebe4cu;
    // NOP
}
