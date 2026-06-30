#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172FA8
// Address: 0x172fa8 - 0x173078
void sub_00172FA8_0x172fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172FA8_0x172fa8");
#endif

    switch (ctx->pc) {
        case 0x172ff0u: goto label_172ff0;
        case 0x173000u: goto label_173000;
        case 0x173010u: goto label_173010;
        case 0x17301cu: goto label_17301c;
        case 0x173024u: goto label_173024;
        case 0x17302cu: goto label_17302c;
        case 0x173044u: goto label_173044;
        case 0x17304cu: goto label_17304c;
        default: break;
    }

    ctx->pc = 0x172fa8u;

    // 0x172fa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x172fac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172fb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x172fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x172fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x172fb8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x172fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x172fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x172fc0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x172fc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x172fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x172fc8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x172fc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fcc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x172fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x172fd0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x172fd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fd4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x172fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x172fd8: 0x8605003e  lh          $a1, 0x3E($s0)
    ctx->pc = 0x172fd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x172fdc: 0x8606003c  lh          $a2, 0x3C($s0)
    ctx->pc = 0x172fdcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x172fe0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x172fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x172fe4: 0x52ac0  sll         $a1, $a1, 11
    ctx->pc = 0x172fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x172fe8: 0xc05c67e  jal         func_1719F8
    ctx->pc = 0x172FE8u;
    SET_GPR_U32(ctx, 31, 0x172FF0u);
    ctx->pc = 0x172FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172FE8u;
            // 0x172fec: 0x632c0  sll         $a2, $a2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1719F8u;
    if (runtime->hasFunction(0x1719F8u)) {
        auto targetFn = runtime->lookupFunction(0x1719F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172FF0u; }
        if (ctx->pc != 0x172FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001719F8_0x1719f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172FF0u; }
        if (ctx->pc != 0x172FF0u) { return; }
    }
    ctx->pc = 0x172FF0u;
label_172ff0:
    // 0x172ff0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x172ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x172ff4: 0x8c653ef8  lw          $a1, 0x3EF8($v1)
    ctx->pc = 0x172ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16120)));
    // 0x172ff8: 0xc05c3ce  jal         func_170F38
    ctx->pc = 0x172FF8u;
    SET_GPR_U32(ctx, 31, 0x173000u);
    ctx->pc = 0x172FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172FF8u;
            // 0x172ffc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170F38u;
    if (runtime->hasFunction(0x170F38u)) {
        auto targetFn = runtime->lookupFunction(0x170F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173000u; }
        if (ctx->pc != 0x173000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170F38_0x170f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173000u; }
        if (ctx->pc != 0x173000u) { return; }
    }
    ctx->pc = 0x173000u;
label_173000:
    // 0x173000: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x173000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x173004: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x173004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173008: 0xc05c3b6  jal         func_170ED8
    ctx->pc = 0x173008u;
    SET_GPR_U32(ctx, 31, 0x173010u);
    ctx->pc = 0x17300Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173008u;
            // 0x17300c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170ED8u;
    if (runtime->hasFunction(0x170ED8u)) {
        auto targetFn = runtime->lookupFunction(0x170ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173010u; }
        if (ctx->pc != 0x173010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170ED8_0x170ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173010u; }
        if (ctx->pc != 0x173010u) { return; }
    }
    ctx->pc = 0x173010u;
label_173010:
    // 0x173010: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x173010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x173014: 0xc05c2f2  jal         func_170BC8
    ctx->pc = 0x173014u;
    SET_GPR_U32(ctx, 31, 0x17301Cu);
    ctx->pc = 0x173018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173014u;
            // 0x173018: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170BC8u;
    if (runtime->hasFunction(0x170BC8u)) {
        auto targetFn = runtime->lookupFunction(0x170BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17301Cu; }
        if (ctx->pc != 0x17301Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170BC8_0x170bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17301Cu; }
        if (ctx->pc != 0x17301Cu) { return; }
    }
    ctx->pc = 0x17301Cu;
label_17301c:
    // 0x17301c: 0xc05c370  jal         func_170DC0
    ctx->pc = 0x17301Cu;
    SET_GPR_U32(ctx, 31, 0x173024u);
    ctx->pc = 0x173020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17301Cu;
            // 0x173020: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170DC0u;
    if (runtime->hasFunction(0x170DC0u)) {
        auto targetFn = runtime->lookupFunction(0x170DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173024u; }
        if (ctx->pc != 0x173024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170DC0_0x170dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173024u; }
        if (ctx->pc != 0x173024u) { return; }
    }
    ctx->pc = 0x173024u;
label_173024:
    // 0x173024: 0xc05c296  jal         func_170A58
    ctx->pc = 0x173024u;
    SET_GPR_U32(ctx, 31, 0x17302Cu);
    ctx->pc = 0x173028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173024u;
            // 0x173028: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A58u;
    if (runtime->hasFunction(0x170A58u)) {
        auto targetFn = runtime->lookupFunction(0x170A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17302Cu; }
        if (ctx->pc != 0x17302Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A58_0x170a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17302Cu; }
        if (ctx->pc != 0x17302Cu) { return; }
    }
    ctx->pc = 0x17302Cu;
label_17302c:
    // 0x17302c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x17302cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x173030: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x173030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173034: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x173034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173038: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x173038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17303c: 0xc05c22e  jal         func_1708B8
    ctx->pc = 0x17303Cu;
    SET_GPR_U32(ctx, 31, 0x173044u);
    ctx->pc = 0x173040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17303Cu;
            // 0x173040: 0x1142f8  dsll        $t0, $s1, 11 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << 11);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1708B8u;
    if (runtime->hasFunction(0x1708B8u)) {
        auto targetFn = runtime->lookupFunction(0x1708B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173044u; }
        if (ctx->pc != 0x173044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001708B8_0x1708b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173044u; }
        if (ctx->pc != 0x173044u) { return; }
    }
    ctx->pc = 0x173044u;
label_173044:
    // 0x173044: 0xc05c32e  jal         func_170CB8
    ctx->pc = 0x173044u;
    SET_GPR_U32(ctx, 31, 0x17304Cu);
    ctx->pc = 0x173048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173044u;
            // 0x173048: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170CB8u;
    if (runtime->hasFunction(0x170CB8u)) {
        auto targetFn = runtime->lookupFunction(0x170CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17304Cu; }
        if (ctx->pc != 0x17304Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170CB8_0x170cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17304Cu; }
        if (ctx->pc != 0x17304Cu) { return; }
    }
    ctx->pc = 0x17304Cu;
label_17304c:
    // 0x17304c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17304cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173050: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x173050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x173054: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173058: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17305c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17305cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173060: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x173060u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x173064: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x173064u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173068: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x173068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17306c: 0x805cba8  j           func_172EA0
    ctx->pc = 0x17306Cu;
    ctx->pc = 0x173070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17306Cu;
            // 0x173070: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172EA0u;
    if (runtime->hasFunction(0x172EA0u)) {
        auto targetFn = runtime->lookupFunction(0x172EA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00172EA0_0x172ea0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x173074u;
    // 0x173074: 0x0  nop
    ctx->pc = 0x173074u;
    // NOP
}
