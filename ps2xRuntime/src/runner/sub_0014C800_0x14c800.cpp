#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014C800
// Address: 0x14c800 - 0x14d370
void sub_0014C800_0x14c800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C800_0x14c800");
#endif

    switch (ctx->pc) {
        case 0x14c870u: goto label_14c870;
        case 0x14ca60u: goto label_14ca60;
        case 0x14ca9cu: goto label_14ca9c;
        case 0x14cab8u: goto label_14cab8;
        case 0x14cad4u: goto label_14cad4;
        case 0x14caf4u: goto label_14caf4;
        case 0x14cafcu: goto label_14cafc;
        case 0x14cb1cu: goto label_14cb1c;
        case 0x14cb50u: goto label_14cb50;
        case 0x14cb64u: goto label_14cb64;
        case 0x14cb70u: goto label_14cb70;
        case 0x14cb80u: goto label_14cb80;
        case 0x14cb88u: goto label_14cb88;
        case 0x14cbecu: goto label_14cbec;
        case 0x14cbf4u: goto label_14cbf4;
        case 0x14cc20u: goto label_14cc20;
        case 0x14cc28u: goto label_14cc28;
        case 0x14cc60u: goto label_14cc60;
        case 0x14cc94u: goto label_14cc94;
        case 0x14ccb0u: goto label_14ccb0;
        case 0x14ccf0u: goto label_14ccf0;
        case 0x14cd64u: goto label_14cd64;
        case 0x14cd88u: goto label_14cd88;
        case 0x14cd94u: goto label_14cd94;
        case 0x14cda8u: goto label_14cda8;
        case 0x14cdb4u: goto label_14cdb4;
        case 0x14ce34u: goto label_14ce34;
        case 0x14ce3cu: goto label_14ce3c;
        case 0x14ce58u: goto label_14ce58;
        case 0x14ce60u: goto label_14ce60;
        case 0x14ce8cu: goto label_14ce8c;
        case 0x14ce94u: goto label_14ce94;
        case 0x14ced0u: goto label_14ced0;
        case 0x14ced8u: goto label_14ced8;
        case 0x14cee8u: goto label_14cee8;
        case 0x14cef0u: goto label_14cef0;
        case 0x14cf58u: goto label_14cf58;
        case 0x14cf7cu: goto label_14cf7c;
        case 0x14cfecu: goto label_14cfec;
        case 0x14d010u: goto label_14d010;
        case 0x14d048u: goto label_14d048;
        case 0x14d084u: goto label_14d084;
        case 0x14d0a8u: goto label_14d0a8;
        case 0x14d0f4u: goto label_14d0f4;
        case 0x14d110u: goto label_14d110;
        case 0x14d124u: goto label_14d124;
        case 0x14d130u: goto label_14d130;
        case 0x14d190u: goto label_14d190;
        case 0x14d198u: goto label_14d198;
        default: break;
    }

    ctx->pc = 0x14c800u;

    // 0x14c800: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14c800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x14c804: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14c804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14c808: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x14c808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x14c80c: 0x24637980  addiu       $v1, $v1, 0x7980
    ctx->pc = 0x14c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31104));
    // 0x14c810: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14c810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14c814: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14c814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14c818: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14c818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14c81c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x14c81cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c820: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14c820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14c824: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x14c824u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c828: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14c828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14c82c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14c82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14c830: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14c830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14c834: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14c834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14c838: 0xaf8381d0  sw          $v1, -0x7E30($gp)
    ctx->pc = 0x14c838u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934992), GPR_U32(ctx, 3));
    // 0x14c83c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x14c840: 0xaf8281e4  sw          $v0, -0x7E1C($gp)
    ctx->pc = 0x14c840u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935012), GPR_U32(ctx, 2));
    // 0x14c844: 0x24634dd0  addiu       $v1, $v1, 0x4DD0
    ctx->pc = 0x14c844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19920));
    // 0x14c848: 0xaf8081d4  sw          $zero, -0x7E2C($gp)
    ctx->pc = 0x14c848u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 0));
    // 0x14c84c: 0xaf8081e8  sw          $zero, -0x7E18($gp)
    ctx->pc = 0x14c84cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935016), GPR_U32(ctx, 0));
    // 0x14c850: 0x3c021ff0  lui         $v0, 0x1FF0
    ctx->pc = 0x14c850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8176 << 16));
    // 0x14c854: 0xaf8381e0  sw          $v1, -0x7E20($gp)
    ctx->pc = 0x14c854u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935008), GPR_U32(ctx, 3));
    // 0x14c858: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x14c858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x14c85c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14c85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14c860: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C860u;
    {
        const bool branch_taken_0x14c860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C860u;
            // 0x14c864: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c860) {
            ctx->pc = 0x14C880u;
            goto label_14c880;
        }
    }
    ctx->pc = 0x14C868u;
    // 0x14c868: 0xc054c44  jal         func_153110
    ctx->pc = 0x14C868u;
    SET_GPR_U32(ctx, 31, 0x14C870u);
    ctx->pc = 0x153110u;
    if (runtime->hasFunction(0x153110u)) {
        auto targetFn = runtime->lookupFunction(0x153110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C870u; }
        if (ctx->pc != 0x14C870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153110_0x153110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C870u; }
        if (ctx->pc != 0x14C870u) { return; }
    }
    ctx->pc = 0x14C870u;
label_14c870:
    // 0x14c870: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x14c870u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x14c874: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x14c874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c878: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14C878u;
    {
        const bool branch_taken_0x14c878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C878u;
            // 0x14c87c: 0x26738450  addiu       $s3, $s3, -0x7BB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c878) {
            ctx->pc = 0x14C888u;
            goto label_14c888;
        }
    }
    ctx->pc = 0x14C880u;
label_14c880:
    // 0x14c880: 0x8e93001c  lw          $s3, 0x1C($s4)
    ctx->pc = 0x14c880u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x14c884: 0x8e900038  lw          $s0, 0x38($s4)
    ctx->pc = 0x14c884u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_14c888:
    // 0x14c888: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x14c888u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14c88c: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x14c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x14c890: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x14c890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x14c894: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C894u;
    {
        const bool branch_taken_0x14c894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C894u;
            // 0x14c898: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c894) {
            ctx->pc = 0x14C8A4u;
            goto label_14c8a4;
        }
    }
    ctx->pc = 0x14C89Cu;
    // 0x14c89c: 0x1000023f  b           . + 4 + (0x23F << 2)
    ctx->pc = 0x14C89Cu;
    {
        const bool branch_taken_0x14c89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C89Cu;
            // 0x14c8a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c89c) {
            ctx->pc = 0x14D19Cu;
            goto label_14d19c;
        }
    }
    ctx->pc = 0x14C8A4u;
label_14c8a4:
    // 0x14c8a4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x14c8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x14c8a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C8A8u;
    {
        const bool branch_taken_0x14c8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c8a8) {
            ctx->pc = 0x14C8C0u;
            goto label_14c8c0;
        }
    }
    ctx->pc = 0x14C8B0u;
    // 0x14c8b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c8b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14c8b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14C8B8u;
    {
        const bool branch_taken_0x14c8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C8B8u;
            // 0x14c8bc: 0xac435804  sw          $v1, 0x5804($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22532), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c8b8) {
            ctx->pc = 0x14C8C8u;
            goto label_14c8c8;
        }
    }
    ctx->pc = 0x14C8C0u;
label_14c8c0:
    // 0x14c8c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14c8c4: 0x8c555804  lw          $s5, 0x5804($v0)
    ctx->pc = 0x14c8c4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22532)));
label_14c8c8:
    // 0x14c8c8: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x14c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x14c8cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14c8d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14c8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14c8d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14C8D4u;
    {
        const bool branch_taken_0x14c8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c8d4) {
            ctx->pc = 0x14C8E0u;
            goto label_14c8e0;
        }
    }
    ctx->pc = 0x14C8DCu;
    // 0x14c8dc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x14c8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c8e0:
    // 0x14c8e0: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C8E0u;
    {
        const bool branch_taken_0x14c8e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c8e0) {
            ctx->pc = 0x14C900u;
            goto label_14c900;
        }
    }
    ctx->pc = 0x14C8E8u;
    // 0x14c8e8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x14c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14c8ec: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x14c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x14c8f0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C8F0u;
    {
        const bool branch_taken_0x14c8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c8f0) {
            ctx->pc = 0x14C900u;
            goto label_14c900;
        }
    }
    ctx->pc = 0x14C8F8u;
    // 0x14c8f8: 0x10000228  b           . + 4 + (0x228 << 2)
    ctx->pc = 0x14C8F8u;
    {
        const bool branch_taken_0x14c8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C8F8u;
            // 0x14c8fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c8f8) {
            ctx->pc = 0x14D19Cu;
            goto label_14d19c;
        }
    }
    ctx->pc = 0x14C900u;
label_14c900:
    // 0x14c900: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14c904: 0xac405828  sw          $zero, 0x5828($v0)
    ctx->pc = 0x14c904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 0));
    // 0x14c908: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x14c908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x14c90c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x14c90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x14c910: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C910u;
    {
        const bool branch_taken_0x14c910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c910) {
            ctx->pc = 0x14C914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C910u;
            // 0x14c914: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C928u;
            goto label_14c928;
        }
    }
    ctx->pc = 0x14C918u;
    // 0x14c918: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14c918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c91c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14c920: 0xac435810  sw          $v1, 0x5810($v0)
    ctx->pc = 0x14c920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22544), GPR_U32(ctx, 3));
    // 0x14c924: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x14c924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_14c928:
    // 0x14c928: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14c928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14c92c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C92Cu;
    {
        const bool branch_taken_0x14c92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c92c) {
            ctx->pc = 0x14C930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C92Cu;
            // 0x14c930: 0x8e430040  lw          $v1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C944u;
            goto label_14c944;
        }
    }
    ctx->pc = 0x14C934u;
    // 0x14c934: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14c934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c938: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14c93c: 0xac4357e0  sw          $v1, 0x57E0($v0)
    ctx->pc = 0x14c93cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22496), GPR_U32(ctx, 3));
    // 0x14c940: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x14c940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_14c944:
    // 0x14c944: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x14c944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x14c948: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14c948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14c94c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14C94Cu;
    {
        const bool branch_taken_0x14c94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c94c) {
            ctx->pc = 0x14C980u;
            goto label_14c980;
        }
    }
    ctx->pc = 0x14C954u;
    // 0x14c954: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14c958: 0x8c425804  lw          $v0, 0x5804($v0)
    ctx->pc = 0x14c958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22532)));
    // 0x14c95c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C95Cu;
    {
        const bool branch_taken_0x14c95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c95c) {
            ctx->pc = 0x14C980u;
            goto label_14c980;
        }
    }
    ctx->pc = 0x14C964u;
    // 0x14c964: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14c968: 0x8c425800  lw          $v0, 0x5800($v0)
    ctx->pc = 0x14c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22528)));
    // 0x14c96c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C96Cu;
    {
        const bool branch_taken_0x14c96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c96c) {
            ctx->pc = 0x14C980u;
            goto label_14c980;
        }
    }
    ctx->pc = 0x14C974u;
    // 0x14c974: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14c974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c978: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14c97c: 0xac43580c  sw          $v1, 0x580C($v0)
    ctx->pc = 0x14c97cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22540), GPR_U32(ctx, 3));
