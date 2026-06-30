#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047CD60
// Address: 0x47cd60 - 0x47cdc0
void sub_0047CD60_0x47cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047CD60_0x47cd60");
#endif

    switch (ctx->pc) {
        case 0x47cd60u: goto label_47cd60;
        case 0x47cd64u: goto label_47cd64;
        case 0x47cd68u: goto label_47cd68;
        case 0x47cd6cu: goto label_47cd6c;
        case 0x47cd70u: goto label_47cd70;
        case 0x47cd74u: goto label_47cd74;
        case 0x47cd78u: goto label_47cd78;
        case 0x47cd7cu: goto label_47cd7c;
        case 0x47cd80u: goto label_47cd80;
        case 0x47cd84u: goto label_47cd84;
        case 0x47cd88u: goto label_47cd88;
        case 0x47cd8cu: goto label_47cd8c;
        case 0x47cd90u: goto label_47cd90;
        case 0x47cd94u: goto label_47cd94;
        case 0x47cd98u: goto label_47cd98;
        case 0x47cd9cu: goto label_47cd9c;
        case 0x47cda0u: goto label_47cda0;
        case 0x47cda4u: goto label_47cda4;
        case 0x47cda8u: goto label_47cda8;
        case 0x47cdacu: goto label_47cdac;
        case 0x47cdb0u: goto label_47cdb0;
        case 0x47cdb4u: goto label_47cdb4;
        case 0x47cdb8u: goto label_47cdb8;
        case 0x47cdbcu: goto label_47cdbc;
        default: break;
    }

    ctx->pc = 0x47cd60u;

label_47cd60:
    // 0x47cd60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47cd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_47cd64:
    // 0x47cd64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47cd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_47cd68:
    // 0x47cd68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47cd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47cd6c:
    // 0x47cd6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47cd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47cd70:
    // 0x47cd70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47cd70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47cd74:
    // 0x47cd74: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x47cd74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_47cd78:
    // 0x47cd78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x47cd78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47cd7c:
    // 0x47cd7c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x47cd7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_47cd80:
    // 0x47cd80: 0x320f809  jalr        $t9
label_47cd84:
    if (ctx->pc == 0x47CD84u) {
        ctx->pc = 0x47CD84u;
            // 0x47cd84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47CD88u;
        goto label_47cd88;
    }
    ctx->pc = 0x47CD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47CD88u);
        ctx->pc = 0x47CD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47CD80u;
            // 0x47cd84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47CD88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47CD88u; }
            if (ctx->pc != 0x47CD88u) { return; }
        }
        }
    }
    ctx->pc = 0x47CD88u;
label_47cd88:
    // 0x47cd88: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x47cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_47cd8c:
    // 0x47cd8c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x47cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_47cd90:
    // 0x47cd90: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x47cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_47cd94:
    // 0x47cd94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x47cd94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_47cd98:
    // 0x47cd98: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x47cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_47cd9c:
    // 0x47cd9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x47cd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_47cda0:
    // 0x47cda0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x47cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_47cda4:
    // 0x47cda4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47cda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_47cda8:
    // 0x47cda8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47cda8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47cdac:
    // 0x47cdac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47cdacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47cdb0:
    // 0x47cdb0: 0x3e00008  jr          $ra
label_47cdb4:
    if (ctx->pc == 0x47CDB4u) {
        ctx->pc = 0x47CDB4u;
            // 0x47cdb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x47CDB8u;
        goto label_47cdb8;
    }
    ctx->pc = 0x47CDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47CDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47CDB0u;
            // 0x47cdb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47CDB8u;
label_47cdb8:
    // 0x47cdb8: 0x0  nop
    ctx->pc = 0x47cdb8u;
    // NOP
label_47cdbc:
    // 0x47cdbc: 0x0  nop
    ctx->pc = 0x47cdbcu;
    // NOP
}
