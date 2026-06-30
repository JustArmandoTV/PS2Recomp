#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014E360
// Address: 0x14e360 - 0x14e570
void sub_0014E360_0x14e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E360_0x14e360");
#endif

    switch (ctx->pc) {
        case 0x14e3acu: goto label_14e3ac;
        case 0x14e3fcu: goto label_14e3fc;
        case 0x14e474u: goto label_14e474;
        case 0x14e48cu: goto label_14e48c;
        case 0x14e49cu: goto label_14e49c;
        case 0x14e4fcu: goto label_14e4fc;
        case 0x14e51cu: goto label_14e51c;
        case 0x14e540u: goto label_14e540;
        default: break;
    }

    ctx->pc = 0x14e360u;

    // 0x14e360: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x14e360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x14e364: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x14e364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x14e368: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14e368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14e36c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14e36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14e370: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14e370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14e374: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14e374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14e378: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14e378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14e37c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x14e37cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e380: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14e380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14e384: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14e384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14e388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14e38c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14e38cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e394: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14e394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e398: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x14e398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x14e39c: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x14E39Cu;
    {
        const bool branch_taken_0x14e39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E39Cu;
            // 0x14e3a0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e39c) {
            ctx->pc = 0x14E540u;
            goto label_14e540;
        }
    }
    ctx->pc = 0x14E3A4u;
    // 0x14e3a4: 0xc053534  jal         func_14D4D0
    ctx->pc = 0x14E3A4u;
    SET_GPR_U32(ctx, 31, 0x14E3ACu);
    ctx->pc = 0x14E3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E3A4u;
            // 0x14e3a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D4D0u;
    if (runtime->hasFunction(0x14D4D0u)) {
        auto targetFn = runtime->lookupFunction(0x14D4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E3ACu; }
        if (ctx->pc != 0x14E3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D4D0_0x14d4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E3ACu; }
        if (ctx->pc != 0x14E3ACu) { return; }
    }
    ctx->pc = 0x14E3ACu;
label_14e3ac:
    // 0x14e3ac: 0x54400065  bnel        $v0, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x14E3ACu;
    {
        const bool branch_taken_0x14e3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e3ac) {
            ctx->pc = 0x14E3B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E3ACu;
            // 0x14e3b0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E544u;
            goto label_14e544;
        }
    }
    ctx->pc = 0x14E3B4u;
    // 0x14e3b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e3b8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14e3bc: 0xac535784  sw          $s3, 0x5784($v0)
    ctx->pc = 0x14e3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22404), GPR_U32(ctx, 19));
    // 0x14e3c0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x14e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x14e3c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e3c8: 0xac725788  sw          $s2, 0x5788($v1)
    ctx->pc = 0x14e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22408), GPR_U32(ctx, 18));
    // 0x14e3cc: 0xac51578c  sw          $s1, 0x578C($v0)
    ctx->pc = 0x14e3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22412), GPR_U32(ctx, 17));
    // 0x14e3d0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14e3d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e3d8: 0xac705790  sw          $s0, 0x5790($v1)
    ctx->pc = 0x14e3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22416), GPR_U32(ctx, 16));
    // 0x14e3dc: 0xac545794  sw          $s4, 0x5794($v0)
    ctx->pc = 0x14e3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22420), GPR_U32(ctx, 20));
    // 0x14e3e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14e3e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e3e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e3ec: 0xac435760  sw          $v1, 0x5760($v0)
    ctx->pc = 0x14e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22368), GPR_U32(ctx, 3));
    // 0x14e3f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e3f4: 0xc056b04  jal         func_15AC10
    ctx->pc = 0x14E3F4u;
    SET_GPR_U32(ctx, 31, 0x14E3FCu);
    ctx->pc = 0x14E3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E3F4u;
            // 0x14e3f8: 0xac435768  sw          $v1, 0x5768($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC10u;
    if (runtime->hasFunction(0x15AC10u)) {
        auto targetFn = runtime->lookupFunction(0x15AC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E3FCu; }
        if (ctx->pc != 0x14E3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC10_0x15ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E3FCu; }
        if (ctx->pc != 0x14E3FCu) { return; }
    }
    ctx->pc = 0x14E3FCu;