label_14c980:
    // 0x14c980: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14c984: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x14c984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x14c988: 0x8c44580c  lw          $a0, 0x580C($v0)
    ctx->pc = 0x14c988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22540)));
    // 0x14c98c: 0x24c654e0  addiu       $a2, $a2, 0x54E0
    ctx->pc = 0x14c98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21728));
    // 0x14c990: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14c990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14c994: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14c998: 0x43940  sll         $a3, $a0, 5
    ctx->pc = 0x14c998u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x14c99c: 0x8c455828  lw          $a1, 0x5828($v0)
    ctx->pc = 0x14c99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
    // 0x14c9a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14c9a4: 0x90445814  lbu         $a0, 0x5814($v0)
    ctx->pc = 0x14c9a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22548)));
    // 0x14c9a8: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x14c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x14c9ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c9b0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x14c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x14c9b4: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x14c9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x14c9b8: 0x1080006f  beqz        $a0, . + 4 + (0x6F << 2)
    ctx->pc = 0x14C9B8u;
    {
        const bool branch_taken_0x14c9b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C9B8u;
            // 0x14c9bc: 0xac625828  sw          $v0, 0x5828($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c9b8) {
            ctx->pc = 0x14CB78u;
            goto label_14cb78;
        }
    }
    ctx->pc = 0x14C9C0u;
    // 0x14c9c0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x14c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14c9c4: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x14C9C4u;
    {
        const bool branch_taken_0x14c9c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C9C4u;
            // 0x14c9c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c9c4) {
            ctx->pc = 0x14CA68u;
            goto label_14ca68;
        }
    }
    ctx->pc = 0x14C9CCu;
    // 0x14c9cc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x14c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14c9d0: 0x50820021  beql        $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x14C9D0u;
    {
        const bool branch_taken_0x14c9d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c9d0) {
            ctx->pc = 0x14C9D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C9D0u;
            // 0x14c9d4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CA58u;
            goto label_14ca58;
        }
    }
    ctx->pc = 0x14C9D8u;
    // 0x14c9d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x14c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14c9dc: 0x5082003e  beql        $a0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x14C9DCu;
    {
        const bool branch_taken_0x14c9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c9dc) {
            ctx->pc = 0x14C9E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C9DCu;
            // 0x14c9e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CAD8u;
            goto label_14cad8;
        }
    }
    ctx->pc = 0x14C9E4u;
    // 0x14c9e4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x14c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14c9e8: 0x10820018  beq         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14C9E8u;
    {
        const bool branch_taken_0x14c9e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c9e8) {
            ctx->pc = 0x14CA4Cu;
            goto label_14ca4c;
        }
    }
    ctx->pc = 0x14C9F0u;
    // 0x14c9f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14c9f4: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14C9F4u;
    {
        const bool branch_taken_0x14c9f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c9f4) {
            ctx->pc = 0x14CA4Cu;
            goto label_14ca4c;
        }
    }
    ctx->pc = 0x14C9FCu;
    // 0x14c9fc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x14c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14ca00: 0x50820035  beql        $a0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x14CA00u;
    {
        const bool branch_taken_0x14ca00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ca00) {
            ctx->pc = 0x14CA04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA00u;
            // 0x14ca04: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CAD8u;
            goto label_14cad8;
        }
    }
    ctx->pc = 0x14CA08u;
    // 0x14ca08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ca0c: 0x508201e3  beql        $a0, $v0, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x14CA0Cu;
    {
        const bool branch_taken_0x14ca0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ca0c) {
            ctx->pc = 0x14CA10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA0Cu;
            // 0x14ca10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D19Cu;
            goto label_14d19c;
        }
    }
    ctx->pc = 0x14CA14u;
    // 0x14ca14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ca18: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CA18u;
    {
        const bool branch_taken_0x14ca18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14ca18) {
            ctx->pc = 0x14CA1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA18u;
            // 0x14ca1c: 0x8f828358  lw          $v0, -0x7CA8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935384)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CA28u;
            goto label_14ca28;
        }
    }
    ctx->pc = 0x14CA20u;
    // 0x14ca20: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x14CA20u;
    {
        const bool branch_taken_0x14ca20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ca20) {
            ctx->pc = 0x14CAD8u;
            goto label_14cad8;
        }
    }
    ctx->pc = 0x14CA28u;
label_14ca28:
    // 0x14ca28: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x14CA28u;
    {
        const bool branch_taken_0x14ca28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ca28) {
            ctx->pc = 0x14CAD8u;
            goto label_14cad8;
        }
    }
    ctx->pc = 0x14CA30u;
    // 0x14ca30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14ca34: 0x3c12005d  lui         $s2, 0x5D
    ctx->pc = 0x14ca34u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
    // 0x14ca38: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x14ca38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x14ca3c: 0xac435804  sw          $v1, 0x5804($v0)
    ctx->pc = 0x14ca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22532), GPR_U32(ctx, 3));
    // 0x14ca40: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x14ca40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca44: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x14CA44u;
    {
        const bool branch_taken_0x14ca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA44u;
            // 0x14ca48: 0x26524a00  addiu       $s2, $s2, 0x4A00 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 18944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca44) {
            ctx->pc = 0x14CAD8u;
            goto label_14cad8;
        }
    }
    ctx->pc = 0x14CA4Cu;
label_14ca4c:
    // 0x14ca4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14ca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ca50: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x14CA50u;
    {
        const bool branch_taken_0x14ca50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ca50) {
            ctx->pc = 0x14CAD8u;
            goto label_14cad8;
        }
    }
    ctx->pc = 0x14CA58u;
label_14ca58:
    // 0x14ca58: 0xc052da0  jal         func_14B680
    ctx->pc = 0x14CA58u;
    SET_GPR_U32(ctx, 31, 0x14CA60u);
    ctx->pc = 0x14B680u;
    if (runtime->hasFunction(0x14B680u)) {
        auto targetFn = runtime->lookupFunction(0x14B680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA60u; }
        if (ctx->pc != 0x14CA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B680_0x14b680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA60u; }
        if (ctx->pc != 0x14CA60u) { return; }
    }
    ctx->pc = 0x14CA60u;
label_14ca60:
    // 0x14ca60: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x14CA60u;
    {
        const bool branch_taken_0x14ca60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA60u;
            // 0x14ca64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca60) {
            ctx->pc = 0x14CAD8u;
            goto label_14cad8;
        }
    }
    ctx->pc = 0x14CA68u;
label_14ca68:
    // 0x14ca68: 0x32220400  andi        $v0, $s1, 0x400
    ctx->pc = 0x14ca68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1024);
    // 0x14ca6c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x14CA6Cu;
    {
        const bool branch_taken_0x14ca6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ca6c) {
            ctx->pc = 0x14CA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA6Cu;
            // 0x14ca70: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CAC0u;
            goto label_14cac0;
        }
    }
    ctx->pc = 0x14CA74u;
    // 0x14ca74: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x14ca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x14ca78: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x14ca78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x14ca7c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14CA7Cu;
    {
        const bool branch_taken_0x14ca7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ca7c) {
            ctx->pc = 0x14CA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA7Cu;
            // 0x14ca80: 0xc78f8364  lwc1        $f15, -0x7C9C($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CAA4u;
            goto label_14caa4;
        }
    }
    ctx->pc = 0x14CA84u;
    // 0x14ca84: 0xc78f8364  lwc1        $f15, -0x7C9C($gp)
    ctx->pc = 0x14ca84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x14ca88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14ca8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14ca8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14ca90: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x14ca90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14ca94: 0xc052d48  jal         func_14B520
    ctx->pc = 0x14CA94u;
    SET_GPR_U32(ctx, 31, 0x14CA9Cu);
    ctx->pc = 0x14CA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA94u;
            // 0x14ca98: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA9Cu; }
        if (ctx->pc != 0x14CA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B520_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA9Cu; }
        if (ctx->pc != 0x14CA9Cu) { return; }
    }
    ctx->pc = 0x14CA9Cu;
label_14ca9c:
    // 0x14ca9c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14CA9Cu;
    {
        const bool branch_taken_0x14ca9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA9Cu;
            // 0x14caa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca9c) {
            ctx->pc = 0x14CAD8u;
            goto label_14cad8;
        }
    }
    ctx->pc = 0x14CAA4u;
label_14caa4:
    // 0x14caa4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14caa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14caa8: 0x0  nop
    ctx->pc = 0x14caa8u;
    // NOP
    // 0x14caac: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x14caacu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x14cab0: 0xc052d48  jal         func_14B520
    ctx->pc = 0x14CAB0u;
    SET_GPR_U32(ctx, 31, 0x14CAB8u);
    ctx->pc = 0x14CAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CAB0u;
            // 0x14cab4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAB8u; }
        if (ctx->pc != 0x14CAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B520_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAB8u; }
        if (ctx->pc != 0x14CAB8u) { return; }
    }
    ctx->pc = 0x14CAB8u;
label_14cab8:
    // 0x14cab8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14CAB8u;
    {
        const bool branch_taken_0x14cab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cab8) {
            ctx->pc = 0x14CAD4u;
            goto label_14cad4;
        }
    }
    ctx->pc = 0x14CAC0u;
label_14cac0:
    // 0x14cac0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14cac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14cac4: 0xc78f8364  lwc1        $f15, -0x7C9C($gp)
    ctx->pc = 0x14cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x14cac8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14cac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14cacc: 0xc052d48  jal         func_14B520
    ctx->pc = 0x14CACCu;
    SET_GPR_U32(ctx, 31, 0x14CAD4u);
    ctx->pc = 0x14CAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CACCu;
            // 0x14cad0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAD4u; }
        if (ctx->pc != 0x14CAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B520_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAD4u; }
        if (ctx->pc != 0x14CAD4u) { return; }
    }
    ctx->pc = 0x14CAD4u;
