#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001299D0
// Address: 0x1299d0 - 0x129c50
void sub_001299D0_0x1299d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001299D0_0x1299d0");
#endif

    switch (ctx->pc) {
        case 0x1299ecu: goto label_1299ec;
        case 0x129a9cu: goto label_129a9c;
        case 0x129adcu: goto label_129adc;
        case 0x129b2cu: goto label_129b2c;
        case 0x129b38u: goto label_129b38;
        case 0x129ba8u: goto label_129ba8;
        default: break;
    }

    ctx->pc = 0x1299d0u;

    // 0x1299d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1299d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1299d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1299d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1299d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1299d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1299dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1299dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1299e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1299e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1299e4: 0xc04a5a6  jal         func_129698
    ctx->pc = 0x1299E4u;
    SET_GPR_U32(ctx, 31, 0x1299ECu);
    ctx->pc = 0x1299E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1299E4u;
            // 0x1299e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129698u;
    if (runtime->hasFunction(0x129698u)) {
        auto targetFn = runtime->lookupFunction(0x129698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1299ECu; }
        if (ctx->pc != 0x1299ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129698_0x129698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1299ECu; }
        if (ctx->pc != 0x1299ECu) { return; }
    }
    ctx->pc = 0x1299ECu;
label_1299ec:
    // 0x1299ec: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x1299ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1299f0: 0x240f0e10  addiu       $t7, $zero, 0xE10
    ctx->pc = 0x1299f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x1299f4: 0x8e2a0004  lw          $t2, 0x4($s1)
    ctx->pc = 0x1299f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1299f8: 0x240e003c  addiu       $t6, $zero, 0x3C
    ctx->pc = 0x1299f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1299fc: 0x16f0018  mult        $zero, $t3, $t7
    ctx->pc = 0x1299fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x129a00: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x129a00u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x129a04: 0xc6880  sll         $t5, $t4, 2
    ctx->pc = 0x129a04u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x129a08: 0x298c0002  slti        $t4, $t4, 0x2
    ctx->pc = 0x129a08u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x129a0c: 0x70000830  pmfhl.lw    $at
    ctx->pc = 0x129a0cu;
    SET_GPR_VEC(ctx, 1, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x129a10: 0x20582d  daddu       $t3, $at, $zero
    ctx->pc = 0x129a10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a14: 0x14e0018  mult        $zero, $t2, $t6
    ctx->pc = 0x129a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x129a18: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x129a18u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x129a1c: 0x25ef0938  addiu       $t7, $t7, 0x938
    ctx->pc = 0x129a1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2360));
    // 0x129a20: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x129a20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x129a24: 0x8e2f000c  lw          $t7, 0xC($s1)
    ctx->pc = 0x129a24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x129a28: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x129a28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x129a2c: 0x70000830  pmfhl.lw    $at
    ctx->pc = 0x129a2cu;
    SET_GPR_VEC(ctx, 1, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x129a30: 0x20502d  daddu       $t2, $at, $zero
    ctx->pc = 0x129a30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a34: 0x8da90000  lw          $t1, 0x0($t5)
    ctx->pc = 0x129a34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x129a38: 0x25f0ffff  addiu       $s0, $t7, -0x1
    ctx->pc = 0x129a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x129a3c: 0x1cb702d  daddu       $t6, $t6, $t3
    ctx->pc = 0x129a3cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 11));
    // 0x129a40: 0x14e902d  daddu       $s2, $t2, $t6
    ctx->pc = 0x129a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 14));
    // 0x129a44: 0x15800080  bnez        $t4, . + 4 + (0x80 << 2)
    ctx->pc = 0x129A44u;
    {
        const bool branch_taken_0x129a44 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x129A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A44u;
            // 0x129a48: 0x209802d  daddu       $s0, $s0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a44) {
            ctx->pc = 0x129C48u;
            goto label_129c48;
        }
    }
    ctx->pc = 0x129A4Cu;
    // 0x129a4c: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x129a4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x129a50: 0x316f0003  andi        $t7, $t3, 0x3
    ctx->pc = 0x129a50u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x129a54: 0x15e00012  bnez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x129A54u;
    {
        const bool branch_taken_0x129a54 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A54u;
            // 0x129a58: 0x10703c  dsll32      $t6, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a54) {
            ctx->pc = 0x129AA0u;
            goto label_129aa0;
        }
    }
    ctx->pc = 0x129A5Cu;
    // 0x129a5c: 0x240f0064  addiu       $t7, $zero, 0x64
    ctx->pc = 0x129a5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x129a60: 0x16f001a  div         $zero, $t3, $t7
    ctx->pc = 0x129a60u;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129a64: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x129A64u;
    {
        const bool branch_taken_0x129a64 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x129a64) {
            ctx->pc = 0x129A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129A64u;
            // 0x129a68: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129A6Cu;
            goto label_129a6c;
        }
    }
    ctx->pc = 0x129A6Cu;
