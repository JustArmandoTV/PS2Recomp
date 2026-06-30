#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C278
// Address: 0x17c278 - 0x17c410
void sub_0017C278_0x17c278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C278_0x17c278");
#endif

    switch (ctx->pc) {
        case 0x17c304u: goto label_17c304;
        case 0x17c338u: goto label_17c338;
        case 0x17c350u: goto label_17c350;
        case 0x17c394u: goto label_17c394;
        case 0x17c3acu: goto label_17c3ac;
        case 0x17c3c4u: goto label_17c3c4;
        default: break;
    }

    ctx->pc = 0x17c278u;

    // 0x17c278: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17c278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17c27c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x17c27cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c280: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17c280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17c284: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17c284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c288: 0x3242003f  andi        $v0, $s2, 0x3F
    ctx->pc = 0x17c288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
    // 0x17c28c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c290: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17c290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17c294: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17c294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c29c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x17c29cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C2A0u;
    {
        const bool branch_taken_0x17c2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C2A0u;
            // 0x17c2a4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2a0) {
            ctx->pc = 0x17C2B8u;
            goto label_17c2b8;
        }
    }
    ctx->pc = 0x17C2A8u;
    // 0x17c2a8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17c2ac: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x17C2ACu;
    {
        const bool branch_taken_0x17c2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C2ACu;
            // 0x17c2b0: 0x24845d10  addiu       $a0, $a0, 0x5D10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2ac) {
            ctx->pc = 0x17C348u;
            goto label_17c348;
        }
    }
    ctx->pc = 0x17C2B4u;
    // 0x17c2b4: 0x0  nop
    ctx->pc = 0x17c2b4u;
    // NOP
label_17c2b8:
    // 0x17c2b8: 0x3262001f  andi        $v0, $s3, 0x1F
    ctx->pc = 0x17c2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
    // 0x17c2bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C2BCu;
    {
        const bool branch_taken_0x17c2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C2BCu;
            // 0x17c2c0: 0x3222003f  andi        $v0, $s1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2bc) {
            ctx->pc = 0x17C2D0u;
            goto label_17c2d0;
        }
    }
    ctx->pc = 0x17C2C4u;
    // 0x17c2c4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17c2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17c2c8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x17C2C8u;
    {
        const bool branch_taken_0x17c2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C2C8u;
            // 0x17c2cc: 0x24845d30  addiu       $a0, $a0, 0x5D30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2c8) {
            ctx->pc = 0x17C348u;
            goto label_17c348;
        }
    }
    ctx->pc = 0x17C2D0u;
label_17c2d0:
    // 0x17c2d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C2D0u;
    {
        const bool branch_taken_0x17c2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C2D0u;
            // 0x17c2d4: 0x2d020010  sltiu       $v0, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2d0) {
            ctx->pc = 0x17C2E8u;
            goto label_17c2e8;
        }
    }
    ctx->pc = 0x17C2D8u;
    // 0x17c2d8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17c2dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17c2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17C2E0u;
    {
        const bool branch_taken_0x17c2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C2E0u;
            // 0x17c2e4: 0x24845d50  addiu       $a0, $a0, 0x5D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2e0) {
            ctx->pc = 0x17C2FCu;
            goto label_17c2fc;
        }
    }
    ctx->pc = 0x17C2E8u;
label_17c2e8:
    // 0x17c2e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17C2E8u;
    {
        const bool branch_taken_0x17c2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C2E8u;
            // 0x17c2ec: 0x81900  sll         $v1, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2e8) {
            ctx->pc = 0x17C310u;
            goto label_17c310;
        }
    }
    ctx->pc = 0x17C2F0u;
    // 0x17c2f0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17c2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17c2f4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x17c2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c2f8: 0x24845d68  addiu       $a0, $a0, 0x5D68
    ctx->pc = 0x17c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23912));
label_17c2fc:
    // 0x17c2fc: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17C2FCu;
    SET_GPR_U32(ctx, 31, 0x17C304u);
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C304u; }
        if (ctx->pc != 0x17C304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C304u; }
        if (ctx->pc != 0x17C304u) { return; }
    }
    ctx->pc = 0x17C304u;
label_17c304:
    // 0x17c304: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x17C304u;
    {
        const bool branch_taken_0x17c304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C304u;
            // 0x17c308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c304) {
            ctx->pc = 0x17C3F4u;
            goto label_17c3f4;
        }
    }
    ctx->pc = 0x17C30Cu;
    // 0x17c30c: 0x0  nop
    ctx->pc = 0x17c30cu;
    // NOP