label_14cad4:
    // 0x14cad4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14cad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14cad8:
    // 0x14cad8: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x14CAD8u;
    {
        const bool branch_taken_0x14cad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cad8) {
            ctx->pc = 0x14CB78u;
            goto label_14cb78;
        }
    }
    ctx->pc = 0x14CAE0u;
    // 0x14cae0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14cae4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14cae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14cae8: 0x8c455820  lw          $a1, 0x5820($v0)
    ctx->pc = 0x14cae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22560)));
    // 0x14caec: 0xc057240  jal         func_15C900
    ctx->pc = 0x14CAECu;
    SET_GPR_U32(ctx, 31, 0x14CAF4u);
    ctx->pc = 0x14CAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CAECu;
            // 0x14caf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C900u;
    if (runtime->hasFunction(0x15C900u)) {
        auto targetFn = runtime->lookupFunction(0x15C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAF4u; }
        if (ctx->pc != 0x14CAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C900_0x15c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAF4u; }
        if (ctx->pc != 0x14CAF4u) { return; }
    }
    ctx->pc = 0x14CAF4u;
label_14caf4:
    // 0x14caf4: 0xc05724c  jal         func_15C930
    ctx->pc = 0x14CAF4u;
    SET_GPR_U32(ctx, 31, 0x14CAFCu);
    ctx->pc = 0x14CAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CAF4u;
            // 0x14caf8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C930u;
    if (runtime->hasFunction(0x15C930u)) {
        auto targetFn = runtime->lookupFunction(0x15C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAFCu; }
        if (ctx->pc != 0x14CAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C930_0x15c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CAFCu; }
        if (ctx->pc != 0x14CAFCu) { return; }
    }
    ctx->pc = 0x14CAFCu;
label_14cafc:
    // 0x14cafc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14cb00: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14cb00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
    // 0x14cb04: 0xdc472058  ld          $a3, 0x2058($v0)
    ctx->pc = 0x14cb04u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8280)));
    // 0x14cb08: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x14cb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x14cb0c: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14cb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x14cb10: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14cb14: 0xc057540  jal         func_15D500
    ctx->pc = 0x14CB14u;
    SET_GPR_U32(ctx, 31, 0x14CB1Cu);
    ctx->pc = 0x14CB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB14u;
            // 0x14cb18: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB1Cu; }
        if (ctx->pc != 0x14CB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB1Cu; }
        if (ctx->pc != 0x14CB1Cu) { return; }
    }
    ctx->pc = 0x14CB1Cu;
label_14cb1c:
    // 0x14cb1c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14cb20: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14cb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
    // 0x14cb24: 0x8c432034  lw          $v1, 0x2034($v0)
    ctx->pc = 0x14cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8244)));
    // 0x14cb28: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x14cb2c: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x14cb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14cb30: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14cb34: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x14cb34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x14cb38: 0x24422030  addiu       $v0, $v0, 0x2030
    ctx->pc = 0x14cb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
    // 0x14cb3c: 0xaf8781d4  sw          $a3, -0x7E2C($gp)
    ctx->pc = 0x14cb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 7));
    // 0x14cb40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14cb44: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x14cb44u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14cb48: 0xc057540  jal         func_15D500
    ctx->pc = 0x14CB48u;
    SET_GPR_U32(ctx, 31, 0x14CB50u);
    ctx->pc = 0x14CB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB48u;
            // 0x14cb4c: 0x2406004e  addiu       $a2, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB50u; }
        if (ctx->pc != 0x14CB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB50u; }
        if (ctx->pc != 0x14CB50u) { return; }
    }
    ctx->pc = 0x14CB50u;
label_14cb50:
    // 0x14cb50: 0x8f8681d4  lw          $a2, -0x7E2C($gp)
    ctx->pc = 0x14cb50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
    // 0x14cb54: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14cb58: 0x24847980  addiu       $a0, $a0, 0x7980
    ctx->pc = 0x14cb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31104));
    // 0x14cb5c: 0xc05750c  jal         func_15D430
    ctx->pc = 0x14CB5Cu;
    SET_GPR_U32(ctx, 31, 0x14CB64u);
    ctx->pc = 0x14CB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB5Cu;
            // 0x14cb60: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB64u; }
        if (ctx->pc != 0x14CB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB64u; }
        if (ctx->pc != 0x14CB64u) { return; }
    }
    ctx->pc = 0x14CB64u;
label_14cb64:
    // 0x14cb64: 0xaf8281d0  sw          $v0, -0x7E30($gp)
    ctx->pc = 0x14cb64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934992), GPR_U32(ctx, 2));
    // 0x14cb68: 0xc057528  jal         func_15D4A0
    ctx->pc = 0x14CB68u;
    SET_GPR_U32(ctx, 31, 0x14CB70u);
    ctx->pc = 0x14CB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB68u;
            // 0x14cb6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB70u; }
        if (ctx->pc != 0x14CB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB70u; }
        if (ctx->pc != 0x14CB70u) { return; }
    }
    ctx->pc = 0x14CB70u;
label_14cb70:
    // 0x14cb70: 0x1000018a  b           . + 4 + (0x18A << 2)
    ctx->pc = 0x14CB70u;
    {
        const bool branch_taken_0x14cb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB70u;
            // 0x14cb74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb70) {
            ctx->pc = 0x14D19Cu;
            goto label_14d19c;
        }
    }
    ctx->pc = 0x14CB78u;
label_14cb78:
    // 0x14cb78: 0xc053658  jal         func_14D960
    ctx->pc = 0x14CB78u;
    SET_GPR_U32(ctx, 31, 0x14CB80u);
    ctx->pc = 0x14D960u;
    if (runtime->hasFunction(0x14D960u)) {
        auto targetFn = runtime->lookupFunction(0x14D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB80u; }
        if (ctx->pc != 0x14CB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D960_0x14d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB80u; }
        if (ctx->pc != 0x14CB80u) { return; }
    }
    ctx->pc = 0x14CB80u;
label_14cb80:
    // 0x14cb80: 0xc0500cc  jal         func_140330
    ctx->pc = 0x14CB80u;
    SET_GPR_U32(ctx, 31, 0x14CB88u);
    ctx->pc = 0x140330u;
    if (runtime->hasFunction(0x140330u)) {
        auto targetFn = runtime->lookupFunction(0x140330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB88u; }
        if (ctx->pc != 0x14CB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140330_0x140330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB88u; }
        if (ctx->pc != 0x14CB88u) { return; }
    }
    ctx->pc = 0x14CB88u;
label_14cb88:
    // 0x14cb88: 0x32220400  andi        $v0, $s1, 0x400
    ctx->pc = 0x14cb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1024);
    // 0x14cb8c: 0x5040008b  beql        $v0, $zero, . + 4 + (0x8B << 2)
    ctx->pc = 0x14CB8Cu;
    {
        const bool branch_taken_0x14cb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cb8c) {
            ctx->pc = 0x14CB90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB8Cu;
            // 0x14cb90: 0x32220800  andi        $v0, $s1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CDBCu;
            goto label_14cdbc;
        }
    }
    ctx->pc = 0x14CB94u;
    // 0x14cb94: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x14cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x14cb98: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14cb9c: 0x8c455820  lw          $a1, 0x5820($v0)
    ctx->pc = 0x14cb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22560)));
    // 0x14cba0: 0x8e460044  lw          $a2, 0x44($s2)
    ctx->pc = 0x14cba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x14cba4: 0x30640020  andi        $a0, $v1, 0x20
    ctx->pc = 0x14cba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x14cba8: 0x8f8382f0  lw          $v1, -0x7D10($gp)
    ctx->pc = 0x14cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x14cbac: 0x803827  not         $a3, $a0
    ctx->pc = 0x14cbacu;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x14cbb0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14cbb4: 0x8f8481e4  lw          $a0, -0x7E1C($gp)
    ctx->pc = 0x14cbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935012)));
    // 0x14cbb8: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x14cbb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x14cbbc: 0x8c42586c  lw          $v0, 0x586C($v0)
    ctx->pc = 0x14cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22636)));
    // 0x14cbc0: 0x673824  and         $a3, $v1, $a3
    ctx->pc = 0x14cbc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x14cbc4: 0x8f8381e8  lw          $v1, -0x7E18($gp)
    ctx->pc = 0x14cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935016)));
    // 0x14cbc8: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x14cbc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x14cbcc: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x14cbccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x14cbd0: 0x648825  or          $s1, $v1, $a0
    ctx->pc = 0x14cbd0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x14cbd4: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14CBD4u;
    {
        const bool branch_taken_0x14cbd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cbd4) {
            ctx->pc = 0x14CC04u;
            goto label_14cc04;
        }
    }
    ctx->pc = 0x14CBDCu;
    // 0x14cbdc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14cbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14cbe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14cbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cbe4: 0xc057240  jal         func_15C900
    ctx->pc = 0x14CBE4u;
    SET_GPR_U32(ctx, 31, 0x14CBECu);
    ctx->pc = 0x14CBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBE4u;
            // 0x14cbe8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C900u;
    if (runtime->hasFunction(0x15C900u)) {
        auto targetFn = runtime->lookupFunction(0x15C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBECu; }
        if (ctx->pc != 0x14CBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C900_0x15c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBECu; }
        if (ctx->pc != 0x14CBECu) { return; }
    }
    ctx->pc = 0x14CBECu;
label_14cbec:
    // 0x14cbec: 0xc05724c  jal         func_15C930
    ctx->pc = 0x14CBECu;
    SET_GPR_U32(ctx, 31, 0x14CBF4u);
    ctx->pc = 0x14CBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CBECu;
            // 0x14cbf0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C930u;
    if (runtime->hasFunction(0x15C930u)) {
        auto targetFn = runtime->lookupFunction(0x15C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBF4u; }
        if (ctx->pc != 0x14CBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C930_0x15c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBF4u; }
        if (ctx->pc != 0x14CBF4u) { return; }
    }
    ctx->pc = 0x14CBF4u;
label_14cbf4:
    // 0x14cbf4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14cbf8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14cbfc: 0xac71586c  sw          $s1, 0x586C($v1)
    ctx->pc = 0x14cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22636), GPR_U32(ctx, 17));
    // 0x14cc00: 0xac405870  sw          $zero, 0x5870($v0)
    ctx->pc = 0x14cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22640), GPR_U32(ctx, 0));
