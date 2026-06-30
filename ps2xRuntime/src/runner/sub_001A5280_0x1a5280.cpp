#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5280
// Address: 0x1a5280 - 0x1a52e8
void sub_001A5280_0x1a5280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5280_0x1a5280");
#endif

    switch (ctx->pc) {
        case 0x1a5280u: goto label_1a5280;
        case 0x1a5284u: goto label_1a5284;
        case 0x1a5288u: goto label_1a5288;
        case 0x1a528cu: goto label_1a528c;
        case 0x1a5290u: goto label_1a5290;
        case 0x1a5294u: goto label_1a5294;
        case 0x1a5298u: goto label_1a5298;
        case 0x1a529cu: goto label_1a529c;
        case 0x1a52a0u: goto label_1a52a0;
        case 0x1a52a4u: goto label_1a52a4;
        case 0x1a52a8u: goto label_1a52a8;
        case 0x1a52acu: goto label_1a52ac;
        case 0x1a52b0u: goto label_1a52b0;
        case 0x1a52b4u: goto label_1a52b4;
        case 0x1a52b8u: goto label_1a52b8;
        case 0x1a52bcu: goto label_1a52bc;
        case 0x1a52c0u: goto label_1a52c0;
        case 0x1a52c4u: goto label_1a52c4;
        case 0x1a52c8u: goto label_1a52c8;
        case 0x1a52ccu: goto label_1a52cc;
        case 0x1a52d0u: goto label_1a52d0;
        case 0x1a52d4u: goto label_1a52d4;
        case 0x1a52d8u: goto label_1a52d8;
        case 0x1a52dcu: goto label_1a52dc;
        case 0x1a52e0u: goto label_1a52e0;
        case 0x1a52e4u: goto label_1a52e4;
        default: break;
    }

    ctx->pc = 0x1a5280u;

label_1a5280:
    // 0x1a5280: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a5280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a5284:
    // 0x1a5284: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a5288:
    // 0x1a5288: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1a5288u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a528c:
    // 0x1a528c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a528cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5290:
    // 0x1a5290: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a5294:
    // 0x1a5294: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a5294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a5298:
    // 0x1a5298: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a5298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a529c:
    // 0x1a529c: 0x24841380  addiu       $a0, $a0, 0x1380
    ctx->pc = 0x1a529cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
label_1a52a0:
    // 0x1a52a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a52a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a52a4:
    // 0x1a52a4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1a52a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a52a8:
    // 0x1a52a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a52a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a52ac:
    // 0x1a52ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a52acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a52b0:
    // 0x1a52b0: 0x14660009  bne         $v1, $a2, . + 4 + (0x9 << 2)
label_1a52b4:
    if (ctx->pc == 0x1A52B4u) {
        ctx->pc = 0x1A52B4u;
            // 0x1a52b4: 0x24900010  addiu       $s0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x1A52B8u;
        goto label_1a52b8;
    }
    ctx->pc = 0x1A52B0u;
    {
        const bool branch_taken_0x1a52b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1A52B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A52B0u;
            // 0x1a52b4: 0x24900010  addiu       $s0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52b0) {
            ctx->pc = 0x1A52D8u;
            goto label_1a52d8;
        }
    }
    ctx->pc = 0x1A52B8u;
label_1a52b8:
    // 0x1a52b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a52b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a52bc:
    // 0x1a52bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a52c0:
    if (ctx->pc == 0x1A52C0u) {
        ctx->pc = 0x1A52C0u;
            // 0x1a52c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A52C4u;
        goto label_1a52c4;
    }
    ctx->pc = 0x1A52BCu;
    {
        const bool branch_taken_0x1a52bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A52C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A52BCu;
            // 0x1a52c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52bc) {
            ctx->pc = 0x1A52D8u;
            goto label_1a52d8;
        }
    }
    ctx->pc = 0x1A52C4u;
label_1a52c4:
    // 0x1a52c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a52c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a52c8:
    // 0x1a52c8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a52c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a52cc:
    // 0x1a52cc: 0x60f809  jalr        $v1
label_1a52d0:
    if (ctx->pc == 0x1A52D0u) {
        ctx->pc = 0x1A52D4u;
        goto label_1a52d4;
    }
    ctx->pc = 0x1A52CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A52D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A52D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A52D4u; }
            if (ctx->pc != 0x1A52D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A52D4u;
label_1a52d4:
    // 0x1a52d4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a52d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a52d8:
    // 0x1a52d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a52d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a52dc:
    // 0x1a52dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a52dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a52e0:
    // 0x1a52e0: 0x3e00008  jr          $ra
label_1a52e4:
    if (ctx->pc == 0x1A52E4u) {
        ctx->pc = 0x1A52E4u;
            // 0x1a52e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A52E8u;
        goto label_fallthrough_0x1a52e0;
    }
    ctx->pc = 0x1A52E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A52E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A52E0u;
            // 0x1a52e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a52e0:
    ctx->pc = 0x1A52E8u;
}
