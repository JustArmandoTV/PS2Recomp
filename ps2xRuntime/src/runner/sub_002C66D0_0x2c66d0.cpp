#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C66D0
// Address: 0x2c66d0 - 0x2c6850
void sub_002C66D0_0x2c66d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C66D0_0x2c66d0");
#endif

    switch (ctx->pc) {
        case 0x2c66d0u: goto label_2c66d0;
        case 0x2c66d4u: goto label_2c66d4;
        case 0x2c66d8u: goto label_2c66d8;
        case 0x2c66dcu: goto label_2c66dc;
        case 0x2c66e0u: goto label_2c66e0;
        case 0x2c66e4u: goto label_2c66e4;
        case 0x2c66e8u: goto label_2c66e8;
        case 0x2c66ecu: goto label_2c66ec;
        case 0x2c66f0u: goto label_2c66f0;
        case 0x2c66f4u: goto label_2c66f4;
        case 0x2c66f8u: goto label_2c66f8;
        case 0x2c66fcu: goto label_2c66fc;
        case 0x2c6700u: goto label_2c6700;
        case 0x2c6704u: goto label_2c6704;
        case 0x2c6708u: goto label_2c6708;
        case 0x2c670cu: goto label_2c670c;
        case 0x2c6710u: goto label_2c6710;
        case 0x2c6714u: goto label_2c6714;
        case 0x2c6718u: goto label_2c6718;
        case 0x2c671cu: goto label_2c671c;
        case 0x2c6720u: goto label_2c6720;
        case 0x2c6724u: goto label_2c6724;
        case 0x2c6728u: goto label_2c6728;
        case 0x2c672cu: goto label_2c672c;
        case 0x2c6730u: goto label_2c6730;
        case 0x2c6734u: goto label_2c6734;
        case 0x2c6738u: goto label_2c6738;
        case 0x2c673cu: goto label_2c673c;
        case 0x2c6740u: goto label_2c6740;
        case 0x2c6744u: goto label_2c6744;
        case 0x2c6748u: goto label_2c6748;
        case 0x2c674cu: goto label_2c674c;
        case 0x2c6750u: goto label_2c6750;
        case 0x2c6754u: goto label_2c6754;
        case 0x2c6758u: goto label_2c6758;
        case 0x2c675cu: goto label_2c675c;
        case 0x2c6760u: goto label_2c6760;
        case 0x2c6764u: goto label_2c6764;
        case 0x2c6768u: goto label_2c6768;
        case 0x2c676cu: goto label_2c676c;
        case 0x2c6770u: goto label_2c6770;
        case 0x2c6774u: goto label_2c6774;
        case 0x2c6778u: goto label_2c6778;
        case 0x2c677cu: goto label_2c677c;
        case 0x2c6780u: goto label_2c6780;
        case 0x2c6784u: goto label_2c6784;
        case 0x2c6788u: goto label_2c6788;
        case 0x2c678cu: goto label_2c678c;
        case 0x2c6790u: goto label_2c6790;
        case 0x2c6794u: goto label_2c6794;
        case 0x2c6798u: goto label_2c6798;
        case 0x2c679cu: goto label_2c679c;
        case 0x2c67a0u: goto label_2c67a0;
        case 0x2c67a4u: goto label_2c67a4;
        case 0x2c67a8u: goto label_2c67a8;
        case 0x2c67acu: goto label_2c67ac;
        case 0x2c67b0u: goto label_2c67b0;
        case 0x2c67b4u: goto label_2c67b4;
        case 0x2c67b8u: goto label_2c67b8;
        case 0x2c67bcu: goto label_2c67bc;
        case 0x2c67c0u: goto label_2c67c0;
        case 0x2c67c4u: goto label_2c67c4;
        case 0x2c67c8u: goto label_2c67c8;
        case 0x2c67ccu: goto label_2c67cc;
        case 0x2c67d0u: goto label_2c67d0;
        case 0x2c67d4u: goto label_2c67d4;
        case 0x2c67d8u: goto label_2c67d8;
        case 0x2c67dcu: goto label_2c67dc;
        case 0x2c67e0u: goto label_2c67e0;
        case 0x2c67e4u: goto label_2c67e4;
        case 0x2c67e8u: goto label_2c67e8;
        case 0x2c67ecu: goto label_2c67ec;
        case 0x2c67f0u: goto label_2c67f0;
        case 0x2c67f4u: goto label_2c67f4;
        case 0x2c67f8u: goto label_2c67f8;
        case 0x2c67fcu: goto label_2c67fc;
        case 0x2c6800u: goto label_2c6800;
        case 0x2c6804u: goto label_2c6804;
        case 0x2c6808u: goto label_2c6808;
        case 0x2c680cu: goto label_2c680c;
        case 0x2c6810u: goto label_2c6810;
        case 0x2c6814u: goto label_2c6814;
        case 0x2c6818u: goto label_2c6818;
        case 0x2c681cu: goto label_2c681c;
        case 0x2c6820u: goto label_2c6820;
        case 0x2c6824u: goto label_2c6824;
        case 0x2c6828u: goto label_2c6828;
        case 0x2c682cu: goto label_2c682c;
        case 0x2c6830u: goto label_2c6830;
        case 0x2c6834u: goto label_2c6834;
        case 0x2c6838u: goto label_2c6838;
        case 0x2c683cu: goto label_2c683c;
        case 0x2c6840u: goto label_2c6840;
        case 0x2c6844u: goto label_2c6844;
        case 0x2c6848u: goto label_2c6848;
        case 0x2c684cu: goto label_2c684c;
        default: break;
    }

    ctx->pc = 0x2c66d0u;