label_14cc04:
    // 0x14cc04: 0x56a00004  bnel        $s5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CC04u;
    {
        const bool branch_taken_0x14cc04 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cc04) {
            ctx->pc = 0x14CC08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC04u;
            // 0x14cc08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CC18u;
            goto label_14cc18;
        }
    }
    ctx->pc = 0x14CC0Cu;
    // 0x14cc0c: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x14CC0Cu;
    {
        const bool branch_taken_0x14cc0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc0c) {
            ctx->pc = 0x14CC10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC0Cu;
            // 0x14cc10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CC58u;
            goto label_14cc58;
        }
    }
    ctx->pc = 0x14CC14u;
    // 0x14cc14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14cc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14cc18:
    // 0x14cc18: 0xc05722c  jal         func_15C8B0
    ctx->pc = 0x14CC18u;
    SET_GPR_U32(ctx, 31, 0x14CC20u);
    ctx->pc = 0x15C8B0u;
    if (runtime->hasFunction(0x15C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC20u; }
        if (ctx->pc != 0x14CC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8B0_0x15c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC20u; }
        if (ctx->pc != 0x14CC20u) { return; }
    }
    ctx->pc = 0x14CC20u;
label_14cc20:
    // 0x14cc20: 0xc057234  jal         func_15C8D0
    ctx->pc = 0x14CC20u;
    SET_GPR_U32(ctx, 31, 0x14CC28u);
    ctx->pc = 0x15C8D0u;
    if (runtime->hasFunction(0x15C8D0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC28u; }
        if (ctx->pc != 0x14CC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8D0_0x15c8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC28u; }
        if (ctx->pc != 0x14CC28u) { return; }
    }
    ctx->pc = 0x14CC28u;
label_14cc28:
    // 0x14cc28: 0x52a0000e  beql        $s5, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x14CC28u;
    {
        const bool branch_taken_0x14cc28 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc28) {
            ctx->pc = 0x14CC2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC28u;
            // 0x14cc2c: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CC64u;
            goto label_14cc64;
        }
    }
    ctx->pc = 0x14CC30u;
    // 0x14cc30: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14cc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cc34: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x14cc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x14cc38: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x14cc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cc3c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x14cc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x14cc40: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x14cc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cc44: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x14cc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x14cc48: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14cc4c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x14cc50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14CC50u;
    {
        const bool branch_taken_0x14cc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC50u;
            // 0x14cc54: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cc50) {
            ctx->pc = 0x14CC60u;
            goto label_14cc60;
        }
    }
    ctx->pc = 0x14CC58u;
label_14cc58:
    // 0x14cc58: 0xc057238  jal         func_15C8E0
    ctx->pc = 0x14CC58u;
    SET_GPR_U32(ctx, 31, 0x14CC60u);
    ctx->pc = 0x15C8E0u;
    if (runtime->hasFunction(0x15C8E0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC60u; }
        if (ctx->pc != 0x14CC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8E0_0x15c8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC60u; }
        if (ctx->pc != 0x14CC60u) { return; }
    }
    ctx->pc = 0x14CC60u;
label_14cc60:
    // 0x14cc60: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_14cc64:
    // 0x14cc64: 0x9e470048  lwu         $a3, 0x48($s2)
    ctx->pc = 0x14cc64u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x14cc68: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14cc68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
    // 0x14cc6c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x14cc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14cc70: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14cc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14cc74: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x14cc78: 0x71c38  dsll        $v1, $a3, 16
    ctx->pc = 0x14cc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 16);
    // 0x14cc7c: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x14cc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x14cc80: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x14cc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x14cc84: 0x24a80001  addiu       $t0, $a1, 0x1
    ctx->pc = 0x14cc84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14cc88: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x14cc88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14cc8c: 0xc057540  jal         func_15D500
    ctx->pc = 0x14CC8Cu;
    SET_GPR_U32(ctx, 31, 0x14CC94u);
    ctx->pc = 0x14CC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC8Cu;
            // 0x14cc90: 0xaf8881d4  sw          $t0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC94u; }
        if (ctx->pc != 0x14CC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC94u; }
        if (ctx->pc != 0x14CC94u) { return; }
    }
    ctx->pc = 0x14CC94u;
label_14cc94:
    // 0x14cc94: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14cc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
    // 0x14cc98: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x14cc9c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14cca0: 0xaf8281d4  sw          $v0, -0x7E2C($gp)
    ctx->pc = 0x14cca0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
    // 0x14cca4: 0x9e47003c  lwu         $a3, 0x3C($s2)
    ctx->pc = 0x14cca4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x14cca8: 0xc057540  jal         func_15D500
    ctx->pc = 0x14CCA8u;
    SET_GPR_U32(ctx, 31, 0x14CCB0u);
    ctx->pc = 0x14CCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CCA8u;
            // 0x14ccac: 0x24060047  addiu       $a2, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCB0u; }
        if (ctx->pc != 0x14CCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCB0u; }
        if (ctx->pc != 0x14CCB0u) { return; }
    }
    ctx->pc = 0x14CCB0u;
label_14ccb0:
    // 0x14ccb0: 0x8e470040  lw          $a3, 0x40($s2)
    ctx->pc = 0x14ccb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x14ccb4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x14ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x14ccb8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14ccbc: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14ccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
    // 0x14ccc0: 0x24422030  addiu       $v0, $v0, 0x2030
    ctx->pc = 0x14ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
    // 0x14ccc4: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14ccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x14ccc8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x14ccc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x14cccc: 0x3382b  sltu        $a3, $zero, $v1
    ctx->pc = 0x14ccccu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14ccd0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x14ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14ccd4: 0xaf8381d4  sw          $v1, -0x7E2C($gp)
    ctx->pc = 0x14ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 3));
    // 0x14ccd8: 0x38e30001  xori        $v1, $a3, 0x1
    ctx->pc = 0x14ccd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x14ccdc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x14ccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x14cce0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14cce4: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x14cce4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14cce8: 0xc057540  jal         func_15D500
    ctx->pc = 0x14CCE8u;
    SET_GPR_U32(ctx, 31, 0x14CCF0u);
    ctx->pc = 0x14CCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CCE8u;
            // 0x14ccec: 0x2406004e  addiu       $a2, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCF0u; }
        if (ctx->pc != 0x14CCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCF0u; }
        if (ctx->pc != 0x14CCF0u) { return; }
    }
    ctx->pc = 0x14CCF0u;
label_14ccf0:
    // 0x14ccf0: 0x32220010  andi        $v0, $s1, 0x10
    ctx->pc = 0x14ccf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
    // 0x14ccf4: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x14CCF4u;
    {
        const bool branch_taken_0x14ccf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ccf4) {
            ctx->pc = 0x14CCF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CCF4u;
            // 0x14ccf8: 0x8f8681d4  lw          $a2, -0x7E2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CD98u;
            goto label_14cd98;
        }
    }
    ctx->pc = 0x14CCFCu;
    // 0x14ccfc: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x14ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x14cd00: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x14cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x14cd04: 0x30637f00  andi        $v1, $v1, 0x7F00
    ctx->pc = 0x14cd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32512);
    // 0x14cd08: 0x50620020  beql        $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14CD08u;
    {
        const bool branch_taken_0x14cd08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cd08) {
            ctx->pc = 0x14CD0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD08u;
            // 0x14cd0c: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CD8Cu;
            goto label_14cd8c;
        }
    }
    ctx->pc = 0x14CD10u;
    // 0x14cd10: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x14cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x14cd14: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14CD14u;
    {
        const bool branch_taken_0x14cd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cd14) {
            ctx->pc = 0x14CD88u;
            goto label_14cd88;
        }
    }
    ctx->pc = 0x14CD1Cu;
    // 0x14cd1c: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x14cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x14cd20: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x14CD20u;
    {
        const bool branch_taken_0x14cd20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cd20) {
            ctx->pc = 0x14CD88u;
            goto label_14cd88;
        }
    }
    ctx->pc = 0x14CD28u;
    // 0x14cd28: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x14cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14cd2c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14CD2Cu;
    {
        const bool branch_taken_0x14cd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cd2c) {
            ctx->pc = 0x14CD6Cu;
            goto label_14cd6c;
        }
    }
    ctx->pc = 0x14CD34u;
    // 0x14cd34: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x14cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x14cd38: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CD38u;
    {
        const bool branch_taken_0x14cd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cd38) {
            ctx->pc = 0x14CD48u;
            goto label_14cd48;
        }
    }
    ctx->pc = 0x14CD40u;
    // 0x14cd40: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14CD40u;
    {
        const bool branch_taken_0x14cd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cd40) {
            ctx->pc = 0x14CD88u;
            goto label_14cd88;
        }
    }
    ctx->pc = 0x14CD48u;
label_14cd48:
    // 0x14cd48: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14cd4c: 0x8f8481e0  lw          $a0, -0x7E20($gp)
    ctx->pc = 0x14cd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935008)));
    // 0x14cd50: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x14cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x14cd54: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14cd58: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x14cd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x14cd5c: 0xc04e4f4  jal         func_1393D0
    ctx->pc = 0x14CD5Cu;
    SET_GPR_U32(ctx, 31, 0x14CD64u);
    ctx->pc = 0x14CD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD5Cu;
            // 0x14cd60: 0xac435828  sw          $v1, 0x5828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1393D0u;
    if (runtime->hasFunction(0x1393D0u)) {
        auto targetFn = runtime->lookupFunction(0x1393D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD64u; }
        if (ctx->pc != 0x14CD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001393D0_0x1393d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD64u; }
        if (ctx->pc != 0x14CD64u) { return; }
    }
    ctx->pc = 0x14CD64u;
label_14cd64:
    // 0x14cd64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14CD64u;
    {
        const bool branch_taken_0x14cd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cd64) {
            ctx->pc = 0x14CD88u;
            goto label_14cd88;
        }
    }
    ctx->pc = 0x14CD6Cu;
label_14cd6c:
    // 0x14cd6c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14cd70: 0x8f8481e0  lw          $a0, -0x7E20($gp)
    ctx->pc = 0x14cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935008)));
    // 0x14cd74: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x14cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x14cd78: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14cd7c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x14cd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x14cd80: 0xc04e4f4  jal         func_1393D0
    ctx->pc = 0x14CD80u;
    SET_GPR_U32(ctx, 31, 0x14CD88u);
    ctx->pc = 0x14CD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD80u;
            // 0x14cd84: 0xac435828  sw          $v1, 0x5828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1393D0u;
    if (runtime->hasFunction(0x1393D0u)) {
        auto targetFn = runtime->lookupFunction(0x1393D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD88u; }
        if (ctx->pc != 0x14CD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001393D0_0x1393d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD88u; }
        if (ctx->pc != 0x14CD88u) { return; }
    }
    ctx->pc = 0x14CD88u;
