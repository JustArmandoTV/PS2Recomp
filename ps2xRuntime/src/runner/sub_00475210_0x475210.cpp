#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00475210
// Address: 0x475210 - 0x4752d0
void sub_00475210_0x475210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00475210_0x475210");
#endif

    switch (ctx->pc) {
        case 0x47523cu: goto label_47523c;
        case 0x47525cu: goto label_47525c;
        case 0x475270u: goto label_475270;
        case 0x47528cu: goto label_47528c;
        case 0x4752b8u: goto label_4752b8;
        default: break;
    }

    ctx->pc = 0x475210u;

    // 0x475210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x475210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x475214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x475214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x475218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x475218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47521c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x475220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x475220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475224: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x475224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475228: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x475228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x47522c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x47522cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x475230: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x475230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x475234: 0xc040138  jal         func_1004E0
    ctx->pc = 0x475234u;
    SET_GPR_U32(ctx, 31, 0x47523Cu);
    ctx->pc = 0x475238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475234u;
            // 0x475238: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47523Cu; }
        if (ctx->pc != 0x47523Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47523Cu; }
        if (ctx->pc != 0x47523Cu) { return; }
    }
    ctx->pc = 0x47523Cu;
label_47523c:
    // 0x47523c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x47523cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x475240: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x475240u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x475244: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x475244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475248: 0x24a55080  addiu       $a1, $a1, 0x5080
    ctx->pc = 0x475248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20608));
    // 0x47524c: 0x24c65000  addiu       $a2, $a2, 0x5000
    ctx->pc = 0x47524cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20480));
    // 0x475250: 0x240701f0  addiu       $a3, $zero, 0x1F0
    ctx->pc = 0x475250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    // 0x475254: 0xc040840  jal         func_102100
    ctx->pc = 0x475254u;
    SET_GPR_U32(ctx, 31, 0x47525Cu);
    ctx->pc = 0x475258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475254u;
            // 0x475258: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47525Cu; }
        if (ctx->pc != 0x47525Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47525Cu; }
        if (ctx->pc != 0x47525Cu) { return; }
    }
    ctx->pc = 0x47525Cu;
label_47525c:
    // 0x47525c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x47525cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x475260: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x475260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x475264: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x475264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x475268: 0xc040138  jal         func_1004E0
    ctx->pc = 0x475268u;
    SET_GPR_U32(ctx, 31, 0x475270u);
    ctx->pc = 0x47526Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475268u;
            // 0x47526c: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475270u; }
        if (ctx->pc != 0x475270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475270u; }
        if (ctx->pc != 0x475270u) { return; }
    }
    ctx->pc = 0x475270u;
label_475270:
    // 0x475270: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x475270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x475274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x475274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475278: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x475278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x47527c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47527cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475280: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x475280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x475284: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x475284u;
    SET_GPR_U32(ctx, 31, 0x47528Cu);
    ctx->pc = 0x475288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475284u;
            // 0x475288: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47528Cu; }
        if (ctx->pc != 0x47528Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47528Cu; }
        if (ctx->pc != 0x47528Cu) { return; }
    }
    ctx->pc = 0x47528Cu;
label_47528c:
    // 0x47528c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x47528cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x475290: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x475290u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x475294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x475294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475298: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x475298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x47529c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x47529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4752a0: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x4752a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x4752a4: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x4752a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x4752a8: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x4752a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x4752ac: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4752acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x4752b0: 0xc11d4cc  jal         func_475330
    ctx->pc = 0x4752B0u;
    SET_GPR_U32(ctx, 31, 0x4752B8u);
    ctx->pc = 0x4752B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4752B0u;
            // 0x4752b4: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x475330u;
    if (runtime->hasFunction(0x475330u)) {
        auto targetFn = runtime->lookupFunction(0x475330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4752B8u; }
        if (ctx->pc != 0x4752B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00475330_0x475330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4752B8u; }
        if (ctx->pc != 0x4752B8u) { return; }
    }
    ctx->pc = 0x4752B8u;
label_4752b8:
    // 0x4752b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4752b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4752bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4752bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4752c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4752c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4752c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4752C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4752C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4752C4u;
            // 0x4752c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4752CCu;
    // 0x4752cc: 0x0  nop
    ctx->pc = 0x4752ccu;
    // NOP
}