label_2c66d0:
    // 0x2c66d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c66d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c66d4:
    // 0x2c66d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c66d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c66d8:
    // 0x2c66d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c66d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c66dc:
    // 0x2c66dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c66dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c66e0:
    // 0x2c66e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c66e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c66e4:
    // 0x2c66e4: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_2c66e8:
    if (ctx->pc == 0x2C66E8u) {
        ctx->pc = 0x2C66E8u;
            // 0x2c66e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C66ECu;
        goto label_2c66ec;
    }
    ctx->pc = 0x2C66E4u;
    {
        const bool branch_taken_0x2c66e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C66E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C66E4u;
            // 0x2c66e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66e4) {
            ctx->pc = 0x2C682Cu;
            goto label_2c682c;
        }
    }
    ctx->pc = 0x2C66ECu;
label_2c66ec:
    // 0x2c66ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c66ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c66f0:
    // 0x2c66f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c66f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c66f4:
    // 0x2c66f4: 0x24630ae0  addiu       $v1, $v1, 0xAE0
    ctx->pc = 0x2c66f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2784));
label_2c66f8:
    // 0x2c66f8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c66f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c66fc:
    // 0x2c66fc: 0x24420b18  addiu       $v0, $v0, 0xB18
    ctx->pc = 0x2c66fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2840));
label_2c6700:
    // 0x2c6700: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c6700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c6704:
    // 0x2c6704: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c6704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c6708:
    // 0x2c6708: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c6708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c670c:
    // 0x2c670c: 0xc0407c0  jal         func_101F00
label_2c6710:
    if (ctx->pc == 0x2C6710u) {
        ctx->pc = 0x2C6710u;
            // 0x2c6710: 0x24a565d0  addiu       $a1, $a1, 0x65D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26064));
        ctx->pc = 0x2C6714u;
        goto label_2c6714;
    }
    ctx->pc = 0x2C670Cu;
    SET_GPR_U32(ctx, 31, 0x2C6714u);
    ctx->pc = 0x2C6710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C670Cu;
            // 0x2c6710: 0x24a565d0  addiu       $a1, $a1, 0x65D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6714u; }
        if (ctx->pc != 0x2C6714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6714u; }
        if (ctx->pc != 0x2C6714u) { return; }
    }
    ctx->pc = 0x2C6714u;
label_2c6714:
    // 0x2c6714: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c6714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c6718:
    // 0x2c6718: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2c671c:
    if (ctx->pc == 0x2C671Cu) {
        ctx->pc = 0x2C671Cu;
            // 0x2c671c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C6720u;
        goto label_2c6720;
    }
    ctx->pc = 0x2C6718u;
    {
        const bool branch_taken_0x2c6718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6718) {
            ctx->pc = 0x2C671Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6718u;
            // 0x2c671c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6740u;
            goto label_2c6740;
        }
    }
    ctx->pc = 0x2C6720u;
label_2c6720:
    // 0x2c6720: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x2c6720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2c6724:
    // 0x2c6724: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2c6728:
    if (ctx->pc == 0x2C6728u) {
        ctx->pc = 0x2C6728u;
            // 0x2c6728: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x2C672Cu;
        goto label_2c672c;
    }
    ctx->pc = 0x2C6724u;
    {
        const bool branch_taken_0x2c6724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6724) {
            ctx->pc = 0x2C6728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6724u;
            // 0x2c6728: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C673Cu;
            goto label_2c673c;
        }
    }
    ctx->pc = 0x2C672Cu;