label_14cd88:
    // 0x14cd88: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x14cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_14cd8c:
    // 0x14cd8c: 0xc0530e4  jal         func_14C390
    ctx->pc = 0x14CD8Cu;
    SET_GPR_U32(ctx, 31, 0x14CD94u);
    ctx->pc = 0x14C390u;
    if (runtime->hasFunction(0x14C390u)) {
        auto targetFn = runtime->lookupFunction(0x14C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD94u; }
        if (ctx->pc != 0x14CD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C390_0x14c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD94u; }
        if (ctx->pc != 0x14CD94u) { return; }
    }
    ctx->pc = 0x14CD94u;
label_14cd94:
    // 0x14cd94: 0x8f8681d4  lw          $a2, -0x7E2C($gp)
    ctx->pc = 0x14cd94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_14cd98:
    // 0x14cd98: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14cd9c: 0x24847980  addiu       $a0, $a0, 0x7980
    ctx->pc = 0x14cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31104));
    // 0x14cda0: 0xc05750c  jal         func_15D430
    ctx->pc = 0x14CDA0u;
    SET_GPR_U32(ctx, 31, 0x14CDA8u);
    ctx->pc = 0x14CDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CDA0u;
            // 0x14cda4: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CDA8u; }
        if (ctx->pc != 0x14CDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CDA8u; }
        if (ctx->pc != 0x14CDA8u) { return; }
    }
    ctx->pc = 0x14CDA8u;
label_14cda8:
    // 0x14cda8: 0xaf8281d0  sw          $v0, -0x7E30($gp)
    ctx->pc = 0x14cda8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934992), GPR_U32(ctx, 2));
    // 0x14cdac: 0xc057528  jal         func_15D4A0
    ctx->pc = 0x14CDACu;
    SET_GPR_U32(ctx, 31, 0x14CDB4u);
    ctx->pc = 0x14CDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CDACu;
            // 0x14cdb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CDB4u; }
        if (ctx->pc != 0x14CDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CDB4u; }
        if (ctx->pc != 0x14CDB4u) { return; }
    }
    ctx->pc = 0x14CDB4u;
label_14cdb4:
    // 0x14cdb4: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x14CDB4u;
    {
        const bool branch_taken_0x14cdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CDB4u;
            // 0x14cdb8: 0x8f8381a8  lw          $v1, -0x7E58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cdb4) {
            ctx->pc = 0x14D134u;
            goto label_14d134;
        }
    }
    ctx->pc = 0x14CDBCu;
label_14cdbc:
    // 0x14cdbc: 0x104000dc  beqz        $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x14CDBCu;
    {
        const bool branch_taken_0x14cdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cdbc) {
            ctx->pc = 0x14D130u;
            goto label_14d130;
        }
    }
    ctx->pc = 0x14CDC4u;
    // 0x14cdc4: 0x8e730004  lw          $s3, 0x4($s3)
    ctx->pc = 0x14cdc4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14cdc8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14cdcc: 0x8c455820  lw          $a1, 0x5820($v0)
    ctx->pc = 0x14cdccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22560)));
    // 0x14cdd0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14cdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14cdd4: 0x8f8882f0  lw          $t0, -0x7D10($gp)
    ctx->pc = 0x14cdd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x14cdd8: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x14cdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x14cddc: 0x8e660044  lw          $a2, 0x44($s3)
    ctx->pc = 0x14cddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x14cde0: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x14cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x14cde4: 0x30670020  andi        $a3, $v1, 0x20
    ctx->pc = 0x14cde4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x14cde8: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x14cde8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x14cdec: 0x8e6300b4  lw          $v1, 0xB4($s3)
    ctx->pc = 0x14cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x14cdf0: 0xe03027  not         $a2, $a3
    ctx->pc = 0x14cdf0u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 7) | GPR_U64(ctx, 0)));
    // 0x14cdf4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x14cdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x14cdf8: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x14cdf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x14cdfc: 0x401027  not         $v0, $v0
    ctx->pc = 0x14cdfcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x14ce00: 0xc53825  or          $a3, $a2, $a1
    ctx->pc = 0x14ce00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x14ce04: 0x1022824  and         $a1, $t0, $v0
    ctx->pc = 0x14ce04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x14ce08: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x14ce08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x14ce0c: 0x8f8281e4  lw          $v0, -0x7E1C($gp)
    ctx->pc = 0x14ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935012)));
    // 0x14ce10: 0x34660200  ori         $a2, $v1, 0x200
    ctx->pc = 0x14ce10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x14ce14: 0x8f8581e8  lw          $a1, -0x7E18($gp)
    ctx->pc = 0x14ce14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935016)));
    // 0x14ce18: 0xe21824  and         $v1, $a3, $v0
    ctx->pc = 0x14ce18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x14ce1c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x14ce1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x14ce20: 0xa39025  or          $s2, $a1, $v1
    ctx->pc = 0x14ce20u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x14ce24: 0xa28825  or          $s1, $a1, $v0
    ctx->pc = 0x14ce24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x14ce28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14ce28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ce2c: 0xc057240  jal         func_15C900
    ctx->pc = 0x14CE2Cu;
    SET_GPR_U32(ctx, 31, 0x14CE34u);
    ctx->pc = 0x14CE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CE2Cu;
            // 0x14ce30: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C900u;
    if (runtime->hasFunction(0x15C900u)) {
        auto targetFn = runtime->lookupFunction(0x15C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE34u; }
        if (ctx->pc != 0x14CE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C900_0x15c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE34u; }
        if (ctx->pc != 0x14CE34u) { return; }
    }
    ctx->pc = 0x14CE34u;
label_14ce34:
    // 0x14ce34: 0xc05724c  jal         func_15C930
    ctx->pc = 0x14CE34u;
    SET_GPR_U32(ctx, 31, 0x14CE3Cu);
    ctx->pc = 0x14CE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CE34u;
            // 0x14ce38: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C930u;
    if (runtime->hasFunction(0x15C930u)) {
        auto targetFn = runtime->lookupFunction(0x15C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE3Cu; }
        if (ctx->pc != 0x14CE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C930_0x15c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE3Cu; }
        if (ctx->pc != 0x14CE3Cu) { return; }
    }
    ctx->pc = 0x14CE3Cu;
label_14ce3c:
    // 0x14ce3c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14ce40: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14ce44: 0xac72586c  sw          $s2, 0x586C($v1)
    ctx->pc = 0x14ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22636), GPR_U32(ctx, 18));
    // 0x14ce48: 0x12a0001c  beqz        $s5, . + 4 + (0x1C << 2)
    ctx->pc = 0x14CE48u;
    {
        const bool branch_taken_0x14ce48 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CE48u;
            // 0x14ce4c: 0xac515870  sw          $s1, 0x5870($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22640), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ce48) {
            ctx->pc = 0x14CEBCu;
            goto label_14cebc;
        }
    }
    ctx->pc = 0x14CE50u;
    // 0x14ce50: 0xc05722c  jal         func_15C8B0
    ctx->pc = 0x14CE50u;
    SET_GPR_U32(ctx, 31, 0x14CE58u);
    ctx->pc = 0x14CE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CE50u;
            // 0x14ce54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C8B0u;
    if (runtime->hasFunction(0x15C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE58u; }
        if (ctx->pc != 0x14CE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8B0_0x15c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE58u; }
        if (ctx->pc != 0x14CE58u) { return; }
    }
    ctx->pc = 0x14CE58u;
label_14ce58:
    // 0x14ce58: 0xc057234  jal         func_15C8D0
    ctx->pc = 0x14CE58u;
    SET_GPR_U32(ctx, 31, 0x14CE60u);
    ctx->pc = 0x15C8D0u;
    if (runtime->hasFunction(0x15C8D0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE60u; }
        if (ctx->pc != 0x14CE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8D0_0x15c8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE60u; }
        if (ctx->pc != 0x14CE60u) { return; }
    }
    ctx->pc = 0x14CE60u;
label_14ce60:
    // 0x14ce60: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14ce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ce64: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x14ce64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x14ce68: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x14ce68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x14ce6c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x14ce6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ce70: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x14ce70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x14ce74: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x14ce74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ce78: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x14ce78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x14ce7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14ce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14ce80: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x14ce84: 0xc057230  jal         func_15C8C0
    ctx->pc = 0x14CE84u;
    SET_GPR_U32(ctx, 31, 0x14CE8Cu);
    ctx->pc = 0x14CE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CE84u;
            // 0x14ce88: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C8C0u;
    if (runtime->hasFunction(0x15C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE8Cu; }
        if (ctx->pc != 0x14CE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8C0_0x15c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE8Cu; }
        if (ctx->pc != 0x14CE8Cu) { return; }
    }
    ctx->pc = 0x14CE8Cu;
label_14ce8c:
    // 0x14ce8c: 0xc057234  jal         func_15C8D0
    ctx->pc = 0x14CE8Cu;
    SET_GPR_U32(ctx, 31, 0x14CE94u);
    ctx->pc = 0x15C8D0u;
    if (runtime->hasFunction(0x15C8D0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE94u; }
        if (ctx->pc != 0x14CE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8D0_0x15c8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CE94u; }
        if (ctx->pc != 0x14CE94u) { return; }
    }
    ctx->pc = 0x14CE94u;
label_14ce94:
    // 0x14ce94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ce98: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x14ce98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x14ce9c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x14ce9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cea0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x14cea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x14cea4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x14cea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cea8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x14cea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x14ceac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14ceb0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14ceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x14ceb4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14CEB4u;
    {
        const bool branch_taken_0x14ceb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CEB4u;
            // 0x14ceb8: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ceb4) {
            ctx->pc = 0x14CEF0u;
            goto label_14cef0;
        }
    }
    ctx->pc = 0x14CEBCu;
label_14cebc:
    // 0x14cebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14cec0: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14CEC0u;
    {
        const bool branch_taken_0x14cec0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x14cec0) {
            ctx->pc = 0x14CEC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CEC0u;
            // 0x14cec4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CEE0u;
            goto label_14cee0;
        }
    }
    ctx->pc = 0x14CEC8u;
    // 0x14cec8: 0xc05722c  jal         func_15C8B0
    ctx->pc = 0x14CEC8u;
    SET_GPR_U32(ctx, 31, 0x14CED0u);
    ctx->pc = 0x14CECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CEC8u;
            // 0x14cecc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C8B0u;
    if (runtime->hasFunction(0x15C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CED0u; }
        if (ctx->pc != 0x14CED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8B0_0x15c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CED0u; }
        if (ctx->pc != 0x14CED0u) { return; }
    }
    ctx->pc = 0x14CED0u;
label_14ced0:
    // 0x14ced0: 0xc057230  jal         func_15C8C0
    ctx->pc = 0x14CED0u;
    SET_GPR_U32(ctx, 31, 0x14CED8u);
    ctx->pc = 0x14CED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CED0u;
            // 0x14ced4: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C8C0u;
    if (runtime->hasFunction(0x15C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CED8u; }
        if (ctx->pc != 0x14CED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8C0_0x15c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CED8u; }
        if (ctx->pc != 0x14CED8u) { return; }
    }
    ctx->pc = 0x14CED8u;
