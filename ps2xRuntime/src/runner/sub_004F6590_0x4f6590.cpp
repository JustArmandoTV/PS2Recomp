#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F6590
// Address: 0x4f6590 - 0x4f6690
void sub_004F6590_0x4f6590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F6590_0x4f6590");
#endif

    switch (ctx->pc) {
        case 0x4f65ccu: goto label_4f65cc;
        case 0x4f661cu: goto label_4f661c;
        case 0x4f6628u: goto label_4f6628;
        case 0x4f6670u: goto label_4f6670;
        default: break;
    }

    ctx->pc = 0x4f6590u;

    // 0x4f6590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f6590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4f6594: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f6594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4f6598: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4f6598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4f659c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f659cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4f65a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f65a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4f65a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f65a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f65a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f65a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f65ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4f65acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f65b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f65b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f65b4: 0x8c430ea4  lw          $v1, 0xEA4($v0)
    ctx->pc = 0x4f65b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x4f65b8: 0x26700020  addiu       $s0, $s3, 0x20
    ctx->pc = 0x4f65b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x4f65bc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4f65bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4f65c0: 0x24710130  addiu       $s1, $v1, 0x130
    ctx->pc = 0x4f65c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x4f65c4: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x4F65C4u;
    SET_GPR_U32(ctx, 31, 0x4F65CCu);
    ctx->pc = 0x4F65C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F65C4u;
            // 0x4f65c8: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F65CCu; }
        if (ctx->pc != 0x4F65CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F65CCu; }
        if (ctx->pc != 0x4F65CCu) { return; }
    }
    ctx->pc = 0x4F65CCu;
label_4f65cc:
    // 0x4f65cc: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x4f65ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4f65d0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4f65d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4f65d4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F65D4u;
    {
        const bool branch_taken_0x4f65d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f65d4) {
            ctx->pc = 0x4F65D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F65D4u;
            // 0x4f65d8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F65E4u;
            goto label_4f65e4;
        }
    }
    ctx->pc = 0x4F65DCu;
    // 0x4f65dc: 0x36520008  ori         $s2, $s2, 0x8
    ctx->pc = 0x4f65dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8);
    // 0x4f65e0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x4f65e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_4f65e4:
    // 0x4f65e4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F65E4u;
    {
        const bool branch_taken_0x4f65e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f65e4) {
            ctx->pc = 0x4F65E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F65E4u;
            // 0x4f65e8: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F65F4u;
            goto label_4f65f4;
        }
    }
    ctx->pc = 0x4F65ECu;
    // 0x4f65ec: 0x36520002  ori         $s2, $s2, 0x2
    ctx->pc = 0x4f65ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
    // 0x4f65f0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x4f65f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_4f65f4:
    // 0x4f65f4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F65F4u;
    {
        const bool branch_taken_0x4f65f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f65f4) {
            ctx->pc = 0x4F65F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F65F4u;
            // 0x4f65f8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F6604u;
            goto label_4f6604;
        }
    }
    ctx->pc = 0x4F65FCu;
    // 0x4f65fc: 0x36520004  ori         $s2, $s2, 0x4
    ctx->pc = 0x4f65fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
    // 0x4f6600: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4f6600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4f6604:
    // 0x4f6604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f6604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6608: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f6608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f660c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f660cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6610: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4f6610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f6614: 0xc0c5ae8  jal         func_316BA0
    ctx->pc = 0x4F6614u;
    SET_GPR_U32(ctx, 31, 0x4F661Cu);
    ctx->pc = 0x4F6618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6614u;
            // 0x4f6618: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316BA0u;
    if (runtime->hasFunction(0x316BA0u)) {
        auto targetFn = runtime->lookupFunction(0x316BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F661Cu; }
        if (ctx->pc != 0x4F661Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00316BA0_0x316ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F661Cu; }
        if (ctx->pc != 0x4F661Cu) { return; }
    }
    ctx->pc = 0x4F661Cu;
label_4f661c:
    // 0x4f661c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x4f661cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4f6620: 0xc13d9a4  jal         func_4F6690
    ctx->pc = 0x4F6620u;
    SET_GPR_U32(ctx, 31, 0x4F6628u);
    ctx->pc = 0x4F6624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6620u;
            // 0x4f6624: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6690u;
    if (runtime->hasFunction(0x4F6690u)) {
        auto targetFn = runtime->lookupFunction(0x4F6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6628u; }
        if (ctx->pc != 0x4F6628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6690_0x4f6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6628u; }
        if (ctx->pc != 0x4F6628u) { return; }
    }
    ctx->pc = 0x4F6628u;
label_4f6628:
    // 0x4f6628: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f6628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4f662c: 0x96630054  lhu         $v1, 0x54($s3)
    ctx->pc = 0x4f662cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x4f6630: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4f6630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x4f6634: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x4f6634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x4f6638: 0x96620032  lhu         $v0, 0x32($s3)
    ctx->pc = 0x4f6638u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 50)));
    // 0x4f663c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4F663Cu;
    {
        const bool branch_taken_0x4f663c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F6640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F663Cu;
            // 0x4f6640: 0x24840130  addiu       $a0, $a0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f663c) {
            ctx->pc = 0x4F6670u;
            goto label_4f6670;
        }
    }
    ctx->pc = 0x4F6644u;
    // 0x4f6644: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4f6644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4f6648: 0x94a20012  lhu         $v0, 0x12($a1)
    ctx->pc = 0x4f6648u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x4f664c: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x4f664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x4f6650: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x4f6650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4f6654: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x4f6654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x4f6658: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4f6658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4f665c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4f665cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4f6660: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x4f6660u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x4f6664: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4f6664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4f6668: 0xc04cc04  jal         func_133010
    ctx->pc = 0x4F6668u;
    SET_GPR_U32(ctx, 31, 0x4F6670u);
    ctx->pc = 0x4F666Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6668u;
            // 0x4f666c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6670u; }
        if (ctx->pc != 0x4F6670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F6670u; }
        if (ctx->pc != 0x4F6670u) { return; }
    }
    ctx->pc = 0x4F6670u;
label_4f6670:
    // 0x4f6670: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4f6670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6674: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4f6674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f6678: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f6678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f667c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f667cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f6680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f6680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f6684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f6684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f6688: 0x3e00008  jr          $ra
    ctx->pc = 0x4F6688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F668Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F6688u;
            // 0x4f668c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F6690u;
}
