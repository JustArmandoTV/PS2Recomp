#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00209940
// Address: 0x209940 - 0x2099f0
void sub_00209940_0x209940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209940_0x209940");
#endif

    switch (ctx->pc) {
        case 0x209974u: goto label_209974;
        case 0x209988u: goto label_209988;
        case 0x209998u: goto label_209998;
        case 0x2099acu: goto label_2099ac;
        case 0x2099c0u: goto label_2099c0;
        case 0x2099d0u: goto label_2099d0;
        default: break;
    }

    ctx->pc = 0x209940u;

    // 0x209940: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x209940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x209944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x209944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x209948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x209948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20994c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x209950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x209950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x209954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x209958: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x209958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20995c: 0x80a20020  lb          $v0, 0x20($a1)
    ctx->pc = 0x20995cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x209960: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x209960u;
    {
        const bool branch_taken_0x209960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209960u;
            // 0x209964: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209960) {
            ctx->pc = 0x2099A0u;
            goto label_2099a0;
        }
    }
    ctx->pc = 0x209968u;
    // 0x209968: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x209968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20996c: 0xc09c8b4  jal         func_2722D0
    ctx->pc = 0x20996Cu;
    SET_GPR_U32(ctx, 31, 0x209974u);
    ctx->pc = 0x209970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20996Cu;
            // 0x209970: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2722D0u;
    if (runtime->hasFunction(0x2722D0u)) {
        auto targetFn = runtime->lookupFunction(0x2722D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209974u; }
        if (ctx->pc != 0x209974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002722D0_0x2722d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209974u; }
        if (ctx->pc != 0x209974u) { return; }
    }
    ctx->pc = 0x209974u;
label_209974:
    // 0x209974: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x209974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209978: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x209978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20997c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x20997cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209980: 0xc08267c  jal         func_2099F0
    ctx->pc = 0x209980u;
    SET_GPR_U32(ctx, 31, 0x209988u);
    ctx->pc = 0x209984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209980u;
            // 0x209984: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099F0u;
    if (runtime->hasFunction(0x2099F0u)) {
        auto targetFn = runtime->lookupFunction(0x2099F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209988u; }
        if (ctx->pc != 0x209988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099F0_0x2099f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209988u; }
        if (ctx->pc != 0x209988u) { return; }
    }
    ctx->pc = 0x209988u;
label_209988:
    // 0x209988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20998c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20998cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x209990: 0xc09c8f8  jal         func_2723E0
    ctx->pc = 0x209990u;
    SET_GPR_U32(ctx, 31, 0x209998u);
    ctx->pc = 0x209994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209990u;
            // 0x209994: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2723E0u;
    if (runtime->hasFunction(0x2723E0u)) {
        auto targetFn = runtime->lookupFunction(0x2723E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209998u; }
        if (ctx->pc != 0x209998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002723E0_0x2723e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209998u; }
        if (ctx->pc != 0x209998u) { return; }
    }
    ctx->pc = 0x209998u;
label_209998:
    // 0x209998: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x209998u;
    {
        const bool branch_taken_0x209998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20999Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209998u;
            // 0x20999c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209998) {
            ctx->pc = 0x2099D4u;
            goto label_2099d4;
        }
    }
    ctx->pc = 0x2099A0u;
label_2099a0:
    // 0x2099a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2099a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2099a4: 0xc09cabc  jal         func_272AF0
    ctx->pc = 0x2099A4u;
    SET_GPR_U32(ctx, 31, 0x2099ACu);
    ctx->pc = 0x2099A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2099A4u;
            // 0x2099a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x272AF0u;
    if (runtime->hasFunction(0x272AF0u)) {
        auto targetFn = runtime->lookupFunction(0x272AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099ACu; }
        if (ctx->pc != 0x2099ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00272AF0_0x272af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099ACu; }
        if (ctx->pc != 0x2099ACu) { return; }
    }
    ctx->pc = 0x2099ACu;
label_2099ac:
    // 0x2099ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2099acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2099b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099b4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2099b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099b8: 0xc08267c  jal         func_2099F0
    ctx->pc = 0x2099B8u;
    SET_GPR_U32(ctx, 31, 0x2099C0u);
    ctx->pc = 0x2099BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2099B8u;
            // 0x2099bc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099F0u;
    if (runtime->hasFunction(0x2099F0u)) {
        auto targetFn = runtime->lookupFunction(0x2099F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099C0u; }
        if (ctx->pc != 0x2099C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099F0_0x2099f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099C0u; }
        if (ctx->pc != 0x2099C0u) { return; }
    }
    ctx->pc = 0x2099C0u;
label_2099c0:
    // 0x2099c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2099c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099c4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2099c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2099c8: 0xc09cadc  jal         func_272B70
    ctx->pc = 0x2099C8u;
    SET_GPR_U32(ctx, 31, 0x2099D0u);
    ctx->pc = 0x2099CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2099C8u;
            // 0x2099cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x272B70u;
    if (runtime->hasFunction(0x272B70u)) {
        auto targetFn = runtime->lookupFunction(0x272B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099D0u; }
        if (ctx->pc != 0x2099D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00272B70_0x272b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099D0u; }
        if (ctx->pc != 0x2099D0u) { return; }
    }
    ctx->pc = 0x2099D0u;
label_2099d0:
    // 0x2099d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2099d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2099d4:
    // 0x2099d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2099d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2099d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2099d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2099dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2099dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2099e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2099e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2099e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2099E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2099E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2099E4u;
            // 0x2099e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2099ECu;
    // 0x2099ec: 0x0  nop
    ctx->pc = 0x2099ecu;
    // NOP
}
