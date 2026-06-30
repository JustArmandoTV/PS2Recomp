#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DC3A0
// Address: 0x2dc3a0 - 0x2dc430
void sub_002DC3A0_0x2dc3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC3A0_0x2dc3a0");
#endif

    switch (ctx->pc) {
        case 0x2dc3d8u: goto label_2dc3d8;
        case 0x2dc3e0u: goto label_2dc3e0;
        case 0x2dc3e8u: goto label_2dc3e8;
        case 0x2dc3f0u: goto label_2dc3f0;
        case 0x2dc3f8u: goto label_2dc3f8;
        case 0x2dc400u: goto label_2dc400;
        case 0x2dc40cu: goto label_2dc40c;
        default: break;
    }

    ctx->pc = 0x2dc3a0u;

    // 0x2dc3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc3a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dc3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2dc3a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dc3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dc3ac: 0x3c05002e  lui         $a1, 0x2E
    ctx->pc = 0x2dc3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46 << 16));
    // 0x2dc3b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dc3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dc3b4: 0x24422e50  addiu       $v0, $v0, 0x2E50
    ctx->pc = 0x2dc3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11856));
    // 0x2dc3b8: 0x3c06002e  lui         $a2, 0x2E
    ctx->pc = 0x2dc3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
    // 0x2dc3bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dc3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc3c0: 0x24a5c470  addiu       $a1, $a1, -0x3B90
    ctx->pc = 0x2dc3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952048));
    // 0x2dc3c4: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x2dc3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x2dc3c8: 0x24c6bc20  addiu       $a2, $a2, -0x43E0
    ctx->pc = 0x2dc3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949920));
    // 0x2dc3cc: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2dc3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2dc3d0: 0xc040804  jal         func_102010
    ctx->pc = 0x2DC3D0u;
    SET_GPR_U32(ctx, 31, 0x2DC3D8u);
    ctx->pc = 0x2DC3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC3D0u;
            // 0x2dc3d4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3D8u; }
        if (ctx->pc != 0x2DC3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3D8u; }
        if (ctx->pc != 0x2DC3D8u) { return; }
    }
    ctx->pc = 0x2DC3D8u;
label_2dc3d8:
    // 0x2dc3d8: 0xc0b711c  jal         func_2DC470
    ctx->pc = 0x2DC3D8u;
    SET_GPR_U32(ctx, 31, 0x2DC3E0u);
    ctx->pc = 0x2DC3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC3D8u;
            // 0x2dc3dc: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC470u;
    if (runtime->hasFunction(0x2DC470u)) {
        auto targetFn = runtime->lookupFunction(0x2DC470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3E0u; }
        if (ctx->pc != 0x2DC3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC470_0x2dc470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3E0u; }
        if (ctx->pc != 0x2DC3E0u) { return; }
    }
    ctx->pc = 0x2DC3E0u;
label_2dc3e0:
    // 0x2dc3e0: 0xc0b7114  jal         func_2DC450
    ctx->pc = 0x2DC3E0u;
    SET_GPR_U32(ctx, 31, 0x2DC3E8u);
    ctx->pc = 0x2DC3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC3E0u;
            // 0x2dc3e4: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC450u;
    if (runtime->hasFunction(0x2DC450u)) {
        auto targetFn = runtime->lookupFunction(0x2DC450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3E8u; }
        if (ctx->pc != 0x2DC3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC450_0x2dc450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3E8u; }
        if (ctx->pc != 0x2DC3E8u) { return; }
    }
    ctx->pc = 0x2DC3E8u;
label_2dc3e8:
    // 0x2dc3e8: 0xc0b711c  jal         func_2DC470
    ctx->pc = 0x2DC3E8u;
    SET_GPR_U32(ctx, 31, 0x2DC3F0u);
    ctx->pc = 0x2DC3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC3E8u;
            // 0x2dc3ec: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC470u;
    if (runtime->hasFunction(0x2DC470u)) {
        auto targetFn = runtime->lookupFunction(0x2DC470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3F0u; }
        if (ctx->pc != 0x2DC3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC470_0x2dc470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3F0u; }
        if (ctx->pc != 0x2DC3F0u) { return; }
    }
    ctx->pc = 0x2DC3F0u;
label_2dc3f0:
    // 0x2dc3f0: 0xc0b7114  jal         func_2DC450
    ctx->pc = 0x2DC3F0u;
    SET_GPR_U32(ctx, 31, 0x2DC3F8u);
    ctx->pc = 0x2DC3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC3F0u;
            // 0x2dc3f4: 0x2604003c  addiu       $a0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC450u;
    if (runtime->hasFunction(0x2DC450u)) {
        auto targetFn = runtime->lookupFunction(0x2DC450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3F8u; }
        if (ctx->pc != 0x2DC3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC450_0x2dc450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3F8u; }
        if (ctx->pc != 0x2DC3F8u) { return; }
    }
    ctx->pc = 0x2DC3F8u;
label_2dc3f8:
    // 0x2dc3f8: 0xc0b711c  jal         func_2DC470
    ctx->pc = 0x2DC3F8u;
    SET_GPR_U32(ctx, 31, 0x2DC400u);
    ctx->pc = 0x2DC3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC3F8u;
            // 0x2dc3fc: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC470u;
    if (runtime->hasFunction(0x2DC470u)) {
        auto targetFn = runtime->lookupFunction(0x2DC470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC400u; }
        if (ctx->pc != 0x2DC400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC470_0x2dc470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC400u; }
        if (ctx->pc != 0x2DC400u) { return; }
    }
    ctx->pc = 0x2DC400u;
label_2dc400:
    // 0x2dc400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc404: 0xc0b710c  jal         func_2DC430
    ctx->pc = 0x2DC404u;
    SET_GPR_U32(ctx, 31, 0x2DC40Cu);
    ctx->pc = 0x2DC408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC404u;
            // 0x2dc408: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC430u;
    if (runtime->hasFunction(0x2DC430u)) {
        auto targetFn = runtime->lookupFunction(0x2DC430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC40Cu; }
        if (ctx->pc != 0x2DC40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC430_0x2dc430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC40Cu; }
        if (ctx->pc != 0x2DC40Cu) { return; }
    }
    ctx->pc = 0x2DC40Cu;
label_2dc40c:
    // 0x2dc40c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2dc40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2dc410: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dc410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc414: 0x2463a078  addiu       $v1, $v1, -0x5F88
    ctx->pc = 0x2dc414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942840));
    // 0x2dc418: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x2dc418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x2dc41c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dc41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dc420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc424: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC424u;
            // 0x2dc428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC42Cu;
    // 0x2dc42c: 0x0  nop
    ctx->pc = 0x2dc42cu;
    // NOP
}
