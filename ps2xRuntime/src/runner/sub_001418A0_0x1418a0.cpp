#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001418A0
// Address: 0x1418a0 - 0x141a30
void sub_001418A0_0x1418a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001418A0_0x1418a0");
#endif

    switch (ctx->pc) {
        case 0x1418dcu: goto label_1418dc;
        case 0x1418e4u: goto label_1418e4;
        case 0x14191cu: goto label_14191c;
        case 0x14193cu: goto label_14193c;
        case 0x141980u: goto label_141980;
        case 0x1419ecu: goto label_1419ec;
        case 0x1419f8u: goto label_1419f8;
        case 0x141a0cu: goto label_141a0c;
        case 0x141a18u: goto label_141a18;
        default: break;
    }

    ctx->pc = 0x1418a0u;

    // 0x1418a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1418a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1418a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1418a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1418a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1418a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1418ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1418acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1418b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1418b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1418b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1418b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1418b8: 0xaf808214  sw          $zero, -0x7DEC($gp)
    ctx->pc = 0x1418b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935060), GPR_U32(ctx, 0));
    // 0x1418bc: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x1418bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1418c0: 0x8f8382f0  lw          $v1, -0x7D10($gp)
    ctx->pc = 0x1418c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    // 0x1418c4: 0xac405828  sw          $zero, 0x5828($v0)
    ctx->pc = 0x1418c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 0));
    // 0x1418c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1418c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1418cc: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1418ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1418d0: 0x438025  or          $s0, $v0, $v1
    ctx->pc = 0x1418d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1418d4: 0xc057240  jal         func_15C900
    ctx->pc = 0x1418D4u;
    SET_GPR_U32(ctx, 31, 0x1418DCu);
    ctx->pc = 0x1418D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1418D4u;
            // 0x1418d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C900u;
    if (runtime->hasFunction(0x15C900u)) {
        auto targetFn = runtime->lookupFunction(0x15C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418DCu; }
        if (ctx->pc != 0x1418DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C900_0x15c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418DCu; }
        if (ctx->pc != 0x1418DCu) { return; }
    }
    ctx->pc = 0x1418DCu;
label_1418dc:
    // 0x1418dc: 0xc05724c  jal         func_15C930
    ctx->pc = 0x1418DCu;
    SET_GPR_U32(ctx, 31, 0x1418E4u);
    ctx->pc = 0x1418E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1418DCu;
            // 0x1418e0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C930u;
    if (runtime->hasFunction(0x15C930u)) {
        auto targetFn = runtime->lookupFunction(0x15C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418E4u; }
        if (ctx->pc != 0x1418E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C930_0x15c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1418E4u; }
        if (ctx->pc != 0x1418E4u) { return; }
    }
    ctx->pc = 0x1418E4u;
label_1418e4:
    // 0x1418e4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1418e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1418e8: 0x9e270048  lwu         $a3, 0x48($s1)
    ctx->pc = 0x1418e8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1418ec: 0x8f858214  lw          $a1, -0x7DEC($gp)
    ctx->pc = 0x1418ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1418f0: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1418f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1418f4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1418f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1418f8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1418f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1418fc: 0x71c38  dsll        $v1, $a3, 16
    ctx->pc = 0x1418fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 16);
    // 0x141900: 0x24845980  addiu       $a0, $a0, 0x5980
    ctx->pc = 0x141900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22912));
    // 0x141904: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x141904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x141908: 0x24a80001  addiu       $t0, $a1, 0x1
    ctx->pc = 0x141908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14190c: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x14190cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x141910: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x141910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141914: 0xc057540  jal         func_15D500
    ctx->pc = 0x141914u;
    SET_GPR_U32(ctx, 31, 0x14191Cu);
    ctx->pc = 0x141918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141914u;
            // 0x141918: 0xaf888214  sw          $t0, -0x7DEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935060), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14191Cu; }
        if (ctx->pc != 0x14191Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14191Cu; }
        if (ctx->pc != 0x14191Cu) { return; }
    }
    ctx->pc = 0x14191Cu;
