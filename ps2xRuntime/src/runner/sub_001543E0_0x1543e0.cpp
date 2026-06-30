#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001543E0
// Address: 0x1543e0 - 0x1545e0
void sub_001543E0_0x1543e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001543E0_0x1543e0");
#endif

    switch (ctx->pc) {
        case 0x154488u: goto label_154488;
        case 0x154504u: goto label_154504;
        case 0x154510u: goto label_154510;
        case 0x154524u: goto label_154524;
        case 0x154530u: goto label_154530;
        case 0x154540u: goto label_154540;
        case 0x15459cu: goto label_15459c;
        case 0x1545b4u: goto label_1545b4;
        default: break;
    }

    ctx->pc = 0x1543e0u;

    // 0x1543e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1543e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1543e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1543e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1543e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1543e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1543ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1543ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1543f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1543f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1543f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1543f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1543f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1543f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1543fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1543fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x154400: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x154400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154404: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x154408: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x154408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15440c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15440cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x154410: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x154410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154414: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x154414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x154418: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x154418u;
    {
        const bool branch_taken_0x154418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15441Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154418u;
            // 0x15441c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154418) {
            ctx->pc = 0x1545B4u;
            goto label_1545b4;
        }
    }
    ctx->pc = 0x154420u;
    // 0x154420: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154424: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x154424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x154428: 0xac535784  sw          $s3, 0x5784($v0)
    ctx->pc = 0x154428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22404), GPR_U32(ctx, 19));
    // 0x15442c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15442cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x154430: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154434: 0xac725788  sw          $s2, 0x5788($v1)
    ctx->pc = 0x154434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22408), GPR_U32(ctx, 18));
    // 0x154438: 0xac51578c  sw          $s1, 0x578C($v0)
    ctx->pc = 0x154438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22412), GPR_U32(ctx, 17));
    // 0x15443c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15443cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x154440: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154444: 0xac705790  sw          $s0, 0x5790($v1)
    ctx->pc = 0x154444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22416), GPR_U32(ctx, 16));
    // 0x154448: 0xac485794  sw          $t0, 0x5794($v0)
    ctx->pc = 0x154448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22420), GPR_U32(ctx, 8));
    // 0x15444c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15444cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x154450: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154454: 0x31040002  andi        $a0, $t0, 0x2
    ctx->pc = 0x154454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x154458: 0xac655760  sw          $a1, 0x5760($v1)
    ctx->pc = 0x154458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22368), GPR_U32(ctx, 5));
    // 0x15445c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15445Cu;
    {
        const bool branch_taken_0x15445c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x154460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15445Cu;
            // 0x154460: 0xac455768  sw          $a1, 0x5768($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22376), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15445c) {
            ctx->pc = 0x154474u;
            goto label_154474;
        }
    }
    ctx->pc = 0x154464u;
    // 0x154464: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154468: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15446c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15446Cu;
    {
        const bool branch_taken_0x15446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15446Cu;
            // 0x154470: 0xac4357b0  sw          $v1, 0x57B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15446c) {
            ctx->pc = 0x15447Cu;
            goto label_15447c;
        }
    }
    ctx->pc = 0x154474u;
label_154474:
    // 0x154474: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154478: 0xac4057b0  sw          $zero, 0x57B0($v0)
    ctx->pc = 0x154478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22448), GPR_U32(ctx, 0));
label_15447c:
    // 0x15447c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x15447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x154480: 0xc056b04  jal         func_15AC10
    ctx->pc = 0x154480u;
    SET_GPR_U32(ctx, 31, 0x154488u);
    ctx->pc = 0x154484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154480u;
            // 0x154484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC10u;
    if (runtime->hasFunction(0x15AC10u)) {
        auto targetFn = runtime->lookupFunction(0x15AC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154488u; }
        if (ctx->pc != 0x154488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC10_0x15ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154488u; }
        if (ctx->pc != 0x154488u) { return; }
    }
    ctx->pc = 0x154488u;