label_14ced8:
    // 0x14ced8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14CED8u;
    {
        const bool branch_taken_0x14ced8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CED8u;
            // 0x14cedc: 0x8e630050  lw          $v1, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ced8) {
            ctx->pc = 0x14CEF4u;
            goto label_14cef4;
        }
    }
    ctx->pc = 0x14CEE0u;
label_14cee0:
    // 0x14cee0: 0xc057238  jal         func_15C8E0
    ctx->pc = 0x14CEE0u;
    SET_GPR_U32(ctx, 31, 0x14CEE8u);
    ctx->pc = 0x15C8E0u;
    if (runtime->hasFunction(0x15C8E0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CEE8u; }
        if (ctx->pc != 0x14CEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8E0_0x15c8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CEE8u; }
        if (ctx->pc != 0x14CEE8u) { return; }
    }
    ctx->pc = 0x14CEE8u;
label_14cee8:
    // 0x14cee8: 0xc05723c  jal         func_15C8F0
    ctx->pc = 0x14CEE8u;
    SET_GPR_U32(ctx, 31, 0x14CEF0u);
    ctx->pc = 0x14CEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CEE8u;
            // 0x14ceec: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C8F0u;
    if (runtime->hasFunction(0x15C8F0u)) {
        auto targetFn = runtime->lookupFunction(0x15C8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CEF0u; }
        if (ctx->pc != 0x14CEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C8F0_0x15c8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CEF0u; }
        if (ctx->pc != 0x14CEF0u) { return; }
    }
    ctx->pc = 0x14CEF0u;
label_14cef0:
    // 0x14cef0: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x14cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_14cef4:
    // 0x14cef4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x14cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x14cef8: 0x30637f00  andi        $v1, $v1, 0x7F00
    ctx->pc = 0x14cef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32512);
    // 0x14cefc: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x14CEFCu;
    {
        const bool branch_taken_0x14cefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14CF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CEFCu;
            // 0x14cf00: 0x8e7000c0  lw          $s0, 0xC0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cefc) {
            ctx->pc = 0x14CF7Cu;
            goto label_14cf7c;
        }
    }
    ctx->pc = 0x14CF04u;
    // 0x14cf04: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x14cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x14cf08: 0x5062001d  beql        $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x14CF08u;
    {
        const bool branch_taken_0x14cf08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cf08) {
            ctx->pc = 0x14CF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF08u;
            // 0x14cf0c: 0x32037f00  andi        $v1, $s0, 0x7F00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14CF80u;
            goto label_14cf80;
        }
    }
    ctx->pc = 0x14CF10u;
    // 0x14cf10: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x14cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x14cf14: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x14CF14u;
    {
        const bool branch_taken_0x14cf14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cf14) {
            ctx->pc = 0x14CF7Cu;
            goto label_14cf7c;
        }
    }
    ctx->pc = 0x14CF1Cu;
    // 0x14cf1c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x14cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14cf20: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14CF20u;
    {
        const bool branch_taken_0x14cf20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cf20) {
            ctx->pc = 0x14CF60u;
            goto label_14cf60;
        }
    }
    ctx->pc = 0x14CF28u;
    // 0x14cf28: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x14cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x14cf2c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CF2Cu;
    {
        const bool branch_taken_0x14cf2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cf2c) {
            ctx->pc = 0x14CF3Cu;
            goto label_14cf3c;
        }
    }
    ctx->pc = 0x14CF34u;
    // 0x14cf34: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14CF34u;
    {
        const bool branch_taken_0x14cf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cf34) {
            ctx->pc = 0x14CF7Cu;
            goto label_14cf7c;
        }
    }
    ctx->pc = 0x14CF3Cu;
label_14cf3c:
    // 0x14cf3c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14cf40: 0x8f8481e0  lw          $a0, -0x7E20($gp)
    ctx->pc = 0x14cf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935008)));
    // 0x14cf44: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x14cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x14cf48: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14cf4c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x14cf4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x14cf50: 0xc04e4f4  jal         func_1393D0
    ctx->pc = 0x14CF50u;
    SET_GPR_U32(ctx, 31, 0x14CF58u);
    ctx->pc = 0x14CF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF50u;
            // 0x14cf54: 0xac435828  sw          $v1, 0x5828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1393D0u;
    if (runtime->hasFunction(0x1393D0u)) {
        auto targetFn = runtime->lookupFunction(0x1393D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CF58u; }
        if (ctx->pc != 0x14CF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001393D0_0x1393d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CF58u; }
        if (ctx->pc != 0x14CF58u) { return; }
    }
    ctx->pc = 0x14CF58u;
label_14cf58:
    // 0x14cf58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14CF58u;
    {
        const bool branch_taken_0x14cf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cf58) {
            ctx->pc = 0x14CF7Cu;
            goto label_14cf7c;
        }
    }
    ctx->pc = 0x14CF60u;
label_14cf60:
    // 0x14cf60: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14cf64: 0x8f8481e0  lw          $a0, -0x7E20($gp)
    ctx->pc = 0x14cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935008)));
    // 0x14cf68: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x14cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x14cf6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14cf70: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x14cf70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x14cf74: 0xc04e4f4  jal         func_1393D0
    ctx->pc = 0x14CF74u;
    SET_GPR_U32(ctx, 31, 0x14CF7Cu);
    ctx->pc = 0x14CF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF74u;
            // 0x14cf78: 0xac435828  sw          $v1, 0x5828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1393D0u;
    if (runtime->hasFunction(0x1393D0u)) {
        auto targetFn = runtime->lookupFunction(0x1393D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CF7Cu; }
        if (ctx->pc != 0x14CF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001393D0_0x1393d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CF7Cu; }
        if (ctx->pc != 0x14CF7Cu) { return; }
    }
    ctx->pc = 0x14CF7Cu;
label_14cf7c:
    // 0x14cf7c: 0x32037f00  andi        $v1, $s0, 0x7F00
    ctx->pc = 0x14cf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32512);
label_14cf80:
    // 0x14cf80: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x14cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x14cf84: 0x5062002f  beql        $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x14CF84u;
    {
        const bool branch_taken_0x14cf84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cf84) {
            ctx->pc = 0x14CF88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14CF84u;
            // 0x14cf88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D044u;
            goto label_14d044;
        }
    }
    ctx->pc = 0x14CF8Cu;
    // 0x14cf8c: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x14cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x14cf90: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x14CF90u;
    {
        const bool branch_taken_0x14cf90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cf90) {
            ctx->pc = 0x14D040u;
            goto label_14d040;
        }
    }
    ctx->pc = 0x14CF98u;
    // 0x14cf98: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x14cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x14cf9c: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x14CF9Cu;
    {
        const bool branch_taken_0x14cf9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cf9c) {
            ctx->pc = 0x14D040u;
            goto label_14d040;
        }
    }
    ctx->pc = 0x14CFA4u;
    // 0x14cfa4: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x14cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x14cfa8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x14CFA8u;
    {
        const bool branch_taken_0x14cfa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cfa8) {
            ctx->pc = 0x14D018u;
            goto label_14d018;
        }
    }
    ctx->pc = 0x14CFB0u;
    // 0x14cfb0: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x14cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x14cfb4: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14CFB4u;
    {
        const bool branch_taken_0x14cfb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cfb4) {
            ctx->pc = 0x14CFF4u;
            goto label_14cff4;
        }
    }
    ctx->pc = 0x14CFBCu;
    // 0x14cfbc: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x14cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x14cfc0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CFC0u;
    {
        const bool branch_taken_0x14cfc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14cfc0) {
            ctx->pc = 0x14CFD0u;
            goto label_14cfd0;
        }
    }
    ctx->pc = 0x14CFC8u;
    // 0x14cfc8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x14CFC8u;
    {
        const bool branch_taken_0x14cfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CFC8u;
            // 0x14cfcc: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cfc8) {
            ctx->pc = 0x14D030u;
            goto label_14d030;
        }
    }
    ctx->pc = 0x14CFD0u;
label_14cfd0:
    // 0x14cfd0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14cfd4: 0x8f8481e0  lw          $a0, -0x7E20($gp)
    ctx->pc = 0x14cfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935008)));
    // 0x14cfd8: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x14cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x14cfdc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14cfe0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x14cfe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x14cfe4: 0xc04e4f4  jal         func_1393D0
    ctx->pc = 0x14CFE4u;
    SET_GPR_U32(ctx, 31, 0x14CFECu);
    ctx->pc = 0x14CFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CFE4u;
            // 0x14cfe8: 0xac435828  sw          $v1, 0x5828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1393D0u;
    if (runtime->hasFunction(0x1393D0u)) {
        auto targetFn = runtime->lookupFunction(0x1393D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CFECu; }
        if (ctx->pc != 0x14CFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001393D0_0x1393d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CFECu; }
        if (ctx->pc != 0x14CFECu) { return; }
    }
    ctx->pc = 0x14CFECu;
label_14cfec:
    // 0x14cfec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14CFECu;
    {
        const bool branch_taken_0x14cfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cfec) {
            ctx->pc = 0x14D040u;
            goto label_14d040;
        }
    }
    ctx->pc = 0x14CFF4u;
label_14cff4:
    // 0x14cff4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14cff8: 0x8f8481e0  lw          $a0, -0x7E20($gp)
    ctx->pc = 0x14cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935008)));
    // 0x14cffc: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x14cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x14d000: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d004: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x14d004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x14d008: 0xc04e4f4  jal         func_1393D0
    ctx->pc = 0x14D008u;
    SET_GPR_U32(ctx, 31, 0x14D010u);
    ctx->pc = 0x14D00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D008u;
            // 0x14d00c: 0xac435828  sw          $v1, 0x5828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1393D0u;
    if (runtime->hasFunction(0x1393D0u)) {
        auto targetFn = runtime->lookupFunction(0x1393D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D010u; }
        if (ctx->pc != 0x14D010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001393D0_0x1393d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D010u; }
        if (ctx->pc != 0x14D010u) { return; }
    }
    ctx->pc = 0x14D010u;
label_14d010:
    // 0x14d010: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14D010u;
    {
        const bool branch_taken_0x14d010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d010) {
            ctx->pc = 0x14D040u;
            goto label_14d040;
        }
    }
    ctx->pc = 0x14D018u;
