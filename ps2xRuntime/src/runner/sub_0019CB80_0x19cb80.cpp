#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CB80
// Address: 0x19cb80 - 0x19cbe0
void sub_0019CB80_0x19cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CB80_0x19cb80");
#endif

    switch (ctx->pc) {
        case 0x19cb80u: goto label_19cb80;
        case 0x19cb84u: goto label_19cb84;
        case 0x19cb88u: goto label_19cb88;
        case 0x19cb8cu: goto label_19cb8c;
        case 0x19cb90u: goto label_19cb90;
        case 0x19cb94u: goto label_19cb94;
        case 0x19cb98u: goto label_19cb98;
        case 0x19cb9cu: goto label_19cb9c;
        case 0x19cba0u: goto label_19cba0;
        case 0x19cba4u: goto label_19cba4;
        case 0x19cba8u: goto label_19cba8;
        case 0x19cbacu: goto label_19cbac;
        case 0x19cbb0u: goto label_19cbb0;
        case 0x19cbb4u: goto label_19cbb4;
        case 0x19cbb8u: goto label_19cbb8;
        case 0x19cbbcu: goto label_19cbbc;
        case 0x19cbc0u: goto label_19cbc0;
        case 0x19cbc4u: goto label_19cbc4;
        case 0x19cbc8u: goto label_19cbc8;
        case 0x19cbccu: goto label_19cbcc;
        case 0x19cbd0u: goto label_19cbd0;
        case 0x19cbd4u: goto label_19cbd4;
        case 0x19cbd8u: goto label_19cbd8;
        case 0x19cbdcu: goto label_19cbdc;
        default: break;
    }

    ctx->pc = 0x19cb80u;

label_19cb80:
    // 0x19cb80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19cb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19cb84:
    // 0x19cb84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19cb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19cb88:
    // 0x19cb88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19cb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19cb8c:
    // 0x19cb8c: 0xc0672d8  jal         func_19CB60
label_19cb90:
    if (ctx->pc == 0x19CB90u) {
        ctx->pc = 0x19CB90u;
            // 0x19cb90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19CB94u;
        goto label_19cb94;
    }
    ctx->pc = 0x19CB8Cu;
    SET_GPR_U32(ctx, 31, 0x19CB94u);
    ctx->pc = 0x19CB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CB8Cu;
            // 0x19cb90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CB60u;
    if (runtime->hasFunction(0x19CB60u)) {
        auto targetFn = runtime->lookupFunction(0x19CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB94u; }
        if (ctx->pc != 0x19CB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CB60_0x19cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB94u; }
        if (ctx->pc != 0x19CB94u) { return; }
    }
    ctx->pc = 0x19CB94u;
label_19cb94:
    // 0x19cb94: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_19cb98:
    // 0x19cb98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19cb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19cb9c:
    // 0x19cb9c: 0x8c629934  lw          $v0, -0x66CC($v1)
    ctx->pc = 0x19cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940980)));
label_19cba0:
    // 0x19cba0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19cba4:
    if (ctx->pc == 0x19CBA4u) {
        ctx->pc = 0x19CBA4u;
            // 0x19cba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19CBA8u;
        goto label_19cba8;
    }
    ctx->pc = 0x19CBA0u;
    {
        const bool branch_taken_0x19cba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CBA0u;
            // 0x19cba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cba0) {
            ctx->pc = 0x19CBB0u;
            goto label_19cbb0;
        }
    }
    ctx->pc = 0x19CBA8u;
label_19cba8:
    // 0x19cba8: 0x40f809  jalr        $v0
label_19cbac:
    if (ctx->pc == 0x19CBACu) {
        ctx->pc = 0x19CBB0u;
        goto label_19cbb0;
    }
    ctx->pc = 0x19CBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19CBB0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x19CBB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19CBB0u; }
            if (ctx->pc != 0x19CBB0u) { return; }
        }
        }
    }
    ctx->pc = 0x19CBB0u;
label_19cbb0:
    // 0x19cbb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19cbb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19cbb4:
    // 0x19cbb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19cbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19cbb8:
    // 0x19cbb8: 0x3e00008  jr          $ra
label_19cbbc:
    if (ctx->pc == 0x19CBBCu) {
        ctx->pc = 0x19CBBCu;
            // 0x19cbbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x19CBC0u;
        goto label_19cbc0;
    }
    ctx->pc = 0x19CBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CBB8u;
            // 0x19cbbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CBC0u;
label_19cbc0:
    // 0x19cbc0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x19cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_19cbc4:
    // 0x19cbc4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x19cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_19cbc8:
    // 0x19cbc8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x19cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_19cbcc:
    // 0x19cbcc: 0xac409934  sw          $zero, -0x66CC($v0)
    ctx->pc = 0x19cbccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940980), GPR_U32(ctx, 0));
label_19cbd0:
    // 0x19cbd0: 0xac609938  sw          $zero, -0x66C8($v1)
    ctx->pc = 0x19cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294940984), GPR_U32(ctx, 0));
label_19cbd4:
    // 0x19cbd4: 0x3e00008  jr          $ra
label_19cbd8:
    if (ctx->pc == 0x19CBD8u) {
        ctx->pc = 0x19CBD8u;
            // 0x19cbd8: 0xac80993c  sw          $zero, -0x66C4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294940988), GPR_U32(ctx, 0));
        ctx->pc = 0x19CBDCu;
        goto label_19cbdc;
    }
    ctx->pc = 0x19CBD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CBD4u;
            // 0x19cbd8: 0xac80993c  sw          $zero, -0x66C4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294940988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CBDCu;
label_19cbdc:
    // 0x19cbdc: 0x0  nop
    ctx->pc = 0x19cbdcu;
    // NOP
}
