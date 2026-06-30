#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001548D0
// Address: 0x1548d0 - 0x154b10
void sub_001548D0_0x1548d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001548D0_0x1548d0");
#endif

    switch (ctx->pc) {
        case 0x154958u: goto label_154958;
        case 0x15496cu: goto label_15496c;
        case 0x1549e4u: goto label_1549e4;
        case 0x1549fcu: goto label_1549fc;
        case 0x154a24u: goto label_154a24;
        case 0x154a30u: goto label_154a30;
        case 0x154a44u: goto label_154a44;
        case 0x154a50u: goto label_154a50;
        case 0x154a60u: goto label_154a60;
        case 0x154abcu: goto label_154abc;
        case 0x154ae0u: goto label_154ae0;
        default: break;
    }

    ctx->pc = 0x1548d0u;

    // 0x1548d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1548d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1548d4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1548d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1548d8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1548d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1548dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1548dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1548e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1548e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1548e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1548e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1548e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1548e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1548ec: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1548ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1548f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1548f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1548f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1548f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1548f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1548f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1548fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1548fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154900: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x154904: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x154904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154908: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x154908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x15490c: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x15490Cu;
    {
        const bool branch_taken_0x15490c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15490Cu;
            // 0x154910: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15490c) {
            ctx->pc = 0x154AE0u;
            goto label_154ae0;
        }
    }
    ctx->pc = 0x154914u;
    // 0x154914: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154918: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x154918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x15491c: 0xac535784  sw          $s3, 0x5784($v0)
    ctx->pc = 0x15491cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22404), GPR_U32(ctx, 19));
    // 0x154920: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x154920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154924: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154928: 0xac725788  sw          $s2, 0x5788($v1)
    ctx->pc = 0x154928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22408), GPR_U32(ctx, 18));
    // 0x15492c: 0xac51578c  sw          $s1, 0x578C($v0)
    ctx->pc = 0x15492cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22412), GPR_U32(ctx, 17));
    // 0x154930: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x154930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x154934: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154938: 0xac705790  sw          $s0, 0x5790($v1)
    ctx->pc = 0x154938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22416), GPR_U32(ctx, 16));
    // 0x15493c: 0xac545794  sw          $s4, 0x5794($v0)
    ctx->pc = 0x15493cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22420), GPR_U32(ctx, 20));
    // 0x154940: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x154940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x154944: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154948: 0xac435760  sw          $v1, 0x5760($v0)
    ctx->pc = 0x154948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22368), GPR_U32(ctx, 3));
    // 0x15494c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15494cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154950: 0xc053534  jal         func_14D4D0
    ctx->pc = 0x154950u;
    SET_GPR_U32(ctx, 31, 0x154958u);
    ctx->pc = 0x154954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154950u;
            // 0x154954: 0xac435768  sw          $v1, 0x5768($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D4D0u;
    if (runtime->hasFunction(0x14D4D0u)) {
        auto targetFn = runtime->lookupFunction(0x14D4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154958u; }
        if (ctx->pc != 0x154958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D4D0_0x14d4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154958u; }
        if (ctx->pc != 0x154958u) { return; }
    }
    ctx->pc = 0x154958u;
label_154958:
    // 0x154958: 0x54400062  bnel        $v0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x154958u;
    {
        const bool branch_taken_0x154958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154958) {
            ctx->pc = 0x15495Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x154958u;
            // 0x15495c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x154AE4u;
            goto label_154ae4;
        }
    }
    ctx->pc = 0x154960u;
    // 0x154960: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x154960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x154964: 0xc056b04  jal         func_15AC10
    ctx->pc = 0x154964u;
    SET_GPR_U32(ctx, 31, 0x15496Cu);
    ctx->pc = 0x154968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154964u;
            // 0x154968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC10u;
    if (runtime->hasFunction(0x15AC10u)) {
        auto targetFn = runtime->lookupFunction(0x15AC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15496Cu; }
        if (ctx->pc != 0x15496Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC10_0x15ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15496Cu; }
        if (ctx->pc != 0x15496Cu) { return; }
    }
    ctx->pc = 0x15496Cu;