label_14e3fc:
    // 0x14e3fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e400: 0x8c425840  lw          $v0, 0x5840($v0)
    ctx->pc = 0x14e400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22592)));
    // 0x14e404: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14E404u;
    {
        const bool branch_taken_0x14e404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E404u;
            // 0x14e408: 0xaf8081a4  sw          $zero, -0x7E5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934948), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e404) {
            ctx->pc = 0x14E460u;
            goto label_14e460;
        }
    }
    ctx->pc = 0x14E40Cu;
    // 0x14e40c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14e410: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e414: 0xac435844  sw          $v1, 0x5844($v0)
    ctx->pc = 0x14e414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22596), GPR_U32(ctx, 3));
    // 0x14e418: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e41c: 0xac435854  sw          $v1, 0x5854($v0)
    ctx->pc = 0x14e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22612), GPR_U32(ctx, 3));
    // 0x14e420: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e424: 0xac435858  sw          $v1, 0x5858($v0)
    ctx->pc = 0x14e424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22616), GPR_U32(ctx, 3));
    // 0x14e428: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e42c: 0xac43585c  sw          $v1, 0x585C($v0)
    ctx->pc = 0x14e42cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22620), GPR_U32(ctx, 3));
    // 0x14e430: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e434: 0xac435860  sw          $v1, 0x5860($v0)
    ctx->pc = 0x14e434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22624), GPR_U32(ctx, 3));
    // 0x14e438: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e43c: 0xac43584c  sw          $v1, 0x584C($v0)
    ctx->pc = 0x14e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22604), GPR_U32(ctx, 3));
    // 0x14e440: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e444: 0xac435850  sw          $v1, 0x5850($v0)
    ctx->pc = 0x14e444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22608), GPR_U32(ctx, 3));
    // 0x14e448: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e44c: 0xac43586c  sw          $v1, 0x586C($v0)
    ctx->pc = 0x14e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22636), GPR_U32(ctx, 3));
    // 0x14e450: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e454: 0xac435870  sw          $v1, 0x5870($v0)
    ctx->pc = 0x14e454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22640), GPR_U32(ctx, 3));
    // 0x14e458: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e45c: 0xac405874  sw          $zero, 0x5874($v0)
    ctx->pc = 0x14e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22644), GPR_U32(ctx, 0));
label_14e460:
    // 0x14e460: 0x32820100  andi        $v0, $s4, 0x100
    ctx->pc = 0x14e460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)256);
    // 0x14e464: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E464u;
    {
        const bool branch_taken_0x14e464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e464) {
            ctx->pc = 0x14E468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E464u;
            // 0x14e468: 0x32821000  andi        $v0, $s4, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E47Cu;
            goto label_14e47c;
        }
    }
    ctx->pc = 0x14E46Cu;
    // 0x14e46c: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x14E46Cu;
    SET_GPR_U32(ctx, 31, 0x14E474u);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E474u; }
        if (ctx->pc != 0x14E474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001398E0_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E474u; }
        if (ctx->pc != 0x14E474u) { return; }
    }
    ctx->pc = 0x14E474u;
label_14e474:
    // 0x14e474: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14E474u;
    {
        const bool branch_taken_0x14e474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E474u;
            // 0x14e478: 0x8e740038  lw          $s4, 0x38($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e474) {
            ctx->pc = 0x14E490u;
            goto label_14e490;
        }
    }
    ctx->pc = 0x14E47Cu;
label_14e47c:
    // 0x14e47c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E47Cu;
    {
        const bool branch_taken_0x14e47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e47c) {
            ctx->pc = 0x14E48Cu;
            goto label_14e48c;
        }
    }
    ctx->pc = 0x14E484u;
    // 0x14e484: 0xc04e5c4  jal         func_139710
    ctx->pc = 0x14E484u;
    SET_GPR_U32(ctx, 31, 0x14E48Cu);
    ctx->pc = 0x139710u;
    if (runtime->hasFunction(0x139710u)) {
        auto targetFn = runtime->lookupFunction(0x139710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E48Cu; }
        if (ctx->pc != 0x14E48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139710_0x139710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E48Cu; }
        if (ctx->pc != 0x14E48Cu) { return; }
    }
    ctx->pc = 0x14E48Cu;
label_14e48c:
    // 0x14e48c: 0x8e740038  lw          $s4, 0x38($s3)
    ctx->pc = 0x14e48cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_14e490:
    // 0x14e490: 0x32160007  andi        $s6, $s0, 0x7
    ctx->pc = 0x14e490u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x14e494: 0x8e75003c  lw          $s5, 0x3C($s3)
    ctx->pc = 0x14e494u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x14e498: 0x32170300  andi        $s7, $s0, 0x300
    ctx->pc = 0x14e498u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)768);
