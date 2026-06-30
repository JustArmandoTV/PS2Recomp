#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010F870
// Address: 0x10f870 - 0x10f9f8
void sub_0010F870_0x10f870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F870_0x10f870");
#endif

    switch (ctx->pc) {
        case 0x10f870u: goto label_10f870;
        case 0x10f874u: goto label_10f874;
        case 0x10f878u: goto label_10f878;
        case 0x10f87cu: goto label_10f87c;
        case 0x10f880u: goto label_10f880;
        case 0x10f884u: goto label_10f884;
        case 0x10f888u: goto label_10f888;
        case 0x10f88cu: goto label_10f88c;
        case 0x10f890u: goto label_10f890;
        case 0x10f894u: goto label_10f894;
        case 0x10f898u: goto label_10f898;
        case 0x10f89cu: goto label_10f89c;
        case 0x10f8a0u: goto label_10f8a0;
        case 0x10f8a4u: goto label_10f8a4;
        case 0x10f8a8u: goto label_10f8a8;
        case 0x10f8acu: goto label_10f8ac;
        case 0x10f8b0u: goto label_10f8b0;
        case 0x10f8b4u: goto label_10f8b4;
        case 0x10f8b8u: goto label_10f8b8;
        case 0x10f8bcu: goto label_10f8bc;
        case 0x10f8c0u: goto label_10f8c0;
        case 0x10f8c4u: goto label_10f8c4;
        case 0x10f8c8u: goto label_10f8c8;
        case 0x10f8ccu: goto label_10f8cc;
        case 0x10f8d0u: goto label_10f8d0;
        case 0x10f8d4u: goto label_10f8d4;
        case 0x10f8d8u: goto label_10f8d8;
        case 0x10f8dcu: goto label_10f8dc;
        case 0x10f8e0u: goto label_10f8e0;
        case 0x10f8e4u: goto label_10f8e4;
        case 0x10f8e8u: goto label_10f8e8;
        case 0x10f8ecu: goto label_10f8ec;
        case 0x10f8f0u: goto label_10f8f0;
        case 0x10f8f4u: goto label_10f8f4;
        case 0x10f8f8u: goto label_10f8f8;
        case 0x10f8fcu: goto label_10f8fc;
        case 0x10f900u: goto label_10f900;
        case 0x10f904u: goto label_10f904;
        case 0x10f908u: goto label_10f908;
        case 0x10f90cu: goto label_10f90c;
        case 0x10f910u: goto label_10f910;
        case 0x10f914u: goto label_10f914;
        case 0x10f918u: goto label_10f918;
        case 0x10f91cu: goto label_10f91c;
        case 0x10f920u: goto label_10f920;
        case 0x10f924u: goto label_10f924;
        case 0x10f928u: goto label_10f928;
        case 0x10f92cu: goto label_10f92c;
        case 0x10f930u: goto label_10f930;
        case 0x10f934u: goto label_10f934;
        case 0x10f938u: goto label_10f938;
        case 0x10f93cu: goto label_10f93c;
        case 0x10f940u: goto label_10f940;
        case 0x10f944u: goto label_10f944;
        case 0x10f948u: goto label_10f948;
        case 0x10f94cu: goto label_10f94c;
        case 0x10f950u: goto label_10f950;
        case 0x10f954u: goto label_10f954;
        case 0x10f958u: goto label_10f958;
        case 0x10f95cu: goto label_10f95c;
        case 0x10f960u: goto label_10f960;
        case 0x10f964u: goto label_10f964;
        case 0x10f968u: goto label_10f968;
        case 0x10f96cu: goto label_10f96c;
        case 0x10f970u: goto label_10f970;
        case 0x10f974u: goto label_10f974;
        case 0x10f978u: goto label_10f978;
        case 0x10f97cu: goto label_10f97c;
        case 0x10f980u: goto label_10f980;
        case 0x10f984u: goto label_10f984;
        case 0x10f988u: goto label_10f988;
        case 0x10f98cu: goto label_10f98c;
        case 0x10f990u: goto label_10f990;
        case 0x10f994u: goto label_10f994;
        case 0x10f998u: goto label_10f998;
        case 0x10f99cu: goto label_10f99c;
        case 0x10f9a0u: goto label_10f9a0;
        case 0x10f9a4u: goto label_10f9a4;
        case 0x10f9a8u: goto label_10f9a8;
        case 0x10f9acu: goto label_10f9ac;
        case 0x10f9b0u: goto label_10f9b0;
        case 0x10f9b4u: goto label_10f9b4;
        case 0x10f9b8u: goto label_10f9b8;
        case 0x10f9bcu: goto label_10f9bc;
        case 0x10f9c0u: goto label_10f9c0;
        case 0x10f9c4u: goto label_10f9c4;
        case 0x10f9c8u: goto label_10f9c8;
        case 0x10f9ccu: goto label_10f9cc;
        case 0x10f9d0u: goto label_10f9d0;
        case 0x10f9d4u: goto label_10f9d4;
        case 0x10f9d8u: goto label_10f9d8;
        case 0x10f9dcu: goto label_10f9dc;
        case 0x10f9e0u: goto label_10f9e0;
        case 0x10f9e4u: goto label_10f9e4;
        case 0x10f9e8u: goto label_10f9e8;
        case 0x10f9ecu: goto label_10f9ec;
        case 0x10f9f0u: goto label_10f9f0;
        case 0x10f9f4u: goto label_10f9f4;
        default: break;
    }

    ctx->pc = 0x10f870u;