label_15496c:
    // 0x15496c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15496cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154970: 0x8c425840  lw          $v0, 0x5840($v0)
    ctx->pc = 0x154970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22592)));
    // 0x154974: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x154974u;
    {
        const bool branch_taken_0x154974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154974u;
            // 0x154978: 0xaf8081a4  sw          $zero, -0x7E5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934948), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154974) {
            ctx->pc = 0x1549D0u;
            goto label_1549d0;
        }
    }
    ctx->pc = 0x15497Cu;
    // 0x15497c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15497cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x154980: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154984: 0xac435844  sw          $v1, 0x5844($v0)
    ctx->pc = 0x154984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22596), GPR_U32(ctx, 3));
    // 0x154988: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15498c: 0xac435854  sw          $v1, 0x5854($v0)
    ctx->pc = 0x15498cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22612), GPR_U32(ctx, 3));
    // 0x154990: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154994: 0xac435858  sw          $v1, 0x5858($v0)
    ctx->pc = 0x154994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22616), GPR_U32(ctx, 3));
    // 0x154998: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15499c: 0xac43585c  sw          $v1, 0x585C($v0)
    ctx->pc = 0x15499cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22620), GPR_U32(ctx, 3));
    // 0x1549a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1549a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1549a4: 0xac435860  sw          $v1, 0x5860($v0)
    ctx->pc = 0x1549a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22624), GPR_U32(ctx, 3));
    // 0x1549a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1549a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1549ac: 0xac43584c  sw          $v1, 0x584C($v0)
    ctx->pc = 0x1549acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22604), GPR_U32(ctx, 3));
    // 0x1549b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1549b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1549b4: 0xac435850  sw          $v1, 0x5850($v0)
    ctx->pc = 0x1549b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22608), GPR_U32(ctx, 3));
    // 0x1549b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1549b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1549bc: 0xac43586c  sw          $v1, 0x586C($v0)
    ctx->pc = 0x1549bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22636), GPR_U32(ctx, 3));
    // 0x1549c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1549c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1549c4: 0xac435870  sw          $v1, 0x5870($v0)
    ctx->pc = 0x1549c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22640), GPR_U32(ctx, 3));
    // 0x1549c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1549c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1549cc: 0xac405874  sw          $zero, 0x5874($v0)
    ctx->pc = 0x1549ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22644), GPR_U32(ctx, 0));
label_1549d0:
    // 0x1549d0: 0x32820100  andi        $v0, $s4, 0x100
    ctx->pc = 0x1549d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)256);
    // 0x1549d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1549D4u;
    {
        const bool branch_taken_0x1549d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1549d4) {
            ctx->pc = 0x1549D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1549D4u;
            // 0x1549d8: 0x32821000  andi        $v0, $s4, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1549ECu;
            goto label_1549ec;
        }
    }
    ctx->pc = 0x1549DCu;
    // 0x1549dc: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x1549DCu;
    SET_GPR_U32(ctx, 31, 0x1549E4u);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1549E4u; }
        if (ctx->pc != 0x1549E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001398E0_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1549E4u; }
        if (ctx->pc != 0x1549E4u) { return; }
    }
    ctx->pc = 0x1549E4u;
label_1549e4:
    // 0x1549e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1549E4u;
    {
        const bool branch_taken_0x1549e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1549e4) {
            ctx->pc = 0x1549FCu;
            goto label_1549fc;
        }
    }
    ctx->pc = 0x1549ECu;