label_129a6c:
    // 0x129a6c: 0x7010  mfhi        $t6
    ctx->pc = 0x129a6cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x129a70: 0x55c0000a  bnel        $t6, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x129A70u;
    {
        const bool branch_taken_0x129a70 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x129a70) {
            ctx->pc = 0x129A74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129A70u;
            // 0x129a74: 0x66100001  daddiu      $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129A9Cu;
            goto label_129a9c;
        }
    }
    ctx->pc = 0x129A78u;
    // 0x129a78: 0x240f0190  addiu       $t7, $zero, 0x190
    ctx->pc = 0x129a78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x129a7c: 0x256e076c  addiu       $t6, $t3, 0x76C
    ctx->pc = 0x129a7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 1900));
    // 0x129a80: 0x1cf001a  div         $zero, $t6, $t7
    ctx->pc = 0x129a80u;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 14);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129a84: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x129A84u;
    {
        const bool branch_taken_0x129a84 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x129a84) {
            ctx->pc = 0x129A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129A84u;
            // 0x129a88: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129A8Cu;
            goto label_129a8c;
        }
    }
    ctx->pc = 0x129A8Cu;
label_129a8c:
    // 0x129a8c: 0x6810  mfhi        $t5
    ctx->pc = 0x129a8cu;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x129a90: 0x15a00003  bnez        $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x129A90u;
    {
        const bool branch_taken_0x129a90 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x129A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A90u;
            // 0x129a94: 0x10703c  dsll32      $t6, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a90) {
            ctx->pc = 0x129AA0u;
            goto label_129aa0;
        }
    }
    ctx->pc = 0x129A98u;
    // 0x129a98: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x129a98u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
label_129a9c:
    // 0x129a9c: 0x10703c  dsll32      $t6, $s0, 0
    ctx->pc = 0x129a9cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) << (32 + 0));
label_129aa0:
    // 0x129aa0: 0x256f2710  addiu       $t7, $t3, 0x2710
    ctx->pc = 0x129aa0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 10000));
    // 0x129aa4: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x129aa4u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x129aa8: 0x2def4e21  sltiu       $t7, $t7, 0x4E21
    ctx->pc = 0x129aa8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)20001) ? 1 : 0);
    // 0x129aac: 0xae2e001c  sw          $t6, 0x1C($s1)
    ctx->pc = 0x129aacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 14));
    // 0x129ab0: 0x11e0002f  beqz        $t7, . + 4 + (0x2F << 2)
    ctx->pc = 0x129AB0u;
    {
        const bool branch_taken_0x129ab0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129AB0u;
            // 0x129ab4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ab0) {
            ctx->pc = 0x129B70u;
            goto label_129b70;
        }
    }
    ctx->pc = 0x129AB8u;
    // 0x129ab8: 0x296f0047  slti        $t7, $t3, 0x47
    ctx->pc = 0x129ab8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)71) ? 1 : 0);
    // 0x129abc: 0x15e00032  bnez        $t7, . + 4 + (0x32 << 2)
    ctx->pc = 0x129ABCu;
    {
        const bool branch_taken_0x129abc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129ABCu;
            // 0x129ac0: 0x296f0046  slti        $t7, $t3, 0x46 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)70) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129abc) {
            ctx->pc = 0x129B88u;
            goto label_129b88;
        }
    }
    ctx->pc = 0x129AC4u;
    // 0x129ac4: 0x240c0046  addiu       $t4, $zero, 0x46
    ctx->pc = 0x129ac4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x129ac8: 0x18b782a  slt         $t7, $t4, $t3
    ctx->pc = 0x129ac8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x129acc: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x129ACCu;
    {
        const bool branch_taken_0x129acc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129ACCu;
            // 0x129ad0: 0x240d0064  addiu       $t5, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129acc) {
            ctx->pc = 0x129B2Cu;
            goto label_129b2c;
        }
    }
    ctx->pc = 0x129AD4u;
    // 0x129ad4: 0x240a0190  addiu       $t2, $zero, 0x190
    ctx->pc = 0x129ad4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x129ad8: 0x318f0003  andi        $t7, $t4, 0x3
    ctx->pc = 0x129ad8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