label_2c672c:
    // 0x2c672c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2c672cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2c6730:
    // 0x2c6730: 0xc0407c0  jal         func_101F00
label_2c6734:
    if (ctx->pc == 0x2C6734u) {
        ctx->pc = 0x2C6734u;
            // 0x2c6734: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->pc = 0x2C6738u;
        goto label_2c6738;
    }
    ctx->pc = 0x2C6730u;
    SET_GPR_U32(ctx, 31, 0x2C6738u);
    ctx->pc = 0x2C6734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6730u;
            // 0x2c6734: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6738u; }
        if (ctx->pc != 0x2C6738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6738u; }
        if (ctx->pc != 0x2C6738u) { return; }
    }
    ctx->pc = 0x2C6738u;
label_2c6738:
    // 0x2c6738: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2c6738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_2c673c:
    // 0x2c673c: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c673cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c6740:
    // 0x2c6740: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c6744:
    if (ctx->pc == 0x2C6744u) {
        ctx->pc = 0x2C6744u;
            // 0x2c6744: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C6748u;
        goto label_2c6748;
    }
    ctx->pc = 0x2C6740u;
    {
        const bool branch_taken_0x2c6740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6740) {
            ctx->pc = 0x2C6744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6740u;
            // 0x2c6744: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6770u;
            goto label_2c6770;
        }
    }
    ctx->pc = 0x2C6748u;
label_2c6748:
    // 0x2c6748: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c674c:
    if (ctx->pc == 0x2C674Cu) {
        ctx->pc = 0x2C6750u;
        goto label_2c6750;
    }
    ctx->pc = 0x2C6748u;
    {
        const bool branch_taken_0x2c6748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6748) {
            ctx->pc = 0x2C676Cu;
            goto label_2c676c;
        }
    }
    ctx->pc = 0x2C6750u;
label_2c6750:
    // 0x2c6750: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c6754:
    if (ctx->pc == 0x2C6754u) {
        ctx->pc = 0x2C6758u;
        goto label_2c6758;
    }
    ctx->pc = 0x2C6750u;
    {
        const bool branch_taken_0x2c6750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6750) {
            ctx->pc = 0x2C676Cu;
            goto label_2c676c;
        }
    }
    ctx->pc = 0x2C6758u;
label_2c6758:
    // 0x2c6758: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c6758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c675c:
    // 0x2c675c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c6760:
    if (ctx->pc == 0x2C6760u) {
        ctx->pc = 0x2C6764u;
        goto label_2c6764;
    }
    ctx->pc = 0x2C675Cu;
    {
        const bool branch_taken_0x2c675c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c675c) {
            ctx->pc = 0x2C676Cu;
            goto label_2c676c;
        }
    }
    ctx->pc = 0x2C6764u;
label_2c6764:
    // 0x2c6764: 0xc0400a8  jal         func_1002A0
label_2c6768:
    if (ctx->pc == 0x2C6768u) {
        ctx->pc = 0x2C676Cu;
        goto label_2c676c;
    }
    ctx->pc = 0x2C6764u;
    SET_GPR_U32(ctx, 31, 0x2C676Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C676Cu; }
        if (ctx->pc != 0x2C676Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C676Cu; }
        if (ctx->pc != 0x2C676Cu) { return; }
    }
    ctx->pc = 0x2C676Cu;
label_2c676c:
    // 0x2c676c: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c676cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c6770:
    // 0x2c6770: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c6774:
    if (ctx->pc == 0x2C6774u) {
        ctx->pc = 0x2C6774u;
            // 0x2c6774: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C6778u;
        goto label_2c6778;
    }
    ctx->pc = 0x2C6770u;
    {
        const bool branch_taken_0x2c6770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6770) {
            ctx->pc = 0x2C6774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6770u;
            // 0x2c6774: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C67A0u;
            goto label_2c67a0;
        }
    }
    ctx->pc = 0x2C6778u;
label_2c6778:
    // 0x2c6778: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c677c:
    if (ctx->pc == 0x2C677Cu) {
        ctx->pc = 0x2C6780u;
        goto label_2c6780;
    }
    ctx->pc = 0x2C6778u;
    {
        const bool branch_taken_0x2c6778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6778) {
            ctx->pc = 0x2C679Cu;
            goto label_2c679c;
        }
    }
    ctx->pc = 0x2C6780u;
