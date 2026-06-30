#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169158
// Address: 0x169158 - 0x1691d8
void sub_00169158_0x169158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169158_0x169158");
#endif

    switch (ctx->pc) {
        case 0x169190u: goto label_169190;
        case 0x1691a0u: goto label_1691a0;
        default: break;
    }

    ctx->pc = 0x169158u;

    // 0x169158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16915c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16915cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x169160: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169164: 0x24517be0  addiu       $s1, $v0, 0x7BE0
    ctx->pc = 0x169164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 31712));
    // 0x169168: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16916c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169170: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x169170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x169174: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x169174u;
    {
        const bool branch_taken_0x169174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169174u;
            // 0x169178: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169174) {
            ctx->pc = 0x1691C0u;
            goto label_1691c0;
        }
    }
    ctx->pc = 0x16917Cu;
    // 0x16917c: 0x8c437be4  lw          $v1, 0x7BE4($v0)
    ctx->pc = 0x16917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31716)));
    // 0x169180: 0x4620010  bltzl       $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x169180u;
    {
        const bool branch_taken_0x169180 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x169180) {
            ctx->pc = 0x169184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169180u;
            // 0x169184: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1691C4u;
            goto label_1691c4;
        }
    }
    ctx->pc = 0x169188u;
    // 0x169188: 0xc05abec  jal         func_16AFB0
    ctx->pc = 0x169188u;
    SET_GPR_U32(ctx, 31, 0x169190u);
    ctx->pc = 0x16918Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169188u;
            // 0x16918c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AFB0u;
    if (runtime->hasFunction(0x16AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x16AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169190u; }
        if (ctx->pc != 0x169190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AFB0_0x16afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169190u; }
        if (ctx->pc != 0x169190u) { return; }
    }
    ctx->pc = 0x169190u;
label_169190:
    // 0x169190: 0x50500004  beql        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169190u;
    {
        const bool branch_taken_0x169190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x169190) {
            ctx->pc = 0x169194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169190u;
            // 0x169194: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1691A4u;
            goto label_1691a4;
        }
    }
    ctx->pc = 0x169198u;
    // 0x169198: 0xc05a9c6  jal         func_16A718
    ctx->pc = 0x169198u;
    SET_GPR_U32(ctx, 31, 0x1691A0u);
    ctx->pc = 0x16919Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169198u;
            // 0x16919c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A718u;
    if (runtime->hasFunction(0x16A718u)) {
        auto targetFn = runtime->lookupFunction(0x16A718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1691A0u; }
        if (ctx->pc != 0x1691A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A718_0x16a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1691A0u; }
        if (ctx->pc != 0x1691A0u) { return; }
    }
    ctx->pc = 0x1691A0u;
label_1691a0:
    // 0x1691a0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1691a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1691a4:
    // 0x1691a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1691a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1691a8: 0xac507be8  sw          $s0, 0x7BE8($v0)
    ctx->pc = 0x1691a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31720), GPR_U32(ctx, 16));
    // 0x1691ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1691acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1691b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1691b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1691b4: 0x805a43c  j           func_1690F0
    ctx->pc = 0x1691B4u;
    ctx->pc = 0x1691B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1691B4u;
            // 0x1691b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1690F0u;
    if (runtime->hasFunction(0x1690F0u)) {
        auto targetFn = runtime->lookupFunction(0x1690F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001690F0_0x1690f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1691BCu;
    // 0x1691bc: 0x0  nop
    ctx->pc = 0x1691bcu;
    // NOP
label_1691c0:
    // 0x1691c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1691c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1691c4:
    // 0x1691c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1691c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1691c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1691c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1691cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1691CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1691D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1691CCu;
            // 0x1691d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1691D4u;
    // 0x1691d4: 0x0  nop
    ctx->pc = 0x1691d4u;
    // NOP
}