label_129adc:
    // 0x129adc: 0x55e0000f  bnel        $t7, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x129ADCu;
    {
        const bool branch_taken_0x129adc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x129adc) {
            ctx->pc = 0x129AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129ADCu;
            // 0x129ae0: 0x6610016d  daddiu      $s0, $s0, 0x16D (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)365);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129B1Cu;
            goto label_129b1c;
        }
    }
    ctx->pc = 0x129AE4u;
    // 0x129ae4: 0x18d001a  div         $zero, $t4, $t5
    ctx->pc = 0x129ae4u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129ae8: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x129AE8u;
    {
        const bool branch_taken_0x129ae8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x129ae8) {
            ctx->pc = 0x129AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129AE8u;
            // 0x129aec: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129AF0u;
            goto label_129af0;
        }
    }
    ctx->pc = 0x129AF0u;
label_129af0:
    // 0x129af0: 0x7810  mfhi        $t7
    ctx->pc = 0x129af0u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x129af4: 0x55e00009  bnel        $t7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x129AF4u;
    {
        const bool branch_taken_0x129af4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x129af4) {
            ctx->pc = 0x129AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129AF4u;
            // 0x129af8: 0x6610016e  daddiu      $s0, $s0, 0x16E (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)366);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129B1Cu;
            goto label_129b1c;
        }
    }
    ctx->pc = 0x129AFCu;
    // 0x129afc: 0x258f076c  addiu       $t7, $t4, 0x76C
    ctx->pc = 0x129afcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 1900));
    // 0x129b00: 0x1ea001a  div         $zero, $t7, $t2
    ctx->pc = 0x129b00u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129b04: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x129B04u;
    {
        const bool branch_taken_0x129b04 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x129b04) {
            ctx->pc = 0x129B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129B04u;
            // 0x129b08: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129B0Cu;
            goto label_129b0c;
        }
    }
    ctx->pc = 0x129B0Cu;
label_129b0c:
    // 0x129b0c: 0x7010  mfhi        $t6
    ctx->pc = 0x129b0cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x129b10: 0x55c00002  bnel        $t6, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x129B10u;
    {
        const bool branch_taken_0x129b10 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x129b10) {
            ctx->pc = 0x129B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129B10u;
            // 0x129b14: 0x6610016d  daddiu      $s0, $s0, 0x16D (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)365);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129B1Cu;
            goto label_129b1c;
        }
    }
    ctx->pc = 0x129B18u;
    // 0x129b18: 0x6610016e  daddiu      $s0, $s0, 0x16E
    ctx->pc = 0x129b18u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)366);
label_129b1c:
    // 0x129b1c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x129b1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x129b20: 0x18b782a  slt         $t7, $t4, $t3
    ctx->pc = 0x129b20u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x129b24: 0x15e0ffed  bnez        $t7, . + 4 + (-0x13 << 2)
    ctx->pc = 0x129B24u;
    {
        const bool branch_taken_0x129b24 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B24u;
            // 0x129b28: 0x318f0003  andi        $t7, $t4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b24) {
            ctx->pc = 0x129ADCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129adc;
        }
    }
    ctx->pc = 0x129B2Cu;
label_129b2c:
    // 0x129b2c: 0x66040004  daddiu      $a0, $s0, 0x4
    ctx->pc = 0x129b2cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4);
    // 0x129b30: 0xc048fbc  jal         func_123EF0
    ctx->pc = 0x129B30u;
    SET_GPR_U32(ctx, 31, 0x129B38u);
    ctx->pc = 0x129B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129B30u;
            // 0x129b34: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EF0u;
    if (runtime->hasFunction(0x123EF0u)) {
        auto targetFn = runtime->lookupFunction(0x123EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129B38u; }
        if (ctx->pc != 0x129B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123EF0_0x123ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129B38u; }
        if (ctx->pc != 0x129B38u) { return; }
    }
    ctx->pc = 0x129B38u;
label_129b38:
    // 0x129b38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x129b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x129b3c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x129b3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x129b40: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129B40u;
    {
        const bool branch_taken_0x129b40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x129B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B40u;
            // 0x129b44: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b40) {
            ctx->pc = 0x129B50u;
            goto label_129b50;
        }
    }
    ctx->pc = 0x129B48u;
    // 0x129b48: 0x244f0007  addiu       $t7, $v0, 0x7
    ctx->pc = 0x129b48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x129b4c: 0xae2f0018  sw          $t7, 0x18($s1)
    ctx->pc = 0x129b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 15));
