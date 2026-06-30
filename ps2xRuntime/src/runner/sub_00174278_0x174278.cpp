#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174278
// Address: 0x174278 - 0x174338
void sub_00174278_0x174278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174278_0x174278");
#endif

    switch (ctx->pc) {
        case 0x1742a4u: goto label_1742a4;
        case 0x1742dcu: goto label_1742dc;
        case 0x1742e8u: goto label_1742e8;
        case 0x174314u: goto label_174314;
        case 0x17431cu: goto label_17431c;
        case 0x174324u: goto label_174324;
        default: break;
    }

    ctx->pc = 0x174278u;

    // 0x174278: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17427c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x17427cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x174280: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x174280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x174284: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x174284u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x174288: 0x2610d178  addiu       $s0, $s0, -0x2E88
    ctx->pc = 0x174288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955384));
    // 0x17428c: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x17428cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x174290: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x174290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174294: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x174294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x174298: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x174298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17429c: 0xc059c1a  jal         func_167068
    ctx->pc = 0x17429Cu;
    SET_GPR_U32(ctx, 31, 0x1742A4u);
    ctx->pc = 0x1742A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17429Cu;
            // 0x1742a0: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167068u;
    if (runtime->hasFunction(0x167068u)) {
        auto targetFn = runtime->lookupFunction(0x167068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1742A4u; }
        if (ctx->pc != 0x1742A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167068_0x167068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1742A4u; }
        if (ctx->pc != 0x1742A4u) { return; }
    }
    ctx->pc = 0x1742A4u;
label_1742a4:
    // 0x1742a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1742a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742a8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1742a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1742ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1742acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1742b0: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x1742b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x1742b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1742b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1742b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1742B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1742BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1742B8u;
            // 0x1742bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1742C0u;
    // 0x1742c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1742c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1742c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1742c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1742c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1742c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1742ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1742d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1742d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1742d4: 0xc0599de  jal         func_166778
    ctx->pc = 0x1742D4u;
    SET_GPR_U32(ctx, 31, 0x1742DCu);
    ctx->pc = 0x1742D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1742D4u;
            // 0x1742d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1742DCu; }
        if (ctx->pc != 0x1742DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1742DCu; }
        if (ctx->pc != 0x1742DCu) { return; }
    }
    ctx->pc = 0x1742DCu;
label_1742dc:
    // 0x1742dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1742dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742e0: 0xc05d0ce  jal         func_174338
    ctx->pc = 0x1742E0u;
    SET_GPR_U32(ctx, 31, 0x1742E8u);
    ctx->pc = 0x1742E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1742E0u;
            // 0x1742e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174338u;
    if (runtime->hasFunction(0x174338u)) {
        auto targetFn = runtime->lookupFunction(0x174338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1742E8u; }
        if (ctx->pc != 0x1742E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174338_0x174338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1742E8u; }
        if (ctx->pc != 0x1742E8u) { return; }
    }
    ctx->pc = 0x1742E8u;
label_1742e8:
    // 0x1742e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1742e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1742ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1742ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1742f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1742f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1742f4: 0x80599e0  j           func_166780
    ctx->pc = 0x1742F4u;
    ctx->pc = 0x1742F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1742F4u;
            // 0x1742f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1742FCu;
    // 0x1742fc: 0x0  nop
    ctx->pc = 0x1742fcu;
    // NOP
    // 0x174300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174308: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x174308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17430c: 0xc0599de  jal         func_166778
    ctx->pc = 0x17430Cu;
    SET_GPR_U32(ctx, 31, 0x174314u);
    ctx->pc = 0x174310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17430Cu;
            // 0x174310: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174314u; }
        if (ctx->pc != 0x174314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174314u; }
        if (ctx->pc != 0x174314u) { return; }
    }
    ctx->pc = 0x174314u;
label_174314:
    // 0x174314: 0xc05d0d0  jal         func_174340
    ctx->pc = 0x174314u;
    SET_GPR_U32(ctx, 31, 0x17431Cu);
    ctx->pc = 0x174318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174314u;
            // 0x174318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174340u;
    if (runtime->hasFunction(0x174340u)) {
        auto targetFn = runtime->lookupFunction(0x174340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17431Cu; }
        if (ctx->pc != 0x17431Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174340_0x174340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17431Cu; }
        if (ctx->pc != 0x17431Cu) { return; }
    }
    ctx->pc = 0x17431Cu;
label_17431c:
    // 0x17431c: 0xc0599e0  jal         func_166780
    ctx->pc = 0x17431Cu;
    SET_GPR_U32(ctx, 31, 0x174324u);
    ctx->pc = 0x174320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17431Cu;
            // 0x174320: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174324u; }
        if (ctx->pc != 0x174324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174324u; }
        if (ctx->pc != 0x174324u) { return; }
    }
    ctx->pc = 0x174324u;
label_174324:
    // 0x174324: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x174324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174328: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17432c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17432cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174330: 0x3e00008  jr          $ra
    ctx->pc = 0x174330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174330u;
            // 0x174334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174338u;
}