label_17c310:
    // 0x17c310: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x17c310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x17c314: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17c314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17c318: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x17c318u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x17c31c: 0x26104c40  addiu       $s0, $s0, 0x4C40
    ctx->pc = 0x17c31cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19520));
    // 0x17c320: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x17c320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x17c324: 0x82080000  lb          $t0, 0x0($s0)
    ctx->pc = 0x17c324u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c328: 0x15000032  bnez        $t0, . + 4 + (0x32 << 2)
    ctx->pc = 0x17C328u;
    {
        const bool branch_taken_0x17c328 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C328u;
            // 0x17c32c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c328) {
            ctx->pc = 0x17C3F4u;
            goto label_17c3f4;
        }
    }
    ctx->pc = 0x17C330u;
    // 0x17c330: 0xc05f03a  jal         func_17C0E8
    ctx->pc = 0x17C330u;
    SET_GPR_U32(ctx, 31, 0x17C338u);
    ctx->pc = 0x17C0E8u;
    if (runtime->hasFunction(0x17C0E8u)) {
        auto targetFn = runtime->lookupFunction(0x17C0E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C338u; }
        if (ctx->pc != 0x17C338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C0E8_0x17c0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C338u; }
        if (ctx->pc != 0x17C338u) { return; }
    }
    ctx->pc = 0x17C338u;
label_17c338:
    // 0x17c338: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17C338u;
    {
        const bool branch_taken_0x17c338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C338u;
            // 0x17c33c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c338) {
            ctx->pc = 0x17C358u;
            goto label_17c358;
        }
    }
    ctx->pc = 0x17C340u;
    // 0x17c340: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17c340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17c344: 0x24845d80  addiu       $a0, $a0, 0x5D80
    ctx->pc = 0x17c344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23936));
label_17c348:
    // 0x17c348: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17C348u;
    SET_GPR_U32(ctx, 31, 0x17C350u);
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C350u; }
        if (ctx->pc != 0x17C350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C350u; }
        if (ctx->pc != 0x17C350u) { return; }
    }
    ctx->pc = 0x17C350u;
label_17c350:
    // 0x17c350: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x17C350u;
    {
        const bool branch_taken_0x17c350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C350u;
            // 0x17c354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c350) {
            ctx->pc = 0x17C3F4u;
            goto label_17c3f4;
        }
    }
    ctx->pc = 0x17C358u;
label_17c358:
    // 0x17c358: 0x2623ffc0  addiu       $v1, $s1, -0x40
    ctx->pc = 0x17c358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
    // 0x17c35c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x17c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x17c360: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x17c360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x17c364: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x17c364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c368: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x17c368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x17c36c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17c36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c374: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x17c374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x17c378: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x17c378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x17c37c: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x17c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x17c380: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x17c380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x17c384: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x17c384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x17c388: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x17c388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x17c38c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x17C38Cu;
    SET_GPR_U32(ctx, 31, 0x17C394u);
    ctx->pc = 0x17C390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C38Cu;
            // 0x17c390: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C394u; }
        if (ctx->pc != 0x17C394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C394u; }
        if (ctx->pc != 0x17C394u) { return; }
    }
    ctx->pc = 0x17C394u;
label_17c394:
    // 0x17c394: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x17c394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17c398: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x17c398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17c39c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17c39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3a0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17c3a4: 0xc043316  jal         func_10CC58
    ctx->pc = 0x17C3A4u;
    SET_GPR_U32(ctx, 31, 0x17C3ACu);
    ctx->pc = 0x17C3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C3A4u;
            // 0x17c3a8: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC58u;
    if (runtime->hasFunction(0x10CC58u)) {
        auto targetFn = runtime->lookupFunction(0x10CC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3ACu; }
        if (ctx->pc != 0x17C3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC58_0x10cc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3ACu; }
        if (ctx->pc != 0x17C3ACu) { return; }
    }
    ctx->pc = 0x17C3ACu;
label_17c3ac:
    // 0x17c3ac: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x17c3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17c3b0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x17c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17c3b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17c3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c3b8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17c3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17c3bc: 0xc043366  jal         func_10CD98
    ctx->pc = 0x17C3BCu;
    SET_GPR_U32(ctx, 31, 0x17C3C4u);
    ctx->pc = 0x17C3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C3BCu;
            // 0x17c3c0: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (runtime->hasFunction(0x10CD98u)) {
        auto targetFn = runtime->lookupFunction(0x10CD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3C4u; }
        if (ctx->pc != 0x17C3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CD98_0x10cd98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C3C4u; }
        if (ctx->pc != 0x17C3C4u) { return; }
    }
    ctx->pc = 0x17C3C4u;
label_17c3c4:
    // 0x17c3c4: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x17c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x17c3c8: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x17c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x17c3cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c3d0: 0x2463c1c0  addiu       $v1, $v1, -0x3E40
    ctx->pc = 0x17c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951360));
    // 0x17c3d4: 0x2442c1a8  addiu       $v0, $v0, -0x3E58
    ctx->pc = 0x17c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951336));
    // 0x17c3d8: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x17c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x17c3dc: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x17c3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x17c3e0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x17c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x17c3e4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x17c3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x17c3e8: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x17c3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x17c3ec: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x17c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x17c3f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17c3f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17c3f4:
    // 0x17c3f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c3f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c3f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c3f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c3fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17c3fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c400: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17c400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c404: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17c404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c408: 0x3e00008  jr          $ra
    ctx->pc = 0x17C408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C408u;
            // 0x17c40c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C410u;
}