label_14191c:
    // 0x14191c: 0x8f858214  lw          $a1, -0x7DEC($gp)
    ctx->pc = 0x14191cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x141920: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x141920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x141924: 0x24845980  addiu       $a0, $a0, 0x5980
    ctx->pc = 0x141924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22912));
    // 0x141928: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x141928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14192c: 0xaf828214  sw          $v0, -0x7DEC($gp)
    ctx->pc = 0x14192cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935060), GPR_U32(ctx, 2));
    // 0x141930: 0x9e27003c  lwu         $a3, 0x3C($s1)
    ctx->pc = 0x141930u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x141934: 0xc057540  jal         func_15D500
    ctx->pc = 0x141934u;
    SET_GPR_U32(ctx, 31, 0x14193Cu);
    ctx->pc = 0x141938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141934u;
            // 0x141938: 0x24060047  addiu       $a2, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14193Cu; }
        if (ctx->pc != 0x14193Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14193Cu; }
        if (ctx->pc != 0x14193Cu) { return; }
    }
    ctx->pc = 0x14193Cu;
label_14193c:
    // 0x14193c: 0x8e270040  lw          $a3, 0x40($s1)
    ctx->pc = 0x14193cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x141940: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x141940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x141944: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x141944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x141948: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x141948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14194c: 0x8f858214  lw          $a1, -0x7DEC($gp)
    ctx->pc = 0x14194cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x141950: 0x24422030  addiu       $v0, $v0, 0x2030
    ctx->pc = 0x141950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
    // 0x141954: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x141954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x141958: 0x24845980  addiu       $a0, $a0, 0x5980
    ctx->pc = 0x141958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22912));
    // 0x14195c: 0x3382b  sltu        $a3, $zero, $v1
    ctx->pc = 0x14195cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x141960: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x141960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x141964: 0xaf838214  sw          $v1, -0x7DEC($gp)
    ctx->pc = 0x141964u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935060), GPR_U32(ctx, 3));
    // 0x141968: 0x38e30001  xori        $v1, $a3, 0x1
    ctx->pc = 0x141968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x14196c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x14196cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x141970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x141974: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x141974u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x141978: 0xc057540  jal         func_15D500
    ctx->pc = 0x141978u;
    SET_GPR_U32(ctx, 31, 0x141980u);
    ctx->pc = 0x14197Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141978u;
            // 0x14197c: 0x2406004e  addiu       $a2, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141980u; }
        if (ctx->pc != 0x141980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141980u; }
        if (ctx->pc != 0x141980u) { return; }
    }
    ctx->pc = 0x141980u;
label_141980:
    // 0x141980: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x141980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x141984: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x141984u;
    {
        const bool branch_taken_0x141984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141984) {
            ctx->pc = 0x141988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141984u;
            // 0x141988: 0x8f868214  lw          $a2, -0x7DEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1419FCu;
            goto label_1419fc;
        }
    }
    ctx->pc = 0x14198Cu;
    // 0x14198c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x14198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x141990: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x141990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x141994: 0x30637f00  andi        $v1, $v1, 0x7F00
    ctx->pc = 0x141994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32512);
    // 0x141998: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x141998u;
    {
        const bool branch_taken_0x141998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141998) {
            ctx->pc = 0x14199Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141998u;
            // 0x14199c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1419F0u;
            goto label_1419f0;
        }
    }
    ctx->pc = 0x1419A0u;
    // 0x1419a0: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x1419a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1419a4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1419A4u;
    {
        const bool branch_taken_0x1419a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1419a4) {
            ctx->pc = 0x1419ECu;
            goto label_1419ec;
        }
    }
    ctx->pc = 0x1419ACu;
    // 0x1419ac: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1419acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1419b0: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1419B0u;
    {
        const bool branch_taken_0x1419b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1419b0) {
            ctx->pc = 0x1419ECu;
            goto label_1419ec;
        }
    }
    ctx->pc = 0x1419B8u;
    // 0x1419b8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1419b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1419bc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1419BCu;
    {
        const bool branch_taken_0x1419bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1419bc) {
            ctx->pc = 0x1419CCu;
            goto label_1419cc;
        }
    }
    ctx->pc = 0x1419C4u;
    // 0x1419c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1419C4u;
    {
        const bool branch_taken_0x1419c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1419c4) {
            ctx->pc = 0x1419ECu;
            goto label_1419ec;
        }
    }
    ctx->pc = 0x1419CCu;