label_14e49c:
    // 0x14e49c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14e4a0: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14E4A0u;
    {
        const bool branch_taken_0x14e4a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e4a0) {
            ctx->pc = 0x14E4C8u;
            goto label_14e4c8;
        }
    }
    ctx->pc = 0x14E4A8u;
    // 0x14e4a8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x14e4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14e4ac: 0x761024  and         $v0, $v1, $s6
    ctx->pc = 0x14e4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x14e4b0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x14E4B0u;
    {
        const bool branch_taken_0x14e4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e4b0) {
            ctx->pc = 0x14E520u;
            goto label_14e520;
        }
    }
    ctx->pc = 0x14E4B8u;
    // 0x14e4b8: 0x771024  and         $v0, $v1, $s7
    ctx->pc = 0x14e4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x14e4bc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14E4BCu;
    {
        const bool branch_taken_0x14e4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e4bc) {
            ctx->pc = 0x14E520u;
            goto label_14e520;
        }
    }
    ctx->pc = 0x14E4C4u;
    // 0x14e4c4: 0x0  nop
    ctx->pc = 0x14e4c4u;
    // NOP
label_14e4c8:
    // 0x14e4c8: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x14e4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x14e4cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e4d0: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x14e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x14e4d4: 0xac435778  sw          $v1, 0x5778($v0)
    ctx->pc = 0x14e4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22392), GPR_U32(ctx, 3));
    // 0x14e4d8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x14e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14e4dc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x14e4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x14e4e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14E4E0u;
    {
        const bool branch_taken_0x14e4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e4e0) {
            ctx->pc = 0x14E508u;
            goto label_14e508;
        }
    }
    ctx->pc = 0x14E4E8u;
    // 0x14e4e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14e4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14e4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4f4: 0xc0536ec  jal         func_14DBB0
    ctx->pc = 0x14E4F4u;
    SET_GPR_U32(ctx, 31, 0x14E4FCu);
    ctx->pc = 0x14E4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E4F4u;
            // 0x14e4f8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DBB0u;
    if (runtime->hasFunction(0x14DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x14DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E4FCu; }
        if (ctx->pc != 0x14E4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014DBB0_0x14dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E4FCu; }
        if (ctx->pc != 0x14E4FCu) { return; }
    }
    ctx->pc = 0x14E4FCu;
label_14e4fc:
    // 0x14e4fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14E4FCu;
    {
        const bool branch_taken_0x14e4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e4fc) {
            ctx->pc = 0x14E520u;
            goto label_14e520;
        }
    }
    ctx->pc = 0x14E504u;
    // 0x14e504: 0x0  nop
    ctx->pc = 0x14e504u;
    // NOP
label_14e508:
    // 0x14e508: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14e508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e50c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14e50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e510: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e514: 0xc0537cc  jal         func_14DF30
    ctx->pc = 0x14E514u;
    SET_GPR_U32(ctx, 31, 0x14E51Cu);
    ctx->pc = 0x14E518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E514u;
            // 0x14e518: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DF30u;
    if (runtime->hasFunction(0x14DF30u)) {
        auto targetFn = runtime->lookupFunction(0x14DF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E51Cu; }
        if (ctx->pc != 0x14E51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014DF30_0x14df30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E51Cu; }
        if (ctx->pc != 0x14E51Cu) { return; }
    }
    ctx->pc = 0x14E51Cu;
label_14e51c:
    // 0x14e51c: 0x0  nop
    ctx->pc = 0x14e51cu;
    // NOP
label_14e520:
    // 0x14e520: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x14e520u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x14e524: 0x1680ffdd  bnez        $s4, . + 4 + (-0x23 << 2)
    ctx->pc = 0x14E524u;
    {
        const bool branch_taken_0x14e524 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E524u;
            // 0x14e528: 0x26b50014  addiu       $s5, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e524) {
            ctx->pc = 0x14E49Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14e49c;
        }
    }
    ctx->pc = 0x14E52Cu;
    // 0x14e52c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14e52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14e530: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e534: 0xac605808  sw          $zero, 0x5808($v1)
    ctx->pc = 0x14e534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22536), GPR_U32(ctx, 0));
    // 0x14e538: 0xc0500bc  jal         func_1402F0
    ctx->pc = 0x14E538u;
    SET_GPR_U32(ctx, 31, 0x14E540u);
    ctx->pc = 0x14E53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E538u;
            // 0x14e53c: 0xac405814  sw          $zero, 0x5814($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1402F0u;
    if (runtime->hasFunction(0x1402F0u)) {
        auto targetFn = runtime->lookupFunction(0x1402F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E540u; }
        if (ctx->pc != 0x14E540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001402F0_0x1402f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E540u; }
        if (ctx->pc != 0x14E540u) { return; }
    }
    ctx->pc = 0x14E540u;
label_14e540:
    // 0x14e540: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x14e540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_14e544:
    // 0x14e544: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14e544u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14e548: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14e548u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14e54c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14e54cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14e550: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14e550u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e554: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14e554u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e558: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14e558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e55c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e55cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e560: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e564: 0x3e00008  jr          $ra
    ctx->pc = 0x14E564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E564u;
            // 0x14e568: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14E56Cu;
    // 0x14e56c: 0x0  nop
    ctx->pc = 0x14e56cu;
    // NOP
}