label_129b50:
    // 0x129b50: 0x107878  dsll        $t7, $s0, 1
    ctx->pc = 0x129b50u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 16) << 1);
    // 0x129b54: 0x1f0782d  daddu       $t7, $t7, $s0
    ctx->pc = 0x129b54u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 16));
    // 0x129b58: 0xf6938  dsll        $t5, $t7, 4
    ctx->pc = 0x129b58u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) << 4);
    // 0x129b5c: 0x1af682f  dsubu       $t5, $t5, $t7
    ctx->pc = 0x129b5cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) - GPR_U64(ctx, 15));
    // 0x129b60: 0xd7138  dsll        $t6, $t5, 4
    ctx->pc = 0x129b60u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) << 4);
    // 0x129b64: 0x1cd702f  dsubu       $t6, $t6, $t5
    ctx->pc = 0x129b64u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) - GPR_U64(ctx, 13));
    // 0x129b68: 0xe71f8  dsll        $t6, $t6, 7
    ctx->pc = 0x129b68u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 7);
    // 0x129b6c: 0x24e102d  daddu       $v0, $s2, $t6
    ctx->pc = 0x129b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 14));
label_129b70:
    // 0x129b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x129b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129b74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x129b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129b78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x129b78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129b7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x129b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x129b80: 0x3e00008  jr          $ra
    ctx->pc = 0x129B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B80u;
            // 0x129b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x129B88u;
label_129b88:
    // 0x129b88: 0x11e0ffe8  beqz        $t7, . + 4 + (-0x18 << 2)
    ctx->pc = 0x129B88u;
    {
        const bool branch_taken_0x129b88 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B88u;
            // 0x129b8c: 0x296f0045  slti        $t7, $t3, 0x45 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)69) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b88) {
            ctx->pc = 0x129B2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129b2c;
        }
    }
    ctx->pc = 0x129B90u;
    // 0x129b90: 0x11e00019  beqz        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x129B90u;
    {
        const bool branch_taken_0x129b90 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B90u;
            // 0x129b94: 0x240c0045  addiu       $t4, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b90) {
            ctx->pc = 0x129BF8u;
            goto label_129bf8;
        }
    }
    ctx->pc = 0x129B98u;
    // 0x129b98: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x129b98u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b9c: 0x240a0190  addiu       $t2, $zero, 0x190
    ctx->pc = 0x129b9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x129ba0: 0x240b0064  addiu       $t3, $zero, 0x64
    ctx->pc = 0x129ba0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x129ba4: 0x318f0003  andi        $t7, $t4, 0x3
    ctx->pc = 0x129ba4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
label_129ba8:
    // 0x129ba8: 0x55e0000f  bnel        $t7, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x129BA8u;
    {
        const bool branch_taken_0x129ba8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x129ba8) {
            ctx->pc = 0x129BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129BA8u;
            // 0x129bac: 0x6610fe93  daddiu      $s0, $s0, -0x16D (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294966931);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129BE8u;
            goto label_129be8;
        }
    }
    ctx->pc = 0x129BB0u;
    // 0x129bb0: 0x18b001a  div         $zero, $t4, $t3
    ctx->pc = 0x129bb0u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129bb4: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x129BB4u;
    {
        const bool branch_taken_0x129bb4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x129bb4) {
            ctx->pc = 0x129BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129BB4u;
            // 0x129bb8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129BBCu;
            goto label_129bbc;
        }
    }
    ctx->pc = 0x129BBCu;
label_129bbc:
    // 0x129bbc: 0x7810  mfhi        $t7
    ctx->pc = 0x129bbcu;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x129bc0: 0x55e00009  bnel        $t7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x129BC0u;
    {
        const bool branch_taken_0x129bc0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x129bc0) {
            ctx->pc = 0x129BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129BC0u;
            // 0x129bc4: 0x6610fe92  daddiu      $s0, $s0, -0x16E (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294966930);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129BE8u;
            goto label_129be8;
        }
    }
    ctx->pc = 0x129BC8u;
    // 0x129bc8: 0x258f076c  addiu       $t7, $t4, 0x76C
    ctx->pc = 0x129bc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 1900));
    // 0x129bcc: 0x1ea001a  div         $zero, $t7, $t2
    ctx->pc = 0x129bccu;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129bd0: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x129BD0u;
    {
        const bool branch_taken_0x129bd0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x129bd0) {
            ctx->pc = 0x129BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129BD0u;
            // 0x129bd4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129BD8u;
            goto label_129bd8;
        }
    }
    ctx->pc = 0x129BD8u;
label_129bd8:
    // 0x129bd8: 0x7010  mfhi        $t6
    ctx->pc = 0x129bd8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x129bdc: 0x55c00002  bnel        $t6, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x129BDCu;
    {
        const bool branch_taken_0x129bdc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x129bdc) {
            ctx->pc = 0x129BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129BDCu;
            // 0x129be0: 0x6610fe93  daddiu      $s0, $s0, -0x16D (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294966931);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129BE8u;
            goto label_129be8;
        }
    }
    ctx->pc = 0x129BE4u;
    // 0x129be4: 0x6610fe92  daddiu      $s0, $s0, -0x16E
    ctx->pc = 0x129be4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294966930);
