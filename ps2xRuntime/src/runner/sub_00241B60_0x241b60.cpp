#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00241B60
// Address: 0x241b60 - 0x241c00
void sub_00241B60_0x241b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241B60_0x241b60");
#endif

    switch (ctx->pc) {
        case 0x241bccu: goto label_241bcc;
        default: break;
    }

    ctx->pc = 0x241b60u;

    // 0x241b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x241b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x241b64: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x241b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x241b68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x241b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x241b6c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x241b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x241b70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x241b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x241b74: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x241b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x241b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x241b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x241b7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x241b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241b80: 0x90a70028  lbu         $a3, 0x28($a1)
    ctx->pc = 0x241b80u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x241b84: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x241b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x241b88: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x241b88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x241b8c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x241b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x241b90: 0xa0a40028  sb          $a0, 0x28($a1)
    ctx->pc = 0x241b90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x241b94: 0x94a40022  lhu         $a0, 0x22($a1)
    ctx->pc = 0x241b94u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x241b98: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x241B98u;
    {
        const bool branch_taken_0x241b98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x241B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241B98u;
            // 0x241b9c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b98) {
            ctx->pc = 0x241BE8u;
            goto label_241be8;
        }
    }
    ctx->pc = 0x241BA0u;
    // 0x241ba0: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x241ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x241ba4: 0xa6030022  sh          $v1, 0x22($s0)
    ctx->pc = 0x241ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x241ba8: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x241ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x241bac: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x241bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x241bb0: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x241bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x241bb4: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x241bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x241bb8: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x241BB8u;
    {
        const bool branch_taken_0x241bb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x241bb8) {
            ctx->pc = 0x241BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241BB8u;
            // 0x241bbc: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241BD0u;
            goto label_241bd0;
        }
    }
    ctx->pc = 0x241BC0u;
    // 0x241bc0: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x241bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x241bc4: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x241BC4u;
    SET_GPR_U32(ctx, 31, 0x241BCCu);
    ctx->pc = 0x241BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241BC4u;
            // 0x241bc8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241BCCu; }
        if (ctx->pc != 0x241BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241BCCu; }
        if (ctx->pc != 0x241BCCu) { return; }
    }
    ctx->pc = 0x241BCCu;
label_241bcc:
    // 0x241bcc: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x241bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_241bd0:
    // 0x241bd0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x241bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x241bd4: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x241bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x241bd8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x241bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x241bdc: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x241bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x241be0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x241be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x241be4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x241be4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_241be8:
    // 0x241be8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x241be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241bec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x241becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241bf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x241bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x241BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241BF4u;
            // 0x241bf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x241BFCu;
    // 0x241bfc: 0x0  nop
    ctx->pc = 0x241bfcu;
    // NOP
}
