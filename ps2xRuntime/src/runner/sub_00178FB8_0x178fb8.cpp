#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178FB8
// Address: 0x178fb8 - 0x179020
void sub_00178FB8_0x178fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178FB8_0x178fb8");
#endif

    switch (ctx->pc) {
        case 0x178fb8u: goto label_178fb8;
        case 0x178fbcu: goto label_178fbc;
        case 0x178fc0u: goto label_178fc0;
        case 0x178fc4u: goto label_178fc4;
        case 0x178fc8u: goto label_178fc8;
        case 0x178fccu: goto label_178fcc;
        case 0x178fd0u: goto label_178fd0;
        case 0x178fd4u: goto label_178fd4;
        case 0x178fd8u: goto label_178fd8;
        case 0x178fdcu: goto label_178fdc;
        case 0x178fe0u: goto label_178fe0;
        case 0x178fe4u: goto label_178fe4;
        case 0x178fe8u: goto label_178fe8;
        case 0x178fecu: goto label_178fec;
        case 0x178ff0u: goto label_178ff0;
        case 0x178ff4u: goto label_178ff4;
        case 0x178ff8u: goto label_178ff8;
        case 0x178ffcu: goto label_178ffc;
        case 0x179000u: goto label_179000;
        case 0x179004u: goto label_179004;
        case 0x179008u: goto label_179008;
        case 0x17900cu: goto label_17900c;
        case 0x179010u: goto label_179010;
        case 0x179014u: goto label_179014;
        case 0x179018u: goto label_179018;
        case 0x17901cu: goto label_17901c;
        default: break;
    }

    ctx->pc = 0x178fb8u;

label_178fb8:
    // 0x178fb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_178fbc:
    // 0x178fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_178fc0:
    // 0x178fc0: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x178fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_178fc4:
    // 0x178fc4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_178fc8:
    if (ctx->pc == 0x178FC8u) {
        ctx->pc = 0x178FC8u;
            // 0x178fc8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x178FCCu;
        goto label_178fcc;
    }
    ctx->pc = 0x178FC4u;
    {
        const bool branch_taken_0x178fc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x178FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178FC4u;
            // 0x178fc8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178fc4) {
            ctx->pc = 0x178FE0u;
            goto label_178fe0;
        }
    }
    ctx->pc = 0x178FCCu;
label_178fcc:
    // 0x178fcc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x178fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_178fd0:
    // 0x178fd0: 0xc05e0a6  jal         func_178298
label_178fd4:
    if (ctx->pc == 0x178FD4u) {
        ctx->pc = 0x178FD4u;
            // 0x178fd4: 0x24844e30  addiu       $a0, $a0, 0x4E30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20016));
        ctx->pc = 0x178FD8u;
        goto label_178fd8;
    }
    ctx->pc = 0x178FD0u;
    SET_GPR_U32(ctx, 31, 0x178FD8u);
    ctx->pc = 0x178FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178FD0u;
            // 0x178fd4: 0x24844e30  addiu       $a0, $a0, 0x4E30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178FD8u; }
        if (ctx->pc != 0x178FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178FD8u; }
        if (ctx->pc != 0x178FD8u) { return; }
    }
    ctx->pc = 0x178FD8u;
label_178fd8:
    // 0x178fd8: 0x1000000c  b           . + 4 + (0xC << 2)
label_178fdc:
    if (ctx->pc == 0x178FDCu) {
        ctx->pc = 0x178FDCu;
            // 0x178fdc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x178FE0u;
        goto label_178fe0;
    }
    ctx->pc = 0x178FD8u;
    {
        const bool branch_taken_0x178fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178FD8u;
            // 0x178fdc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178fd8) {
            ctx->pc = 0x17900Cu;
            goto label_17900c;
        }
    }
    ctx->pc = 0x178FE0u;
label_178fe0:
    // 0x178fe0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x178fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_178fe4:
    // 0x178fe4: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x178fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_178fe8:
    // 0x178fe8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_178fec:
    if (ctx->pc == 0x178FECu) {
        ctx->pc = 0x178FECu;
            // 0x178fec: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x178FF0u;
        goto label_178ff0;
    }
    ctx->pc = 0x178FE8u;
    {
        const bool branch_taken_0x178fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178fe8) {
            ctx->pc = 0x178FECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178FE8u;
            // 0x178fec: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x179000u;
            goto label_179000;
        }
    }
    ctx->pc = 0x178FF0u;
label_178ff0:
    // 0x178ff0: 0x40f809  jalr        $v0
label_178ff4:
    if (ctx->pc == 0x178FF4u) {
        ctx->pc = 0x178FF4u;
            // 0x178ff4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x178FF8u;
        goto label_178ff8;
    }
    ctx->pc = 0x178FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178FF8u);
        ctx->pc = 0x178FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178FF0u;
            // 0x178ff4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178FF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178FF8u; }
            if (ctx->pc != 0x178FF8u) { return; }
        }
        }
    }
    ctx->pc = 0x178FF8u;
label_178ff8:
    // 0x178ff8: 0x10000003  b           . + 4 + (0x3 << 2)
label_178ffc:
    if (ctx->pc == 0x178FFCu) {
        ctx->pc = 0x178FFCu;
            // 0x178ffc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179000u;
        goto label_179000;
    }
    ctx->pc = 0x178FF8u;
    {
        const bool branch_taken_0x178ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178FF8u;
            // 0x178ffc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ff8) {
            ctx->pc = 0x179008u;
            goto label_179008;
        }
    }
    ctx->pc = 0x179000u;
label_179000:
    // 0x179000: 0xc05e0a6  jal         func_178298
label_179004:
    if (ctx->pc == 0x179004u) {
        ctx->pc = 0x179004u;
            // 0x179004: 0x24844e50  addiu       $a0, $a0, 0x4E50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20048));
        ctx->pc = 0x179008u;
        goto label_179008;
    }
    ctx->pc = 0x179000u;
    SET_GPR_U32(ctx, 31, 0x179008u);
    ctx->pc = 0x179004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179000u;
            // 0x179004: 0x24844e50  addiu       $a0, $a0, 0x4E50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179008u; }
        if (ctx->pc != 0x179008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179008u; }
        if (ctx->pc != 0x179008u) { return; }
    }
    ctx->pc = 0x179008u;
label_179008:
    // 0x179008: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x179008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17900c:
    // 0x17900c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17900cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179010:
    // 0x179010: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x179010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_179014:
    // 0x179014: 0x3e00008  jr          $ra
label_179018:
    if (ctx->pc == 0x179018u) {
        ctx->pc = 0x179018u;
            // 0x179018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17901Cu;
        goto label_17901c;
    }
    ctx->pc = 0x179014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179014u;
            // 0x179018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17901Cu;
label_17901c:
    // 0x17901c: 0x0  nop
    ctx->pc = 0x17901cu;
    // NOP
}