label_129be8:
    // 0x129be8: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x129be8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x129bec: 0x1ac782a  slt         $t7, $t5, $t4
    ctx->pc = 0x129becu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x129bf0: 0x15e0ffed  bnez        $t7, . + 4 + (-0x13 << 2)
    ctx->pc = 0x129BF0u;
    {
        const bool branch_taken_0x129bf0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129BF0u;
            // 0x129bf4: 0x318f0003  andi        $t7, $t4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129bf0) {
            ctx->pc = 0x129BA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129ba8;
        }
    }
    ctx->pc = 0x129BF8u;
label_129bf8:
    // 0x129bf8: 0x318f0003  andi        $t7, $t4, 0x3
    ctx->pc = 0x129bf8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
    // 0x129bfc: 0x55e0ffcb  bnel        $t7, $zero, . + 4 + (-0x35 << 2)
    ctx->pc = 0x129BFCu;
    {
        const bool branch_taken_0x129bfc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x129bfc) {
            ctx->pc = 0x129C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129BFCu;
            // 0x129c00: 0x6610fe93  daddiu      $s0, $s0, -0x16D (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294966931);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129B2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129b2c;
        }
    }
    ctx->pc = 0x129C04u;
    // 0x129c04: 0x240f0064  addiu       $t7, $zero, 0x64
    ctx->pc = 0x129c04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x129c08: 0x18f001a  div         $zero, $t4, $t7
    ctx->pc = 0x129c08u;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129c0c: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x129C0Cu;
    {
        const bool branch_taken_0x129c0c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x129c0c) {
            ctx->pc = 0x129C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129C0Cu;
            // 0x129c10: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129C14u;
            goto label_129c14;
        }
    }
    ctx->pc = 0x129C14u;
label_129c14:
    // 0x129c14: 0x7010  mfhi        $t6
    ctx->pc = 0x129c14u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x129c18: 0x55c0ffc4  bnel        $t6, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x129C18u;
    {
        const bool branch_taken_0x129c18 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x129c18) {
            ctx->pc = 0x129C1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129C18u;
            // 0x129c1c: 0x6610fe92  daddiu      $s0, $s0, -0x16E (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294966930);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129B2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129b2c;
        }
    }
    ctx->pc = 0x129C20u;
    // 0x129c20: 0x240e0190  addiu       $t6, $zero, 0x190
    ctx->pc = 0x129c20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x129c24: 0x258f076c  addiu       $t7, $t4, 0x76C
    ctx->pc = 0x129c24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 1900));
    // 0x129c28: 0x1ee001a  div         $zero, $t7, $t6
    ctx->pc = 0x129c28u;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x129c2c: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x129C2Cu;
    {
        const bool branch_taken_0x129c2c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x129c2c) {
            ctx->pc = 0x129C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129C2Cu;
            // 0x129c30: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129C34u;
            goto label_129c34;
        }
    }
    ctx->pc = 0x129C34u;
label_129c34:
    // 0x129c34: 0x6810  mfhi        $t5
    ctx->pc = 0x129c34u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x129c38: 0x55a0ffbc  bnel        $t5, $zero, . + 4 + (-0x44 << 2)
    ctx->pc = 0x129C38u;
    {
        const bool branch_taken_0x129c38 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x129c38) {
            ctx->pc = 0x129C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129C38u;
            // 0x129c3c: 0x6610fe93  daddiu      $s0, $s0, -0x16D (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294966931);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129B2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129b2c;
        }
    }
    ctx->pc = 0x129C40u;
    // 0x129c40: 0x1000ffba  b           . + 4 + (-0x46 << 2)
    ctx->pc = 0x129C40u;
    {
        const bool branch_taken_0x129c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129C40u;
            // 0x129c44: 0x6610fe92  daddiu      $s0, $s0, -0x16E (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294966930);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c40) {
            ctx->pc = 0x129B2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129b2c;
        }
    }
    ctx->pc = 0x129C48u;
label_129c48:
    // 0x129c48: 0x1000ff94  b           . + 4 + (-0x6C << 2)
    ctx->pc = 0x129C48u;
    {
        const bool branch_taken_0x129c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129C48u;
            // 0x129c4c: 0x8e2b0014  lw          $t3, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c48) {
            ctx->pc = 0x129A9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129a9c;
        }
    }
    ctx->pc = 0x129C50u;
}
