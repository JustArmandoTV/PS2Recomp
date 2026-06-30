#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015A350
// Address: 0x15a350 - 0x15a400
void sub_0015A350_0x15a350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A350_0x15a350");
#endif

    switch (ctx->pc) {
        case 0x15a3d0u: goto label_15a3d0;
        case 0x15a3e0u: goto label_15a3e0;
        default: break;
    }

    ctx->pc = 0x15a350u;

    // 0x15a350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15a350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15a354: 0x24026c00  addiu       $v0, $zero, 0x6C00
    ctx->pc = 0x15a354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x15a358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15a358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15a35c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a360: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x15a360u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15a364: 0x3063fe00  andi        $v1, $v1, 0xFE00
    ctx->pc = 0x15a364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65024);
    // 0x15a368: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15A368u;
    {
        const bool branch_taken_0x15a368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15A36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A368u;
            // 0x15a36c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a368) {
            ctx->pc = 0x15A39Cu;
            goto label_15a39c;
        }
    }
    ctx->pc = 0x15A370u;
    // 0x15a370: 0x24026a00  addiu       $v0, $zero, 0x6A00
    ctx->pc = 0x15a370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27136));
    // 0x15a374: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15A374u;
    {
        const bool branch_taken_0x15a374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a374) {
            ctx->pc = 0x15A378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A374u;
            // 0x15a378: 0xde020018  ld          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A3A0u;
            goto label_15a3a0;
        }
    }
    ctx->pc = 0x15A37Cu;
    // 0x15a37c: 0x24026800  addiu       $v0, $zero, 0x6800
    ctx->pc = 0x15a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26624));
    // 0x15a380: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A380u;
    {
        const bool branch_taken_0x15a380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a380) {
            ctx->pc = 0x15A39Cu;
            goto label_15a39c;
        }
    }
    ctx->pc = 0x15A388u;
    // 0x15a388: 0x24026600  addiu       $v0, $zero, 0x6600
    ctx->pc = 0x15a388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26112));
    // 0x15a38c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A38Cu;
    {
        const bool branch_taken_0x15a38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a38c) {
            ctx->pc = 0x15A39Cu;
            goto label_15a39c;
        }
    }
    ctx->pc = 0x15A394u;
    // 0x15a394: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15A394u;
    {
        const bool branch_taken_0x15a394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A394u;
            // 0x15a398: 0x96020018  lhu         $v0, 0x18($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a394) {
            ctx->pc = 0x15A3B8u;
            goto label_15a3b8;
        }
    }
    ctx->pc = 0x15A39Cu;
label_15a39c:
    // 0x15a39c: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x15a39cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_15a3a0:
    // 0x15a3a0: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x15a3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x15a3a4: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x15a3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x15a3a8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x15a3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x15a3ac: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x15a3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15a3b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15A3B0u;
    {
        const bool branch_taken_0x15a3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A3B0u;
            // 0x15a3b4: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3b0) {
            ctx->pc = 0x15A3C0u;
            goto label_15a3c0;
        }
    }
    ctx->pc = 0x15A3B8u;
label_15a3b8:
    // 0x15a3b8: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x15a3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x15a3bc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x15a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_15a3c0:
    // 0x15a3c0: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x15A3C0u;
    {
        const bool branch_taken_0x15a3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a3c0) {
            ctx->pc = 0x15A3C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A3C0u;
            // 0x15a3c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A3E4u;
            goto label_15a3e4;
        }
    }
    ctx->pc = 0x15A3C8u;
    // 0x15a3c8: 0xc056354  jal         func_158D50
    ctx->pc = 0x15A3C8u;
    SET_GPR_U32(ctx, 31, 0x15A3D0u);
    ctx->pc = 0x158D50u;
    if (runtime->hasFunction(0x158D50u)) {
        auto targetFn = runtime->lookupFunction(0x158D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A3D0u; }
        if (ctx->pc != 0x15A3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00158D50_0x158d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A3D0u; }
        if (ctx->pc != 0x15A3D0u) { return; }
    }
    ctx->pc = 0x15A3D0u;
label_15a3d0:
    // 0x15a3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a3d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a3d8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x15A3D8u;
    SET_GPR_U32(ctx, 31, 0x15A3E0u);
    ctx->pc = 0x15A3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A3D8u;
            // 0x15a3dc: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A3E0u; }
        if (ctx->pc != 0x15A3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A3E0u; }
        if (ctx->pc != 0x15A3E0u) { return; }
    }
    ctx->pc = 0x15A3E0u;
label_15a3e0:
    // 0x15a3e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a3e4:
    // 0x15a3e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15a3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a3e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x15A3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A3ECu;
            // 0x15a3f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A3F4u;
    // 0x15a3f4: 0x0  nop
    ctx->pc = 0x15a3f4u;
    // NOP
    // 0x15a3f8: 0x0  nop
    ctx->pc = 0x15a3f8u;
    // NOP
    // 0x15a3fc: 0x0  nop
    ctx->pc = 0x15a3fcu;
    // NOP
}