label_14d018:
    // 0x14d018: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d01c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d020: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x14d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x14d024: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x14d024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x14d028: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14D028u;
    {
        const bool branch_taken_0x14d028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D028u;
            // 0x14d02c: 0xac435828  sw          $v1, 0x5828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d028) {
            ctx->pc = 0x14D040u;
            goto label_14d040;
        }
    }
    ctx->pc = 0x14D030u;
label_14d030:
    // 0x14d030: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d034: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x14d034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x14d038: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x14d038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x14d03c: 0xac435828  sw          $v1, 0x5828($v0)
    ctx->pc = 0x14d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
label_14d040:
    // 0x14d040: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14d040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d044:
    // 0x14d044: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x14d044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_14d048:
    // 0x14d048: 0x9e080048  lwu         $t0, 0x48($s0)
    ctx->pc = 0x14d048u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x14d04c: 0x26220042  addiu       $v0, $s1, 0x42
    ctx->pc = 0x14d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 66));
    // 0x14d050: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x14d050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14d054: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x14d054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14d058: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x14d058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14d05c: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14d05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
    // 0x14d060: 0x83c38  dsll        $a3, $t0, 16
    ctx->pc = 0x14d060u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << 16);
    // 0x14d064: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14d064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14d068: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x14d068u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x14d06c: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14d06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x14d070: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x14d070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x14d074: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x14d074u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x14d078: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14d078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14d07c: 0xc057540  jal         func_15D500
    ctx->pc = 0x14D07Cu;
    SET_GPR_U32(ctx, 31, 0x14D084u);
    ctx->pc = 0x14D080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D07Cu;
            // 0x14d080: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D084u; }
        if (ctx->pc != 0x14D084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D084u; }
        if (ctx->pc != 0x14D084u) { return; }
    }
    ctx->pc = 0x14D084u;
label_14d084:
    // 0x14d084: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14d084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
    // 0x14d088: 0x26220047  addiu       $v0, $s1, 0x47
    ctx->pc = 0x14d088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 71));
    // 0x14d08c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x14d08cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14d090: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14d090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x14d094: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14d094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14d098: 0xaf8281d4  sw          $v0, -0x7E2C($gp)
    ctx->pc = 0x14d098u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
    // 0x14d09c: 0x9e07003c  lwu         $a3, 0x3C($s0)
    ctx->pc = 0x14d09cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x14d0a0: 0xc057540  jal         func_15D500
    ctx->pc = 0x14D0A0u;
    SET_GPR_U32(ctx, 31, 0x14D0A8u);
    ctx->pc = 0x14D0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D0A0u;
            // 0x14d0a4: 0x6303f  dsra32      $a2, $a2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0A8u; }
        if (ctx->pc != 0x14D0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0A8u; }
        if (ctx->pc != 0x14D0A8u) { return; }
    }
    ctx->pc = 0x14D0A8u;
label_14d0a8:
    // 0x14d0a8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x14d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x14d0ac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x14d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x14d0b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14d0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14d0b4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x14D0B4u;
    {
        const bool branch_taken_0x14d0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d0b4) {
            ctx->pc = 0x14D0B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D0B4u;
            // 0x14d0b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D0C0u;
            goto label_14d0c0;
        }
    }
    ctx->pc = 0x14D0BCu;
    // 0x14d0bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14d0bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d0c0:
    // 0x14d0c0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x14d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x14d0c4: 0x2624004e  addiu       $a0, $s1, 0x4E
    ctx->pc = 0x14d0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 78));
    // 0x14d0c8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14d0cc: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x14d0ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x14d0d0: 0x24422030  addiu       $v0, $v0, 0x2030
    ctx->pc = 0x14d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
    // 0x14d0d4: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x14d0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
    // 0x14d0d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d0dc: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x14d0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x14d0e0: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x14d0e0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14d0e4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x14d0e4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x14d0e8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14d0ec: 0xc057540  jal         func_15D500
    ctx->pc = 0x14D0ECu;
    SET_GPR_U32(ctx, 31, 0x14D0F4u);
    ctx->pc = 0x14D0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D0ECu;
            // 0x14d0f0: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0F4u; }
        if (ctx->pc != 0x14D0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D0F4u; }
        if (ctx->pc != 0x14D0F4u) { return; }
    }
    ctx->pc = 0x14D0F4u;
label_14d0f4:
    // 0x14d0f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14d0f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14d0f8: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x14d0f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14d0fc: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x14D0FCu;
    {
        const bool branch_taken_0x14d0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D0FCu;
            // 0x14d100: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d0fc) {
            ctx->pc = 0x14D048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d048;
        }
    }
    ctx->pc = 0x14D104u;
    // 0x14d104: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x14d104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x14d108: 0xc052f48  jal         func_14BD20
    ctx->pc = 0x14D108u;
    SET_GPR_U32(ctx, 31, 0x14D110u);
    ctx->pc = 0x14D10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D108u;
            // 0x14d10c: 0x266500c0  addiu       $a1, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14BD20u;
    if (runtime->hasFunction(0x14BD20u)) {
        auto targetFn = runtime->lookupFunction(0x14BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D110u; }
        if (ctx->pc != 0x14D110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014BD20_0x14bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D110u; }
        if (ctx->pc != 0x14D110u) { return; }
    }
    ctx->pc = 0x14D110u;
label_14d110:
    // 0x14d110: 0x8f8681d4  lw          $a2, -0x7E2C($gp)
    ctx->pc = 0x14d110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
    // 0x14d114: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14d114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14d118: 0x24847980  addiu       $a0, $a0, 0x7980
    ctx->pc = 0x14d118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31104));
    // 0x14d11c: 0xc05750c  jal         func_15D430
    ctx->pc = 0x14D11Cu;
    SET_GPR_U32(ctx, 31, 0x14D124u);
    ctx->pc = 0x14D120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D11Cu;
            // 0x14d120: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D124u; }
        if (ctx->pc != 0x14D124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D124u; }
        if (ctx->pc != 0x14D124u) { return; }
    }
    ctx->pc = 0x14D124u;
label_14d124:
    // 0x14d124: 0xaf8281d0  sw          $v0, -0x7E30($gp)
    ctx->pc = 0x14d124u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934992), GPR_U32(ctx, 2));
    // 0x14d128: 0xc057528  jal         func_15D4A0
    ctx->pc = 0x14D128u;
    SET_GPR_U32(ctx, 31, 0x14D130u);
    ctx->pc = 0x14D12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D128u;
            // 0x14d12c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D130u; }
        if (ctx->pc != 0x14D130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D130u; }
        if (ctx->pc != 0x14D130u) { return; }
    }
    ctx->pc = 0x14D130u;
label_14d130:
    // 0x14d130: 0x8f8381a8  lw          $v1, -0x7E58($gp)
    ctx->pc = 0x14d130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934952)));
label_14d134:
    // 0x14d134: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d138: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x14D138u;
    {
        const bool branch_taken_0x14d138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D138u;
            // 0x14d13c: 0xac405830  sw          $zero, 0x5830($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d138) {
            ctx->pc = 0x14D178u;
            goto label_14d178;
        }
    }
    ctx->pc = 0x14D140u;
    // 0x14d140: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d144: 0x8c4257e0  lw          $v0, 0x57E0($v0)
    ctx->pc = 0x14d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22496)));
    // 0x14d148: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D148u;
    {
        const bool branch_taken_0x14d148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d148) {
            ctx->pc = 0x14D14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D148u;
            // 0x14d14c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D170u;
            goto label_14d170;
        }
    }
    ctx->pc = 0x14D150u;
    // 0x14d150: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d154: 0x8c425810  lw          $v0, 0x5810($v0)
    ctx->pc = 0x14d154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22544)));
    // 0x14d158: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14D158u;
    {
        const bool branch_taken_0x14d158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d158) {
            ctx->pc = 0x14D178u;
            goto label_14d178;
        }
    }
    ctx->pc = 0x14D160u;
    // 0x14d160: 0x8f8281a0  lw          $v0, -0x7E60($gp)
    ctx->pc = 0x14d160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934944)));
    // 0x14d164: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D164u;
    {
        const bool branch_taken_0x14d164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d164) {
            ctx->pc = 0x14D178u;
            goto label_14d178;
        }
    }
    ctx->pc = 0x14D16Cu;
    // 0x14d16c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14d170:
    // 0x14d170: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d174: 0xac435830  sw          $v1, 0x5830($v0)
    ctx->pc = 0x14d174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22576), GPR_U32(ctx, 3));
label_14d178:
    // 0x14d178: 0x52c00008  beql        $s6, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14D178u;
    {
        const bool branch_taken_0x14d178 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d178) {
            ctx->pc = 0x14D17Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D178u;
            // 0x14d17c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D19Cu;
            goto label_14d19c;
        }
    }
    ctx->pc = 0x14D180u;
    // 0x14d180: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14d180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14d184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d188: 0xc057240  jal         func_15C900
    ctx->pc = 0x14D188u;
    SET_GPR_U32(ctx, 31, 0x14D190u);
    ctx->pc = 0x14D18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D188u;
            // 0x14d18c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C900u;
    if (runtime->hasFunction(0x15C900u)) {
        auto targetFn = runtime->lookupFunction(0x15C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D190u; }
        if (ctx->pc != 0x14D190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C900_0x15c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D190u; }
        if (ctx->pc != 0x14D190u) { return; }
    }
    ctx->pc = 0x14D190u;
label_14d190:
    // 0x14d190: 0xc05724c  jal         func_15C930
    ctx->pc = 0x14D190u;
    SET_GPR_U32(ctx, 31, 0x14D198u);
    ctx->pc = 0x14D194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D190u;
            // 0x14d194: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C930u;
    if (runtime->hasFunction(0x15C930u)) {
        auto targetFn = runtime->lookupFunction(0x15C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D198u; }
        if (ctx->pc != 0x14D198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C930_0x15c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D198u; }
        if (ctx->pc != 0x14D198u) { return; }
    }
    ctx->pc = 0x14D198u;
