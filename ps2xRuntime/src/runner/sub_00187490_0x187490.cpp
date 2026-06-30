#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187490
// Address: 0x187490 - 0x187670
void sub_00187490_0x187490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187490_0x187490");
#endif

    switch (ctx->pc) {
        case 0x1874f4u: goto label_1874f4;
        case 0x1875a8u: goto label_1875a8;
        default: break;
    }

    ctx->pc = 0x187490u;

    // 0x187490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187494: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x187494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x187498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18749c: 0x24a5f980  addiu       $a1, $a1, -0x680
    ctx->pc = 0x18749cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965632));
    // 0x1874a0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1874a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1874a4: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1874a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1874a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1874a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1874ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1874acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1874b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1874b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1874b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1874b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1874b8: 0x805f1dc  j           func_17C770
    ctx->pc = 0x1874B8u;
    ctx->pc = 0x1874BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1874B8u;
            // 0x1874bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017C770_0x17c770(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1874C0u;
    // 0x1874c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1874c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1874c4: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x1874c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x1874c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1874c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1874cc: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x1874ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x1874d0: 0x24a5f980  addiu       $a1, $a1, -0x680
    ctx->pc = 0x1874d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965632));
    // 0x1874d4: 0x2610fa80  addiu       $s0, $s0, -0x580
    ctx->pc = 0x1874d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965888));
    // 0x1874d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1874d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1874dc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1874dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1874e0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1874e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1874e4: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1874e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1874e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1874e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1874ec: 0xc05f1dc  jal         func_17C770
    ctx->pc = 0x1874ECu;
    SET_GPR_U32(ctx, 31, 0x1874F4u);
    ctx->pc = 0x1874F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1874ECu;
            // 0x1874f0: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1874F4u; }
        if (ctx->pc != 0x1874F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1874F4u; }
        if (ctx->pc != 0x1874F4u) { return; }
    }
    ctx->pc = 0x1874F4u;
label_1874f4:
    // 0x1874f4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x1874f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x1874f8: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x1874f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1874fc: 0x2463f940  addiu       $v1, $v1, -0x6C0
    ctx->pc = 0x1874fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965568));
    // 0x187500: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x187500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187504: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x187504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187508: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x187508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18750c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x18750cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x187510: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x187510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187518: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x187518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x18751c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x18751cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x187520: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x187520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x187524: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x187524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x187528: 0x3e00008  jr          $ra
    ctx->pc = 0x187528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18752Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187528u;
            // 0x18752c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187530u;
    // 0x187530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187534: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x187534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x187538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18753c: 0x24a5f980  addiu       $a1, $a1, -0x680
    ctx->pc = 0x18753cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965632));
    // 0x187540: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x187540u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x187544: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x187544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x187548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18754c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18754cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187550: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x187550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187554: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x187554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187558: 0x805f1dc  j           func_17C770
    ctx->pc = 0x187558u;
    ctx->pc = 0x18755Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187558u;
            // 0x18755c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017C770_0x17c770(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x187560u;
    // 0x187560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x187564: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x187564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x187568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18756c: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x18756cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x187570: 0x2442f980  addiu       $v0, $v0, -0x680
    ctx->pc = 0x187570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965632));
    // 0x187574: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x187578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18757c: 0x2610fa80  addiu       $s0, $s0, -0x580
    ctx->pc = 0x18757cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965888));
    // 0x187580: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x187580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x187584: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x187584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x187588: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x187588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x18758c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18758cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187590: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x187590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x187594: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x187594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x187598: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x187598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18759c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18759cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1875a0: 0xc05f1dc  jal         func_17C770
    ctx->pc = 0x1875A0u;
    SET_GPR_U32(ctx, 31, 0x1875A8u);
    ctx->pc = 0x1875A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1875A0u;
            // 0x1875a4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1875A8u; }
        if (ctx->pc != 0x1875A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1875A8u; }
        if (ctx->pc != 0x1875A8u) { return; }
    }
    ctx->pc = 0x1875A8u;
label_1875a8:
    // 0x1875a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1875a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1875ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1875acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1875b0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1875b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1875b4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1875b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1875b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1875b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1875bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1875bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1875c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1875c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1875c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1875C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1875C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1875C4u;
            // 0x1875c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1875CCu;
    // 0x1875cc: 0x0  nop
    ctx->pc = 0x1875ccu;
    // NOP
    // 0x1875d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1875d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1875d4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1875d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1875d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1875d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1875dc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1875dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1875e0: 0x2442f980  addiu       $v0, $v0, -0x680
    ctx->pc = 0x1875e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965632));
    // 0x1875e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1875e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1875e8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1875e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1875ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1875ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1875f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1875f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1875f4: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x1875f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1875f8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1875f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1875fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1875fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187600: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x187600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x187604: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x187604u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18760c: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x18760cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x187610: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x187610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x187614: 0x805f1dc  j           func_17C770
    ctx->pc = 0x187614u;
    ctx->pc = 0x187618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187614u;
            // 0x187618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017C770_0x17c770(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18761Cu;
    // 0x18761c: 0x0  nop
    ctx->pc = 0x18761cu;
    // NOP
    // 0x187620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187624: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x187624u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18762c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x18762cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x187630: 0x2442f980  addiu       $v0, $v0, -0x680
    ctx->pc = 0x187630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965632));
    // 0x187634: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x187634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x187638: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x187638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18763c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18763cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187640: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x187640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x187644: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x187644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x187648: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x187648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x18764c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18764cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187650: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x187650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x187654: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x187654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18765c: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x18765cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x187660: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x187660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x187664: 0x805f1dc  j           func_17C770
    ctx->pc = 0x187664u;
    ctx->pc = 0x187668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187664u;
            // 0x187668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017C770_0x17c770(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18766Cu;
    // 0x18766c: 0x0  nop
    ctx->pc = 0x18766cu;
    // NOP
}