label_1549ec:
    // 0x1549ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1549ECu;
    {
        const bool branch_taken_0x1549ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1549ec) {
            ctx->pc = 0x1549FCu;
            goto label_1549fc;
        }
    }
    ctx->pc = 0x1549F4u;
    // 0x1549f4: 0xc04e5c4  jal         func_139710
    ctx->pc = 0x1549F4u;
    SET_GPR_U32(ctx, 31, 0x1549FCu);
    ctx->pc = 0x139710u;
    if (runtime->hasFunction(0x139710u)) {
        auto targetFn = runtime->lookupFunction(0x139710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1549FCu; }
        if (ctx->pc != 0x1549FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139710_0x139710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1549FCu; }
        if (ctx->pc != 0x1549FCu) { return; }
    }
    ctx->pc = 0x1549FCu;
label_1549fc:
    // 0x1549fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1549fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154a00: 0x8c425804  lw          $v0, 0x5804($v0)
    ctx->pc = 0x154a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22532)));
    // 0x154a04: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x154A04u;
    {
        const bool branch_taken_0x154a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154a04) {
            ctx->pc = 0x154A30u;
            goto label_154a30;
        }
    }
    ctx->pc = 0x154A0Cu;
    // 0x154a0c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x154a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x154a10: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x154a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x154a14: 0x24847bd0  addiu       $a0, $a0, 0x7BD0
    ctx->pc = 0x154a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31696));
    // 0x154a18: 0x24a51fa0  addiu       $a1, $a1, 0x1FA0
    ctx->pc = 0x154a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8096));
    // 0x154a1c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x154A1Cu;
    SET_GPR_U32(ctx, 31, 0x154A24u);
    ctx->pc = 0x154A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154A1Cu;
            // 0x154a20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154A24u; }
        if (ctx->pc != 0x154A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154A24u; }
        if (ctx->pc != 0x154A24u) { return; }
    }
    ctx->pc = 0x154A24u;
label_154a24:
    // 0x154a24: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x154a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x154a28: 0xc0534dc  jal         func_14D370
    ctx->pc = 0x154A28u;
    SET_GPR_U32(ctx, 31, 0x154A30u);
    ctx->pc = 0x154A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154A28u;
            // 0x154a2c: 0x24847bd0  addiu       $a0, $a0, 0x7BD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (runtime->hasFunction(0x14D370u)) {
        auto targetFn = runtime->lookupFunction(0x14D370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154A30u; }
        if (ctx->pc != 0x154A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D370_0x14d370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154A30u; }
        if (ctx->pc != 0x154A30u) { return; }
    }
    ctx->pc = 0x154A30u;
label_154a30:
    // 0x154a30: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x154a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x154a34: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x154a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x154a38: 0x24a55520  addiu       $a1, $a1, 0x5520
    ctx->pc = 0x154a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
    // 0x154a3c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x154A3Cu;
    SET_GPR_U32(ctx, 31, 0x154A44u);
    ctx->pc = 0x154A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154A3Cu;
            // 0x154a40: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154A44u; }
        if (ctx->pc != 0x154A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154A44u; }
        if (ctx->pc != 0x154A44u) { return; }
    }
    ctx->pc = 0x154A44u;
label_154a44:
    // 0x154a44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x154a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154a48: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x154A48u;
    SET_GPR_U32(ctx, 31, 0x154A50u);
    ctx->pc = 0x154A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154A48u;
            // 0x154a4c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154A50u; }
        if (ctx->pc != 0x154A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154A50u; }
        if (ctx->pc != 0x154A50u) { return; }
    }
    ctx->pc = 0x154A50u;
label_154a50:
    // 0x154a50: 0x8e740038  lw          $s4, 0x38($s3)
    ctx->pc = 0x154a50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x154a54: 0x32160007  andi        $s6, $s0, 0x7
    ctx->pc = 0x154a54u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x154a58: 0x8e75003c  lw          $s5, 0x3C($s3)
    ctx->pc = 0x154a58u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x154a5c: 0x32170300  andi        $s7, $s0, 0x300
    ctx->pc = 0x154a5cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)768);