label_10f870:
    // 0x10f870: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x10f870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10f874:
    // 0x10f874: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x10f874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10f878:
    // 0x10f878: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x10f878u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_10f87c:
    // 0x10f87c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f87cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10f880:
    // 0x10f880: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x10f880u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_10f884:
    // 0x10f884: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x10f884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10f888:
    // 0x10f888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10f88c:
    // 0x10f88c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x10f88cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10f890:
    // 0x10f890: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x10f890u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10f894:
    // 0x10f894: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x10f894u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_10f898:
    // 0x10f898: 0xc043dbe  jal         func_10F6F8
label_10f89c:
    if (ctx->pc == 0x10F89Cu) {
        ctx->pc = 0x10F89Cu;
            // 0x10f89c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x10F8A0u;
        goto label_10f8a0;
    }
    ctx->pc = 0x10F898u;
    SET_GPR_U32(ctx, 31, 0x10F8A0u);
    ctx->pc = 0x10F89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F898u;
            // 0x10f89c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F6F8u;
    if (runtime->hasFunction(0x10F6F8u)) {
        auto targetFn = runtime->lookupFunction(0x10F6F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F8A0u; }
        if (ctx->pc != 0x10F8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F6F8_0x10f6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F8A0u; }
        if (ctx->pc != 0x10F8A0u) { return; }
    }
    ctx->pc = 0x10F8A0u;
label_10f8a0:
    // 0x10f8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10f8a4:
    // 0x10f8a4: 0x3e00008  jr          $ra
label_10f8a8:
    if (ctx->pc == 0x10F8A8u) {
        ctx->pc = 0x10F8A8u;
            // 0x10f8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x10F8ACu;
        goto label_10f8ac;
    }
    ctx->pc = 0x10F8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F8A4u;
            // 0x10f8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F8ACu;
label_10f8ac:
    // 0x10f8ac: 0x0  nop
    ctx->pc = 0x10f8acu;
    // NOP
label_10f8b0:
    // 0x10f8b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x10f8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_10f8b4:
    // 0x10f8b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x10f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_10f8b8:
    // 0x10f8b8: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x10f8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
label_10f8bc:
    // 0x10f8bc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x10f8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_10f8c0:
    // 0x10f8c0: 0x24719998  addiu       $s1, $v1, -0x6668
    ctx->pc = 0x10f8c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941080));
label_10f8c4:
    // 0x10f8c4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x10f8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_10f8c8:
    // 0x10f8c8: 0x8c679998  lw          $a3, -0x6668($v1)
    ctx->pc = 0x10f8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941080)));
label_10f8cc:
    // 0x10f8cc: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x10f8ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_10f8d0:
    // 0x10f8d0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x10f8d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10f8d4:
    // 0x10f8d4: 0x10a00043  beqz        $a1, . + 4 + (0x43 << 2)
label_10f8d8:
    if (ctx->pc == 0x10F8D8u) {
        ctx->pc = 0x10F8D8u;
            // 0x10f8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10F8DCu;
        goto label_10f8dc;
    }
    ctx->pc = 0x10F8D4u;
    {
        const bool branch_taken_0x10f8d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F8D4u;
            // 0x10f8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f8d4) {
            ctx->pc = 0x10F9E4u;
            goto label_10f9e4;
        }
    }
    ctx->pc = 0x10F8DCu;