label_1419cc:
    // 0x1419cc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1419ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1419d0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1419d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1419d4: 0x8c635828  lw          $v1, 0x5828($v1)
    ctx->pc = 0x1419d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22568)));
    // 0x1419d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1419d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1419dc: 0x24844960  addiu       $a0, $a0, 0x4960
    ctx->pc = 0x1419dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18784));
    // 0x1419e0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1419e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1419e4: 0xc04e4f4  jal         func_1393D0
    ctx->pc = 0x1419E4u;
    SET_GPR_U32(ctx, 31, 0x1419ECu);
    ctx->pc = 0x1419E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1419E4u;
            // 0x1419e8: 0xac435828  sw          $v1, 0x5828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22568), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1393D0u;
    if (runtime->hasFunction(0x1393D0u)) {
        auto targetFn = runtime->lookupFunction(0x1393D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419ECu; }
        if (ctx->pc != 0x1419ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001393D0_0x1393d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419ECu; }
        if (ctx->pc != 0x1419ECu) { return; }
    }
    ctx->pc = 0x1419ECu;
label_1419ec:
    // 0x1419ec: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1419ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1419f0:
    // 0x1419f0: 0xc05057c  jal         func_1415F0
    ctx->pc = 0x1419F0u;
    SET_GPR_U32(ctx, 31, 0x1419F8u);
    ctx->pc = 0x1415F0u;
    if (runtime->hasFunction(0x1415F0u)) {
        auto targetFn = runtime->lookupFunction(0x1415F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419F8u; }
        if (ctx->pc != 0x1419F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001415F0_0x1415f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1419F8u; }
        if (ctx->pc != 0x1419F8u) { return; }
    }
    ctx->pc = 0x1419F8u;
label_1419f8:
    // 0x1419f8: 0x8f868214  lw          $a2, -0x7DEC($gp)
    ctx->pc = 0x1419f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1419fc:
    // 0x1419fc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1419fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x141a00: 0x24845980  addiu       $a0, $a0, 0x5980
    ctx->pc = 0x141a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22912));
    // 0x141a04: 0xc05750c  jal         func_15D430
    ctx->pc = 0x141A04u;
    SET_GPR_U32(ctx, 31, 0x141A0Cu);
    ctx->pc = 0x141A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141A04u;
            // 0x141a08: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A0Cu; }
        if (ctx->pc != 0x141A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A0Cu; }
        if (ctx->pc != 0x141A0Cu) { return; }
    }
    ctx->pc = 0x141A0Cu;
label_141a0c:
    // 0x141a0c: 0xaf828210  sw          $v0, -0x7DF0($gp)
    ctx->pc = 0x141a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935056), GPR_U32(ctx, 2));
    // 0x141a10: 0xc057528  jal         func_15D4A0
    ctx->pc = 0x141A10u;
    SET_GPR_U32(ctx, 31, 0x141A18u);
    ctx->pc = 0x141A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141A10u;
            // 0x141a14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A18u; }
        if (ctx->pc != 0x141A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141A18u; }
        if (ctx->pc != 0x141A18u) { return; }
    }
    ctx->pc = 0x141A18u;
label_141a18:
    // 0x141a18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x141a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141a1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141a20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141a24: 0x3e00008  jr          $ra
    ctx->pc = 0x141A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141A24u;
            // 0x141a28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141A2Cu;
    // 0x141a2c: 0x0  nop
    ctx->pc = 0x141a2cu;
    // NOP
}