label_154488:
    // 0x154488: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15448c: 0x8c425840  lw          $v0, 0x5840($v0)
    ctx->pc = 0x15448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22592)));
    // 0x154490: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x154490u;
    {
        const bool branch_taken_0x154490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154490u;
            // 0x154494: 0xaf8081a4  sw          $zero, -0x7E5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934948), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154490) {
            ctx->pc = 0x1544ECu;
            goto label_1544ec;
        }
    }
    ctx->pc = 0x154498u;
    // 0x154498: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x154498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15449c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15449cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1544a0: 0xac435844  sw          $v1, 0x5844($v0)
    ctx->pc = 0x1544a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22596), GPR_U32(ctx, 3));
    // 0x1544a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1544a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1544a8: 0xac435854  sw          $v1, 0x5854($v0)
    ctx->pc = 0x1544a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22612), GPR_U32(ctx, 3));
    // 0x1544ac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1544acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1544b0: 0xac435858  sw          $v1, 0x5858($v0)
    ctx->pc = 0x1544b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22616), GPR_U32(ctx, 3));
    // 0x1544b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1544b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1544b8: 0xac43585c  sw          $v1, 0x585C($v0)
    ctx->pc = 0x1544b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22620), GPR_U32(ctx, 3));
    // 0x1544bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1544bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1544c0: 0xac435860  sw          $v1, 0x5860($v0)
    ctx->pc = 0x1544c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22624), GPR_U32(ctx, 3));
    // 0x1544c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1544c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1544c8: 0xac43584c  sw          $v1, 0x584C($v0)
    ctx->pc = 0x1544c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22604), GPR_U32(ctx, 3));
    // 0x1544cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1544ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1544d0: 0xac435850  sw          $v1, 0x5850($v0)
    ctx->pc = 0x1544d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22608), GPR_U32(ctx, 3));
    // 0x1544d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1544d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1544d8: 0xac43586c  sw          $v1, 0x586C($v0)
    ctx->pc = 0x1544d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22636), GPR_U32(ctx, 3));
    // 0x1544dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1544dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1544e0: 0xac435870  sw          $v1, 0x5870($v0)
    ctx->pc = 0x1544e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22640), GPR_U32(ctx, 3));
    // 0x1544e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1544e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1544e8: 0xac405874  sw          $zero, 0x5874($v0)
    ctx->pc = 0x1544e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22644), GPR_U32(ctx, 0));
label_1544ec:
    // 0x1544ec: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1544ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1544f0: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1544f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x1544f4: 0x24847b90  addiu       $a0, $a0, 0x7B90
    ctx->pc = 0x1544f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31632));
    // 0x1544f8: 0x24a51fa0  addiu       $a1, $a1, 0x1FA0
    ctx->pc = 0x1544f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8096));
    // 0x1544fc: 0xc04cd60  jal         func_133580
    ctx->pc = 0x1544FCu;
    SET_GPR_U32(ctx, 31, 0x154504u);
    ctx->pc = 0x154500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1544FCu;
            // 0x154500: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154504u; }
        if (ctx->pc != 0x154504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154504u; }
        if (ctx->pc != 0x154504u) { return; }
    }
    ctx->pc = 0x154504u;
label_154504:
    // 0x154504: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x154504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x154508: 0xc04fe9c  jal         func_13FA70
    ctx->pc = 0x154508u;
    SET_GPR_U32(ctx, 31, 0x154510u);
    ctx->pc = 0x15450Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154508u;
            // 0x15450c: 0x24847b90  addiu       $a0, $a0, 0x7B90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA70u;
    if (runtime->hasFunction(0x13FA70u)) {
        auto targetFn = runtime->lookupFunction(0x13FA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154510u; }
        if (ctx->pc != 0x154510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FA70_0x13fa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154510u; }
        if (ctx->pc != 0x154510u) { return; }
    }
    ctx->pc = 0x154510u;
label_154510:
    // 0x154510: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x154510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x154514: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x154514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x154518: 0x24a55520  addiu       $a1, $a1, 0x5520
    ctx->pc = 0x154518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
    // 0x15451c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x15451Cu;
    SET_GPR_U32(ctx, 31, 0x154524u);
    ctx->pc = 0x154520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15451Cu;
            // 0x154520: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154524u; }
        if (ctx->pc != 0x154524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154524u; }
        if (ctx->pc != 0x154524u) { return; }
    }
    ctx->pc = 0x154524u;
