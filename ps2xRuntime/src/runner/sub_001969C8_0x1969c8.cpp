#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001969C8
// Address: 0x1969c8 - 0x196ae8
void sub_001969C8_0x1969c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001969C8_0x1969c8");
#endif

    switch (ctx->pc) {
        case 0x196a20u: goto label_196a20;
        case 0x196aa4u: goto label_196aa4;
        case 0x196abcu: goto label_196abc;
        default: break;
    }

    ctx->pc = 0x1969c8u;

    // 0x1969c8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1969c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1969cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1969ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1969d0: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x1969d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1969d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1969d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1969d8: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x1969d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x1969dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1969dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1969e0: 0x28840000  slti        $a0, $a0, 0x0
    ctx->pc = 0x1969e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1969e4: 0x3812  mflo        $a3
    ctx->pc = 0x1969e4u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1969e8: 0x1810  mfhi        $v1
    ctx->pc = 0x1969e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1969ec: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1969ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1969f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1969f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1969f4: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1969f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1969f8: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1969F8u;
    {
        const bool branch_taken_0x1969f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1969FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1969F8u;
            // 0x1969fc: 0x671825  or          $v1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1969f8) {
            ctx->pc = 0x196A18u;
            goto label_196a18;
        }
    }
    ctx->pc = 0x196A00u;
    // 0x196a00: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x196a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x196a04: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x196a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x196a08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x196a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x196a0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x196A0Cu;
    {
        const bool branch_taken_0x196a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196A0Cu;
            // 0x196a10: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196a0c) {
            ctx->pc = 0x196A28u;
            goto label_196a28;
        }
    }
    ctx->pc = 0x196A14u;
    // 0x196a14: 0x0  nop
    ctx->pc = 0x196a14u;
    // NOP
label_196a18:
    // 0x196a18: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x196A18u;
    SET_GPR_U32(ctx, 31, 0x196A20u);
    ctx->pc = 0x196A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196A18u;
            // 0x196a1c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A20u; }
        if (ctx->pc != 0x196A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A20u; }
        if (ctx->pc != 0x196A20u) { return; }
    }
    ctx->pc = 0x196A20u;
label_196a20:
    // 0x196a20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x196a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x196a24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x196a24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_196a28:
    // 0x196a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x196A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196A2Cu;
            // 0x196a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196A34u;
    // 0x196a34: 0x0  nop
    ctx->pc = 0x196a34u;
    // NOP
    // 0x196a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x196a3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x196a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x196a40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x196a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x196a44: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x196A44u;
    {
        const bool branch_taken_0x196a44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x196A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196A44u;
            // 0x196a48: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196a44) {
            ctx->pc = 0x196A68u;
            goto label_196a68;
        }
    }
    ctx->pc = 0x196A4Cu;
    // 0x196a4c: 0x851826  xor         $v1, $a0, $a1
    ctx->pc = 0x196a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x196a50: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x196a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x196a54: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x196a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x196a58: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x196a58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x196a5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x196a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x196a60: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x196A60u;
    {
        const bool branch_taken_0x196a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196A60u;
            // 0x196a64: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196a60) {
            ctx->pc = 0x196AD4u;
            goto label_196ad4;
        }
    }
    ctx->pc = 0x196A68u;
label_196a68:
    // 0x196a68: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x196a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a6c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196A6Cu;
    {
        const bool branch_taken_0x196a6c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x196A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196A6Cu;
            // 0x196a70: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196a6c) {
            ctx->pc = 0x196A7Cu;
            goto label_196a7c;
        }
    }
    ctx->pc = 0x196A74u;
    // 0x196a74: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x196a74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196a78: 0x4202f  dsubu       $a0, $zero, $a0
    ctx->pc = 0x196a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
label_196a7c:
    // 0x196a7c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x196A7Cu;
    {
        const bool branch_taken_0x196a7c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x196a7c) {
            ctx->pc = 0x196A8Cu;
            goto label_196a8c;
        }
    }
    ctx->pc = 0x196A84u;
    // 0x196a84: 0x118823  negu        $s1, $s1
    ctx->pc = 0x196a84u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x196a88: 0x5282f  dsubu       $a1, $zero, $a1
    ctx->pc = 0x196a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
label_196a8c:
    // 0x196a8c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196A8Cu;
    {
        const bool branch_taken_0x196a8c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x196a8c) {
            ctx->pc = 0x196A9Cu;
            goto label_196a9c;
        }
    }
    ctx->pc = 0x196A94u;
    // 0x196a94: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x196a94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x196a98: 0x118823  negu        $s1, $s1
    ctx->pc = 0x196a98u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_196a9c:
    // 0x196a9c: 0xc048ce6  jal         func_123398
    ctx->pc = 0x196A9Cu;
    SET_GPR_U32(ctx, 31, 0x196AA4u);
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196AA4u; }
        if (ctx->pc != 0x196AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196AA4u; }
        if (ctx->pc != 0x196AA4u) { return; }
    }
    ctx->pc = 0x196AA4u;
label_196aa4:
    // 0x196aa4: 0x1027fe  dsrl32      $a0, $s0, 31
    ctx->pc = 0x196aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (32 + 31));
    // 0x196aa8: 0x204202d  daddu       $a0, $s0, $a0
    ctx->pc = 0x196aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x196aac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x196aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ab0: 0x4207b  dsra        $a0, $a0, 1
    ctx->pc = 0x196ab0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 1);
    // 0x196ab4: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x196AB4u;
    SET_GPR_U32(ctx, 31, 0x196ABCu);
    ctx->pc = 0x196AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196AB4u;
            // 0x196ab8: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196ABCu; }
        if (ctx->pc != 0x196ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196ABCu; }
        if (ctx->pc != 0x196ABCu) { return; }
    }
    ctx->pc = 0x196ABCu;
label_196abc:
    // 0x196abc: 0x2a240000  slti        $a0, $s1, 0x0
    ctx->pc = 0x196abcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x196ac0: 0x2182f  dsubu       $v1, $zero, $v0
    ctx->pc = 0x196ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x196ac4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x196ac4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x196ac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196acc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x196accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x196ad0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x196ad0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_196ad4:
    // 0x196ad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196ad8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x196ad8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196adc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x196adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x196AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196AE0u;
            // 0x196ae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196AE8u;
}