label_10f8dc:
    // 0x10f8dc: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x10f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_10f8e0:
    // 0x10f8e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10f8e4:
    // 0x10f8e4: 0x24a4001e  addiu       $a0, $a1, 0x1E
    ctx->pc = 0x10f8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
label_10f8e8:
    // 0x10f8e8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x10f8e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_10f8ec:
    // 0x10f8ec: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x10f8ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_10f8f0:
    // 0x10f8f0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x10f8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10f8f4:
    // 0x10f8f4: 0x42903  sra         $a1, $a0, 4
    ctx->pc = 0x10f8f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 4));
label_10f8f8:
    // 0x10f8f8: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x10f8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_10f8fc:
    // 0x10f8fc: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
label_10f900:
    if (ctx->pc == 0x10F900u) {
        ctx->pc = 0x10F900u;
            // 0x10f900: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10F904u;
        goto label_10f904;
    }
    ctx->pc = 0x10F8FCu;
    {
        const bool branch_taken_0x10f8fc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x10F900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F8FCu;
            // 0x10f900: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f8fc) {
            ctx->pc = 0x10F924u;
            goto label_10f924;
        }
    }
    ctx->pc = 0x10F904u;
label_10f904:
    // 0x10f904: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x10f904u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10f908:
    // 0x10f908: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x10f908u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_10f90c:
    // 0x10f90c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x10f90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_10f910:
    // 0x10f910: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x10f910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_10f914:
    // 0x10f914: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x10f914u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_10f918:
    // 0x10f918: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x10f918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_10f91c:
    // 0x10f91c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_10f920:
    if (ctx->pc == 0x10F920u) {
        ctx->pc = 0x10F924u;
        goto label_10f924;
    }
    ctx->pc = 0x10F91Cu;
    {
        const bool branch_taken_0x10f91c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f91c) {
            ctx->pc = 0x10F908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10f908;
        }
    }
    ctx->pc = 0x10F924u;
label_10f924:
    // 0x10f924: 0xc0431d4  jal         func_10C750
label_10f928:
    if (ctx->pc == 0x10F928u) {
        ctx->pc = 0x10F92Cu;
        goto label_10f92c;
    }
    ctx->pc = 0x10F924u;
    SET_GPR_U32(ctx, 31, 0x10F92Cu);
    ctx->pc = 0x10C750u;
    if (runtime->hasFunction(0x10C750u)) {
        auto targetFn = runtime->lookupFunction(0x10C750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F92Cu; }
        if (ctx->pc != 0x10F92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C750_0x10c750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F92Cu; }
        if (ctx->pc != 0x10F92Cu) { return; }
    }
    ctx->pc = 0x10F92Cu;
label_10f92c:
    // 0x10f92c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x10f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_10f930:
    // 0x10f930: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
label_10f934:
    if (ctx->pc == 0x10F934u) {
        ctx->pc = 0x10F938u;
        goto label_10f938;
    }
    ctx->pc = 0x10F930u;
    {
        const bool branch_taken_0x10f930 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x10f930) {
            ctx->pc = 0x10F984u;
            goto label_10f984;
        }
    }
    ctx->pc = 0x10F938u;
label_10f938:
    // 0x10f938: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x10f938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_10f93c:
    // 0x10f93c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x10f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_10f940:
    // 0x10f940: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10f940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_10f944:
    // 0x10f944: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x10f944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_10f948:
    // 0x10f948: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x10f948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10f94c:
    // 0x10f94c: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x10f94cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_10f950:
    // 0x10f950: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_10f954:
    if (ctx->pc == 0x10F954u) {
        ctx->pc = 0x10F954u;
            // 0x10f954: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x10F958u;
        goto label_10f958;
    }
    ctx->pc = 0x10F950u;
    {
        const bool branch_taken_0x10f950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F950u;
            // 0x10f954: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f950) {
            ctx->pc = 0x10F9D8u;
            goto label_10f9d8;
        }
    }
    ctx->pc = 0x10F958u;
label_10f958:
    // 0x10f958: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x10f958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_10f95c:
    // 0x10f95c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x10f95cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_10f960:
    // 0x10f960: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x10f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_10f964:
    // 0x10f964: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x10f964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10f968:
    // 0x10f968: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