label_2c6780:
    // 0x2c6780: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c6784:
    if (ctx->pc == 0x2C6784u) {
        ctx->pc = 0x2C6788u;
        goto label_2c6788;
    }
    ctx->pc = 0x2C6780u;
    {
        const bool branch_taken_0x2c6780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6780) {
            ctx->pc = 0x2C679Cu;
            goto label_2c679c;
        }
    }
    ctx->pc = 0x2C6788u;
label_2c6788:
    // 0x2c6788: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c6788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c678c:
    // 0x2c678c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c6790:
    if (ctx->pc == 0x2C6790u) {
        ctx->pc = 0x2C6794u;
        goto label_2c6794;
    }
    ctx->pc = 0x2C678Cu;
    {
        const bool branch_taken_0x2c678c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c678c) {
            ctx->pc = 0x2C679Cu;
            goto label_2c679c;
        }
    }
    ctx->pc = 0x2C6794u;
label_2c6794:
    // 0x2c6794: 0xc0400a8  jal         func_1002A0
label_2c6798:
    if (ctx->pc == 0x2C6798u) {
        ctx->pc = 0x2C679Cu;
        goto label_2c679c;
    }
    ctx->pc = 0x2C6794u;
    SET_GPR_U32(ctx, 31, 0x2C679Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C679Cu; }
        if (ctx->pc != 0x2C679Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C679Cu; }
        if (ctx->pc != 0x2C679Cu) { return; }
    }
    ctx->pc = 0x2C679Cu;
label_2c679c:
    // 0x2c679c: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c679cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c67a0:
    // 0x2c67a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c67a4:
    if (ctx->pc == 0x2C67A4u) {
        ctx->pc = 0x2C67A8u;
        goto label_2c67a8;
    }
    ctx->pc = 0x2C67A0u;
    {
        const bool branch_taken_0x2c67a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c67a0) {
            ctx->pc = 0x2C67BCu;
            goto label_2c67bc;
        }
    }
    ctx->pc = 0x2C67A8u;
label_2c67a8:
    // 0x2c67a8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c67a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c67ac:
    // 0x2c67ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c67acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c67b0:
    // 0x2c67b0: 0x24630ac8  addiu       $v1, $v1, 0xAC8
    ctx->pc = 0x2c67b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2760));
label_2c67b4:
    // 0x2c67b4: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c67b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c67b8:
    // 0x2c67b8: 0xac400de8  sw          $zero, 0xDE8($v0)
    ctx->pc = 0x2c67b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3560), GPR_U32(ctx, 0));
label_2c67bc:
    // 0x2c67bc: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c67c0:
    if (ctx->pc == 0x2C67C0u) {
        ctx->pc = 0x2C67C0u;
            // 0x2c67c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C67C4u;
        goto label_2c67c4;
    }
    ctx->pc = 0x2C67BCu;
    {
        const bool branch_taken_0x2c67bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c67bc) {
            ctx->pc = 0x2C67C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C67BCu;
            // 0x2c67c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6818u;
            goto label_2c6818;
        }
    }
    ctx->pc = 0x2C67C4u;
label_2c67c4:
    // 0x2c67c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c67c8:
    // 0x2c67c8: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c67cc:
    // 0x2c67cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c67ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c67d0:
    // 0x2c67d0: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c67d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c67d4:
    // 0x2c67d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c67d8:
    if (ctx->pc == 0x2C67D8u) {
        ctx->pc = 0x2C67D8u;
            // 0x2c67d8: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C67DCu;
        goto label_2c67dc;
    }
    ctx->pc = 0x2C67D4u;
    {
        const bool branch_taken_0x2c67d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c67d4) {
            ctx->pc = 0x2C67D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C67D4u;
            // 0x2c67d8: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C67F0u;
            goto label_2c67f0;
        }
    }
    ctx->pc = 0x2C67DCu;
label_2c67dc:
    // 0x2c67dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c67dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c67e0:
    // 0x2c67e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c67e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c67e4:
    // 0x2c67e4: 0x320f809  jalr        $t9