label_14d198:
    // 0x14d198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14d19c:
    // 0x14d19c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x14d19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14d1a0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14d1a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14d1a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14d1a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14d1a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14d1a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d1ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14d1acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d1b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14d1b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d1b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d1b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d1b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x14D1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D1BCu;
            // 0x14d1c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14D1C4u;
    // 0x14d1c4: 0x0  nop
    ctx->pc = 0x14d1c4u;
    // NOP
    // 0x14d1c8: 0x0  nop
    ctx->pc = 0x14d1c8u;
    // NOP
    // 0x14d1cc: 0x0  nop
    ctx->pc = 0x14d1ccu;
    // NOP
    // 0x14d1d0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x14d1d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14d1d4: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x14d1d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x14d1d8: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x14d1d8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x14d1dc: 0x4a8311be  vmulaz.y    $ACC, $vf2, $vf3z
    ctx->pc = 0x14d1dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x14d1e0: 0x4a82190e  vmsubz.y    $vf4, $vf3, $vf2z
    ctx->pc = 0x14d1e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14d1e4: 0x4b0219be  vmulaz.x    $ACC, $vf3, $vf2z
    ctx->pc = 0x14d1e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x14d1e8: 0x4b03114e  vmsubz.x    $vf5, $vf2, $vf3z
    ctx->pc = 0x14d1e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14d1ec: 0x4b0311bd  vmulay.x    $ACC, $vf2, $vf3y
    ctx->pc = 0x14d1ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x14d1f0: 0x4b02198d  vmsuby.x    $vf6, $vf3, $vf2y
    ctx->pc = 0x14d1f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14d1f4: 0x4b040101  vaddy.x     $vf4, $vf0, $vf4y
    ctx->pc = 0x14d1f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14d1f8: 0x4a8119be  vmulaz.y    $ACC, $vf3, $vf1z
    ctx->pc = 0x14d1f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x14d1fc: 0x4a83090e  vmsubz.y    $vf4, $vf1, $vf3z
    ctx->pc = 0x14d1fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14d200: 0x4a4119bc  vmulax.z    $ACC, $vf3, $vf1x
    ctx->pc = 0x14d200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x14d204: 0x4a43094c  vmsubx.z    $vf5, $vf1, $vf3x
    ctx->pc = 0x14d204u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14d208: 0xcca00000  pref        0x00, 0x0($a1)
    ctx->pc = 0x14d208u;
    // PREF instruction (ignored)
    // 0x14d20c: 0x4a8309bc  vmulax.y    $ACC, $vf1, $vf3x
    ctx->pc = 0x14d20cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x14d210: 0x4a81198c  vmsubx.y    $vf6, $vf3, $vf1x
    ctx->pc = 0x14d210u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14d214: 0x4a850142  vaddz.y     $vf5, $vf0, $vf5z
    ctx->pc = 0x14d214u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x14d218: 0x4a4111bd  vmulay.z    $ACC, $vf2, $vf1y
    ctx->pc = 0x14d218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x14d21c: 0x4a42090d  vmsuby.z    $vf4, $vf1, $vf2y
    ctx->pc = 0x14d21cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14d220: 0x4a4209bc  vmulax.z    $ACC, $vf1, $vf2x
    ctx->pc = 0x14d220u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x14d224: 0x4a41114c  vmsubx.z    $vf5, $vf2, $vf1x
    ctx->pc = 0x14d224u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14d228: 0x4a8111bc  vmulax.y    $ACC, $vf2, $vf1x
    ctx->pc = 0x14d228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x14d22c: 0x4a8209cc  vmsubx.y    $vf7, $vf1, $vf2x
    ctx->pc = 0x14d22cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14d230: 0x4a470181  vaddy.z     $vf6, $vf0, $vf7y
    ctx->pc = 0x14d230u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x14d234: 0x4b0121bc  vmulax.x    $ACC, $vf4, $vf1x
    ctx->pc = 0x14d234u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x14d238: 0x4b0128bd  vmadday.x   $ACC, $vf5, $vf1y
    ctx->pc = 0x14d238u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14d23c: 0x4b01320a  vmaddz.x    $vf8, $vf6, $vf1z
    ctx->pc = 0x14d23cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14d240: 0x4bc82118  vmulx.xyz   $vf4, $vf4, $vf8x
    ctx->pc = 0x14d240u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14d244: 0x4bc82958  vmulx.xyz   $vf5, $vf5, $vf8x
    ctx->pc = 0x14d244u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x14d248: 0x4bc83198  vmulx.xyz   $vf6, $vf6, $vf8x
    ctx->pc = 0x14d248u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x14d24c: 0x4a200118  vmulx.w     $vf4, $vf0, $vf0x
    ctx->pc = 0x14d24cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14d250: 0x4a200158  vmulx.w     $vf5, $vf0, $vf0x
    ctx->pc = 0x14d250u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x14d254: 0x4a200198  vmulx.w     $vf6, $vf0, $vf0x
    ctx->pc = 0x14d254u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x14d258: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x14d258u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14d25c: 0xd8a90010  lqc2        $vf9, 0x10($a1)
    ctx->pc = 0x14d25cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14d260: 0xd8aa0020  lqc2        $vf10, 0x20($a1)
    ctx->pc = 0x14d260u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x14d264: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x14d264u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x14d268: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x14d268u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14d26c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x14d26cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14d270: 0x4be802cb  vmaddw.xyzw $vf11, $vf0, $vf8w
    ctx->pc = 0x14d270u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14d274: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x14d274u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x14d278: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x14d278u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14d27c: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x14d27cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14d280: 0x4be9030b  vmaddw.xyzw $vf12, $vf0, $vf9w
    ctx->pc = 0x14d280u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14d284: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x14d284u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x14d288: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x14d288u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14d28c: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x14d28cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14d290: 0x4bea034b  vmaddw.xyzw $vf13, $vf0, $vf10w
    ctx->pc = 0x14d290u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14d294: 0x4bcb5baa  vmul.xyz    $vf14, $vf11, $vf11
    ctx->pc = 0x14d294u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x14d298: 0x4b0e7381  vaddy.x     $vf14, $vf14, $vf14y
    ctx->pc = 0x14d298u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x14d29c: 0x4b0e7382  vaddz.x     $vf14, $vf14, $vf14z
    ctx->pc = 0x14d29cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x14d2a0: 0x4a0e03bd  .word       0x4A0E03BD                   # vsqrt       $Q, $vf14x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x14d2a0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x14d2a4: 0x4a0003bf  vwaitq
    ctx->pc = 0x14d2a4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x14d2a8: 0x4b0003a0  vaddq.x     $vf14, $vf0, $Q
    ctx->pc = 0x14d2a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x14d2ac: 0x4a0002ff  vnop
    ctx->pc = 0x14d2acu;
    // NOP operation, no action needed for VU0
    // 0x14d2b0: 0x4a0002ff  vnop
    ctx->pc = 0x14d2b0u;
    // NOP operation, no action needed for VU0
    // 0x14d2b4: 0x4a6e03bc  vdiv        $Q, $vf0w, $vf14x
    ctx->pc = 0x14d2b4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x14d2b8: 0x4bcc63ea  vmul.xyz    $vf15, $vf12, $vf12
    ctx->pc = 0x14d2b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x14d2bc: 0x4b0f7bc1  vaddy.x     $vf15, $vf15, $vf15y
    ctx->pc = 0x14d2bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x14d2c0: 0x4b0f7bc2  vaddz.x     $vf15, $vf15, $vf15z
    ctx->pc = 0x14d2c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x14d2c4: 0x4a0003bf  vwaitq
    ctx->pc = 0x14d2c4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x14d2c8: 0x4bc05adc  vmulq.xyz   $vf11, $vf11, $Q
    ctx->pc = 0x14d2c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[11], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x14d2cc: 0x4a0003bf  vwaitq
    ctx->pc = 0x14d2ccu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x14d2d0: 0x4a0f03bd  .word       0x4A0F03BD                   # vsqrt       $Q, $vf15x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x14d2d0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x14d2d4: 0x4a0003bf  vwaitq
    ctx->pc = 0x14d2d4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x14d2d8: 0x4b0003e0  vaddq.x     $vf15, $vf0, $Q
    ctx->pc = 0x14d2d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x14d2dc: 0x4a0002ff  vnop
    ctx->pc = 0x14d2dcu;
    // NOP operation, no action needed for VU0
    // 0x14d2e0: 0x4a0002ff  vnop
    ctx->pc = 0x14d2e0u;
    // NOP operation, no action needed for VU0
    // 0x14d2e4: 0x4a6f03bc  vdiv        $Q, $vf0w, $vf15x
    ctx->pc = 0x14d2e4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x14d2e8: 0x4bcd6aaa  vmul.xyz    $vf10, $vf13, $vf13
    ctx->pc = 0x14d2e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x14d2ec: 0x4b0a5281  vaddy.x     $vf10, $vf10, $vf10y
    ctx->pc = 0x14d2ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x14d2f0: 0x4b0a5282  vaddz.x     $vf10, $vf10, $vf10z
    ctx->pc = 0x14d2f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x14d2f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x14d2f4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x14d2f8: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x14d2f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x14d2fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x14d2fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x14d300: 0x4a0a03bd  .word       0x4A0A03BD                   # vsqrt       $Q, $vf10x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x14d300u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x14d304: 0x4a0003bf  vwaitq
    ctx->pc = 0x14d304u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x14d308: 0x4b0002a0  vaddq.x     $vf10, $vf0, $Q
    ctx->pc = 0x14d308u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x14d30c: 0x4a0002ff  vnop
    ctx->pc = 0x14d30cu;
    // NOP operation, no action needed for VU0
    // 0x14d310: 0x4a0002ff  vnop
    ctx->pc = 0x14d310u;
    // NOP operation, no action needed for VU0
    // 0x14d314: 0x4a6a03bc  vdiv        $Q, $vf0w, $vf10x
    ctx->pc = 0x14d314u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x14d318: 0x4a0003bf  vwaitq
    ctx->pc = 0x14d318u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x14d31c: 0x4bc06b5c  vmulq.xyz   $vf13, $vf13, $Q
    ctx->pc = 0x14d31cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x14d320: 0x48285800  qmfc2.ni    $t0, $vf11
    ctx->pc = 0x14d320u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x14d324: 0x48296000  qmfc2.ni    $t1, $vf12
    ctx->pc = 0x14d324u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x14d328: 0x482a6800  qmfc2.ni    $t2, $vf13
    ctx->pc = 0x14d328u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x14d32c: 0x482b0000  qmfc2.ni    $t3, $vf0
    ctx->pc = 0x14d32cu;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14d330: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x14d330u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x14d334: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x14d334u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x14d338: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x14d338u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x14d33c: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x14d33cu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x14d340: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x14d340u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x14d344: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x14d344u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x14d348: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x14d348u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x14d34c: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x14d34cu;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x14d350: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x14d350u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x14d354: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x14d354u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x14d358: 0x7c8a0020  sq          $t2, 0x20($a0)
    ctx->pc = 0x14d358u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 10));
    // 0x14d35c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D35Cu;
            // 0x14d360: 0x7c8b0030  sq          $t3, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14D364u;
    // 0x14d364: 0x0  nop
    ctx->pc = 0x14d364u;
    // NOP
    // 0x14d368: 0x0  nop
    ctx->pc = 0x14d368u;
    // NOP
    // 0x14d36c: 0x0  nop
    ctx->pc = 0x14d36cu;
    // NOP
}