label_10f96c:
    if (ctx->pc == 0x10F96Cu) {
        ctx->pc = 0x10F970u;
        goto label_10f970;
    }
    ctx->pc = 0x10F968u;
    {
        const bool branch_taken_0x10f968 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f968) {
            ctx->pc = 0x10F9D8u;
            goto label_10f9d8;
        }
    }
    ctx->pc = 0x10F970u;
label_10f970:
    // 0x10f970: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x10f970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_10f974:
    // 0x10f974: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x10f974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10f978:
    // 0x10f978: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x10f978u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10f97c:
    // 0x10f97c: 0x10000010  b           . + 4 + (0x10 << 2)
label_10f980:
    if (ctx->pc == 0x10F980u) {
        ctx->pc = 0x10F980u;
            // 0x10f980: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x10F984u;
        goto label_10f984;
    }
    ctx->pc = 0x10F97Cu;
    {
        const bool branch_taken_0x10f97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F97Cu;
            // 0x10f980: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f97c) {
            ctx->pc = 0x10F9C0u;
            goto label_10f9c0;
        }
    }
    ctx->pc = 0x10F984u;
label_10f984:
    // 0x10f984: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x10f984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_10f988:
    // 0x10f988: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x10f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_10f98c:
    // 0x10f98c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x10f98cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_10f990:
    // 0x10f990: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_10f994:
    if (ctx->pc == 0x10F994u) {
        ctx->pc = 0x10F994u;
            // 0x10f994: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x10F998u;
        goto label_10f998;
    }
    ctx->pc = 0x10F990u;
    {
        const bool branch_taken_0x10f990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F990u;
            // 0x10f994: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f990) {
            ctx->pc = 0x10F9D8u;
            goto label_10f9d8;
        }
    }
    ctx->pc = 0x10F998u;
label_10f998:
    // 0x10f998: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x10f998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_10f99c:
    // 0x10f99c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x10f99cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_10f9a0:
    // 0x10f9a0: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x10f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_10f9a4:
    // 0x10f9a4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x10f9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10f9a8:
    // 0x10f9a8: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_10f9ac:
    if (ctx->pc == 0x10F9ACu) {
        ctx->pc = 0x10F9B0u;
        goto label_10f9b0;
    }
    ctx->pc = 0x10F9A8u;
    {
        const bool branch_taken_0x10f9a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f9a8) {
            ctx->pc = 0x10F9D8u;
            goto label_10f9d8;
        }
    }
    ctx->pc = 0x10F9B0u;
label_10f9b0:
    // 0x10f9b0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x10f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_10f9b4:
    // 0x10f9b4: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x10f9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10f9b8:
    // 0x10f9b8: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x10f9b8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10f9bc:
    // 0x10f9bc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x10f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_10f9c0:
    // 0x10f9c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10f9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10f9c4:
    // 0x10f9c4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x10f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_10f9c8:
    // 0x10f9c8: 0xc0f809  jalr        $a2
label_10f9cc:
    if (ctx->pc == 0x10F9CCu) {
        ctx->pc = 0x10F9CCu;
            // 0x10f9cc: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x10F9D0u;
        goto label_10f9d0;
    }
    ctx->pc = 0x10F9C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x10F9D0u);
        ctx->pc = 0x10F9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F9C8u;
            // 0x10f9cc: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10F9D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10F9D0u; }
            if (ctx->pc != 0x10F9D0u) { return; }
        }
        }
    }
    ctx->pc = 0x10F9D0u;
label_10f9d0:
    // 0x10f9d0: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x10f9d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10f9d4:
    // 0x10f9d4: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x10f9d4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f9d8:
    // 0x10f9d8: 0xf  sync
    ctx->pc = 0x10f9d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_10f9dc:
    // 0x10f9dc: 0x42000038  ei
    ctx->pc = 0x10f9dcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_10f9e0:
    // 0x10f9e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10f9e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f9e4:
    // 0x10f9e4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x10f9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_10f9e8:
    // 0x10f9e8: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x10f9e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_10f9ec:
    // 0x10f9ec: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x10f9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_10f9f0:
    // 0x10f9f0: 0x3e00008  jr          $ra
label_10f9f4:
    if (ctx->pc == 0x10F9F4u) {
        ctx->pc = 0x10F9F4u;
            // 0x10f9f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x10F9F8u;
        goto label_fallthrough_0x10f9f0;
    }
    ctx->pc = 0x10F9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F9F0u;
            // 0x10f9f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x10f9f0:
    ctx->pc = 0x10F9F8u;
}