label_2c67e8:
    if (ctx->pc == 0x2C67E8u) {
        ctx->pc = 0x2C67E8u;
            // 0x2c67e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C67ECu;
        goto label_2c67ec;
    }
    ctx->pc = 0x2C67E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C67ECu);
        ctx->pc = 0x2C67E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C67E4u;
            // 0x2c67e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C67ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C67ECu; }
            if (ctx->pc != 0x2C67ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2C67ECu;
label_2c67ec:
    // 0x2c67ec: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c67ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c67f0:
    // 0x2c67f0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c67f4:
    if (ctx->pc == 0x2C67F4u) {
        ctx->pc = 0x2C67F4u;
            // 0x2c67f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C67F8u;
        goto label_2c67f8;
    }
    ctx->pc = 0x2C67F0u;
    {
        const bool branch_taken_0x2c67f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c67f0) {
            ctx->pc = 0x2C67F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C67F0u;
            // 0x2c67f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C680Cu;
            goto label_2c680c;
        }
    }
    ctx->pc = 0x2C67F8u;
label_2c67f8:
    // 0x2c67f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c67f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c67fc:
    // 0x2c67fc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c67fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c6800:
    // 0x2c6800: 0x320f809  jalr        $t9
label_2c6804:
    if (ctx->pc == 0x2C6804u) {
        ctx->pc = 0x2C6804u;
            // 0x2c6804: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C6808u;
        goto label_2c6808;
    }
    ctx->pc = 0x2C6800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C6808u);
        ctx->pc = 0x2C6804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6800u;
            // 0x2c6804: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C6808u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C6808u; }
            if (ctx->pc != 0x2C6808u) { return; }
        }
        }
    }
    ctx->pc = 0x2C6808u;
label_2c6808:
    // 0x2c6808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c680c:
    // 0x2c680c: 0xc075bf8  jal         func_1D6FE0
label_2c6810:
    if (ctx->pc == 0x2C6810u) {
        ctx->pc = 0x2C6810u;
            // 0x2c6810: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6814u;
        goto label_2c6814;
    }
    ctx->pc = 0x2C680Cu;
    SET_GPR_U32(ctx, 31, 0x2C6814u);
    ctx->pc = 0x2C6810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C680Cu;
            // 0x2c6810: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6814u; }
        if (ctx->pc != 0x2C6814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6814u; }
        if (ctx->pc != 0x2C6814u) { return; }
    }
    ctx->pc = 0x2C6814u;
label_2c6814:
    // 0x2c6814: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c6814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c6818:
    // 0x2c6818: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c6818u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c681c:
    // 0x2c681c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c6820:
    if (ctx->pc == 0x2C6820u) {
        ctx->pc = 0x2C6820u;
            // 0x2c6820: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6824u;
        goto label_2c6824;
    }
    ctx->pc = 0x2C681Cu;
    {
        const bool branch_taken_0x2c681c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c681c) {
            ctx->pc = 0x2C6820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C681Cu;
            // 0x2c6820: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6830u;
            goto label_2c6830;
        }
    }
    ctx->pc = 0x2C6824u;
label_2c6824:
    // 0x2c6824: 0xc0400a8  jal         func_1002A0
label_2c6828:
    if (ctx->pc == 0x2C6828u) {
        ctx->pc = 0x2C6828u;
            // 0x2c6828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C682Cu;
        goto label_2c682c;
    }
    ctx->pc = 0x2C6824u;
    SET_GPR_U32(ctx, 31, 0x2C682Cu);
    ctx->pc = 0x2C6828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6824u;
            // 0x2c6828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C682Cu; }
        if (ctx->pc != 0x2C682Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C682Cu; }
        if (ctx->pc != 0x2C682Cu) { return; }
    }
    ctx->pc = 0x2C682Cu;
label_2c682c:
    // 0x2c682c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c682cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6830:
    // 0x2c6830: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c6830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c6834:
    // 0x2c6834: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c6834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c6838:
    // 0x2c6838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c6838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c683c:
    // 0x2c683c: 0x3e00008  jr          $ra
label_2c6840:
    if (ctx->pc == 0x2C6840u) {
        ctx->pc = 0x2C6840u;
            // 0x2c6840: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C6844u;
        goto label_2c6844;
    }
    ctx->pc = 0x2C683Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C683Cu;
            // 0x2c6840: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6844u;
label_2c6844:
    // 0x2c6844: 0x0  nop
    ctx->pc = 0x2c6844u;
    // NOP
label_2c6848:
    // 0x2c6848: 0x0  nop
    ctx->pc = 0x2c6848u;
    // NOP
label_2c684c:
    // 0x2c684c: 0x0  nop
    ctx->pc = 0x2c684cu;
    // NOP
}