label_154a60:
    // 0x154a60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x154a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x154a64: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x154A64u;
    {
        const bool branch_taken_0x154a64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x154a64) {
            ctx->pc = 0x154A88u;
            goto label_154a88;
        }
    }
    ctx->pc = 0x154A6Cu;
    // 0x154a6c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x154a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x154a70: 0x761024  and         $v0, $v1, $s6
    ctx->pc = 0x154a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x154a74: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x154A74u;
    {
        const bool branch_taken_0x154a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154a74) {
            ctx->pc = 0x154AC0u;
            goto label_154ac0;
        }
    }
    ctx->pc = 0x154A7Cu;
    // 0x154a7c: 0x771024  and         $v0, $v1, $s7
    ctx->pc = 0x154a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x154a80: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x154A80u;
    {
        const bool branch_taken_0x154a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154a80) {
            ctx->pc = 0x154AC0u;
            goto label_154ac0;
        }
    }
    ctx->pc = 0x154A88u;
label_154a88:
    // 0x154a88: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x154a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x154a8c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154a90: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x154a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x154a94: 0xac435778  sw          $v1, 0x5778($v0)
    ctx->pc = 0x154a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22392), GPR_U32(ctx, 3));
    // 0x154a98: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x154a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x154a9c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x154a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x154aa0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x154AA0u;
    {
        const bool branch_taken_0x154aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154aa0) {
            ctx->pc = 0x154AC0u;
            goto label_154ac0;
        }
    }
    ctx->pc = 0x154AA8u;
    // 0x154aa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x154aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154aac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x154aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ab0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x154ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ab4: 0xc055178  jal         func_1545E0
    ctx->pc = 0x154AB4u;
    SET_GPR_U32(ctx, 31, 0x154ABCu);
    ctx->pc = 0x154AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154AB4u;
            // 0x154ab8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1545E0u;
    if (runtime->hasFunction(0x1545E0u)) {
        auto targetFn = runtime->lookupFunction(0x1545E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154ABCu; }
        if (ctx->pc != 0x154ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001545E0_0x1545e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154ABCu; }
        if (ctx->pc != 0x154ABCu) { return; }
    }
    ctx->pc = 0x154ABCu;
label_154abc:
    // 0x154abc: 0x0  nop
    ctx->pc = 0x154abcu;
    // NOP
label_154ac0:
    // 0x154ac0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x154ac0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x154ac4: 0x1680ffe6  bnez        $s4, . + 4 + (-0x1A << 2)
    ctx->pc = 0x154AC4u;
    {
        const bool branch_taken_0x154ac4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x154AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154AC4u;
            // 0x154ac8: 0x26b50014  addiu       $s5, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ac4) {
            ctx->pc = 0x154A60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154a60;
        }
    }
    ctx->pc = 0x154ACCu;
    // 0x154acc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x154accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x154ad0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154ad4: 0xac605808  sw          $zero, 0x5808($v1)
    ctx->pc = 0x154ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22536), GPR_U32(ctx, 0));
    // 0x154ad8: 0xc0500bc  jal         func_1402F0
    ctx->pc = 0x154AD8u;
    SET_GPR_U32(ctx, 31, 0x154AE0u);
    ctx->pc = 0x154ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154AD8u;
            // 0x154adc: 0xac405814  sw          $zero, 0x5814($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1402F0u;
    if (runtime->hasFunction(0x1402F0u)) {
        auto targetFn = runtime->lookupFunction(0x1402F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154AE0u; }
        if (ctx->pc != 0x154AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001402F0_0x1402f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154AE0u; }
        if (ctx->pc != 0x154AE0u) { return; }
    }
    ctx->pc = 0x154AE0u;
label_154ae0:
    // 0x154ae0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x154ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_154ae4:
    // 0x154ae4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x154ae4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x154ae8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x154ae8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x154aec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x154aecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x154af0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x154af0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154af4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x154af4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154af8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x154af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154afc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154b00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154b04: 0x3e00008  jr          $ra
    ctx->pc = 0x154B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154B04u;
            // 0x154b08: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154B0Cu;
    // 0x154b0c: 0x0  nop
    ctx->pc = 0x154b0cu;
    // NOP
}
