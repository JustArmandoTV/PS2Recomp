#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004329A0
// Address: 0x4329a0 - 0x432a50
void sub_004329A0_0x4329a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004329A0_0x4329a0");
#endif

    switch (ctx->pc) {
        case 0x4329f4u: goto label_4329f4;
        case 0x432a24u: goto label_432a24;
        case 0x432a34u: goto label_432a34;
        default: break;
    }

    ctx->pc = 0x4329a0u;

    // 0x4329a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4329a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4329a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4329a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4329a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4329a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4329ac: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x4329acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x4329b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4329b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4329b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4329b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4329b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4329b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4329bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4329bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4329c0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x4329c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x4329c4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4329c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x4329c8: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x4329c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x4329cc: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x4329ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x4329d0: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x4329d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x4329d4: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x4329d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x4329d8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x4329d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x4329dc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x4329dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x4329e0: 0x8c42d128  lw          $v0, -0x2ED8($v0)
    ctx->pc = 0x4329e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955304)));
    // 0x4329e4: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x4329e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x4329e8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x4329e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4329ec: 0xc058300  jal         func_160C00
    ctx->pc = 0x4329ECu;
    SET_GPR_U32(ctx, 31, 0x4329F4u);
    ctx->pc = 0x4329F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4329ECu;
            // 0x4329f0: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C00u;
    if (runtime->hasFunction(0x160C00u)) {
        auto targetFn = runtime->lookupFunction(0x160C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4329F4u; }
        if (ctx->pc != 0x4329F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C00_0x160c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4329F4u; }
        if (ctx->pc != 0x4329F4u) { return; }
    }
    ctx->pc = 0x4329F4u;
label_4329f4:
    // 0x4329f4: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x4329f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x4329f8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4329f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x4329fc: 0x8c43d128  lw          $v1, -0x2ED8($v0)
    ctx->pc = 0x4329fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955304)));
    // 0x432a00: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x432a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x432a04: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x432a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x432a08: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x432a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x432a0c: 0x27a2002c  addiu       $v0, $sp, 0x2C
    ctx->pc = 0x432a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x432a10: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x432a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x432a14: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x432a14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x432a18: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x432a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x432a1c: 0xc10ca94  jal         func_432A50
    ctx->pc = 0x432A1Cu;
    SET_GPR_U32(ctx, 31, 0x432A24u);
    ctx->pc = 0x432A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432A1Cu;
            // 0x432a20: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432A50u;
    if (runtime->hasFunction(0x432A50u)) {
        auto targetFn = runtime->lookupFunction(0x432A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432A24u; }
        if (ctx->pc != 0x432A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432A50_0x432a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432A24u; }
        if (ctx->pc != 0x432A24u) { return; }
    }
    ctx->pc = 0x432A24u;
label_432a24:
    // 0x432a24: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x432a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x432a28: 0x8c44d128  lw          $a0, -0x2ED8($v0)
    ctx->pc = 0x432a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955304)));
    // 0x432a2c: 0xc057c88  jal         func_15F220
    ctx->pc = 0x432A2Cu;
    SET_GPR_U32(ctx, 31, 0x432A34u);
    ctx->pc = 0x432A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432A2Cu;
            // 0x432a30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F220u;
    if (runtime->hasFunction(0x15F220u)) {
        auto targetFn = runtime->lookupFunction(0x15F220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432A34u; }
        if (ctx->pc != 0x432A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F220_0x15f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432A34u; }
        if (ctx->pc != 0x432A34u) { return; }
    }
    ctx->pc = 0x432A34u;
label_432a34:
    // 0x432a34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x432a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432a38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x432a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x432a3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x432a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432a40: 0x3e00008  jr          $ra
    ctx->pc = 0x432A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432A40u;
            // 0x432a44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x432A48u;
    // 0x432a48: 0x0  nop
    ctx->pc = 0x432a48u;
    // NOP
    // 0x432a4c: 0x0  nop
    ctx->pc = 0x432a4cu;
    // NOP
}