label_154524:
    // 0x154524: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x154524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154528: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x154528u;
    SET_GPR_U32(ctx, 31, 0x154530u);
    ctx->pc = 0x15452Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154528u;
            // 0x15452c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154530u; }
        if (ctx->pc != 0x154530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154530u; }
        if (ctx->pc != 0x154530u) { return; }
    }
    ctx->pc = 0x154530u;
label_154530:
    // 0x154530: 0x8e750038  lw          $s5, 0x38($s3)
    ctx->pc = 0x154530u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x154534: 0x32140007  andi        $s4, $s0, 0x7
    ctx->pc = 0x154534u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x154538: 0x8e76003c  lw          $s6, 0x3C($s3)
    ctx->pc = 0x154538u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x15453c: 0x32170300  andi        $s7, $s0, 0x300
    ctx->pc = 0x15453cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)768);
label_154540:
    // 0x154540: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x154540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x154544: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x154544u;
    {
        const bool branch_taken_0x154544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x154544) {
            ctx->pc = 0x154568u;
            goto label_154568;
        }
    }
    ctx->pc = 0x15454Cu;
    // 0x15454c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x15454cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x154550: 0x741024  and         $v0, $v1, $s4
    ctx->pc = 0x154550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x154554: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x154554u;
    {
        const bool branch_taken_0x154554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154554) {
            ctx->pc = 0x1545A0u;
            goto label_1545a0;
        }
    }
    ctx->pc = 0x15455Cu;
    // 0x15455c: 0x771024  and         $v0, $v1, $s7
    ctx->pc = 0x15455cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x154560: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x154560u;
    {
        const bool branch_taken_0x154560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154560) {
            ctx->pc = 0x1545A0u;
            goto label_1545a0;
        }
    }
    ctx->pc = 0x154568u;
label_154568:
    // 0x154568: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x154568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x15456c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15456cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154570: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x154570u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x154574: 0xac435778  sw          $v1, 0x5778($v0)
    ctx->pc = 0x154574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22392), GPR_U32(ctx, 3));
    // 0x154578: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x154578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x15457c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x15457cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x154580: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x154580u;
    {
        const bool branch_taken_0x154580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154580) {
            ctx->pc = 0x1545A0u;
            goto label_1545a0;
        }
    }
    ctx->pc = 0x154588u;
    // 0x154588: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x154588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15458c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x15458cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154590: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x154590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154594: 0xc055058  jal         func_154160
    ctx->pc = 0x154594u;
    SET_GPR_U32(ctx, 31, 0x15459Cu);
    ctx->pc = 0x154598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154594u;
            // 0x154598: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154160u;
    if (runtime->hasFunction(0x154160u)) {
        auto targetFn = runtime->lookupFunction(0x154160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15459Cu; }
        if (ctx->pc != 0x15459Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00154160_0x154160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15459Cu; }
        if (ctx->pc != 0x15459Cu) { return; }
    }
    ctx->pc = 0x15459Cu;
label_15459c:
    // 0x15459c: 0x0  nop
    ctx->pc = 0x15459cu;
    // NOP
label_1545a0:
    // 0x1545a0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1545a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1545a4: 0x16a0ffe6  bnez        $s5, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1545A4u;
    {
        const bool branch_taken_0x1545a4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1545A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1545A4u;
            // 0x1545a8: 0x26d60014  addiu       $s6, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545a4) {
            ctx->pc = 0x154540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154540;
        }
    }
    ctx->pc = 0x1545ACu;
    // 0x1545ac: 0xc0500bc  jal         func_1402F0
    ctx->pc = 0x1545ACu;
    SET_GPR_U32(ctx, 31, 0x1545B4u);
    ctx->pc = 0x1402F0u;
    if (runtime->hasFunction(0x1402F0u)) {
        auto targetFn = runtime->lookupFunction(0x1402F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1545B4u; }
        if (ctx->pc != 0x1545B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001402F0_0x1402f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1545B4u; }
        if (ctx->pc != 0x1545B4u) { return; }
    }
    ctx->pc = 0x1545B4u;
label_1545b4:
    // 0x1545b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1545b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1545b8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1545b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1545bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1545bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1545c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1545c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1545c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1545c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1545c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1545c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1545cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1545ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1545d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1545d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1545d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1545d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1545d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1545D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1545DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1545D8u;
            // 0x1545dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1545E0u;
}
