#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00241C00
// Address: 0x241c00 - 0x241ca0
void sub_00241C00_0x241c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241C00_0x241c00");
#endif

    switch (ctx->pc) {
        case 0x241c70u: goto label_241c70;
        default: break;
    }

    ctx->pc = 0x241c00u;

    // 0x241c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x241c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x241c04: 0x64060004  daddiu      $a2, $zero, 0x4
    ctx->pc = 0x241c04u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x241c08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x241c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x241c0c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x241c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x241c10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x241c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x241c14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x241c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x241c18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x241c18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241c1c: 0x90a70028  lbu         $a3, 0x28($a1)
    ctx->pc = 0x241c1cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x241c20: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x241c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x241c24: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x241c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x241c28: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x241c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x241c2c: 0xa0a40028  sb          $a0, 0x28($a1)
    ctx->pc = 0x241c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x241c30: 0xa0a00026  sb          $zero, 0x26($a1)
    ctx->pc = 0x241c30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x241c34: 0xa0a00025  sb          $zero, 0x25($a1)
    ctx->pc = 0x241c34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x241c38: 0x94a40022  lhu         $a0, 0x22($a1)
    ctx->pc = 0x241c38u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x241c3c: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x241C3Cu;
    {
        const bool branch_taken_0x241c3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x241C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241C3Cu;
            // 0x241c40: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c3c) {
            ctx->pc = 0x241C8Cu;
            goto label_241c8c;
        }
    }
    ctx->pc = 0x241C44u;
    // 0x241c44: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x241c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x241c48: 0xa6030022  sh          $v1, 0x22($s0)
    ctx->pc = 0x241c48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x241c4c: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x241c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x241c50: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x241c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x241c54: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x241c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x241c58: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x241c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x241c5c: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x241C5Cu;
    {
        const bool branch_taken_0x241c5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x241c5c) {
            ctx->pc = 0x241C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241C5Cu;
            // 0x241c60: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241C74u;
            goto label_241c74;
        }
    }
    ctx->pc = 0x241C64u;
    // 0x241c64: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x241c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x241c68: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x241C68u;
    SET_GPR_U32(ctx, 31, 0x241C70u);
    ctx->pc = 0x241C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241C68u;
            // 0x241c6c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C70u; }
        if (ctx->pc != 0x241C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C70u; }
        if (ctx->pc != 0x241C70u) { return; }
    }
    ctx->pc = 0x241C70u;
label_241c70:
    // 0x241c70: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x241c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_241c74:
    // 0x241c74: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x241c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x241c78: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x241c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x241c7c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x241c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x241c80: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x241c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x241c84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x241c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x241c88: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x241c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_241c8c:
    // 0x241c8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x241c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241c90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x241c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x241c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241c98: 0x3e00008  jr          $ra
    ctx->pc = 0x241C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241C98u;
            // 0x241c9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x241CA0u;
}
