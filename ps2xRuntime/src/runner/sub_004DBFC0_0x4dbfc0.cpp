#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DBFC0
// Address: 0x4dbfc0 - 0x4dc1c0
void sub_004DBFC0_0x4dbfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DBFC0_0x4dbfc0");
#endif

    switch (ctx->pc) {
        case 0x4dbfc0u: goto label_4dbfc0;
        case 0x4dbfc4u: goto label_4dbfc4;
        case 0x4dbfc8u: goto label_4dbfc8;
        case 0x4dbfccu: goto label_4dbfcc;
        case 0x4dbfd0u: goto label_4dbfd0;
        case 0x4dbfd4u: goto label_4dbfd4;
        case 0x4dbfd8u: goto label_4dbfd8;
        case 0x4dbfdcu: goto label_4dbfdc;
        case 0x4dbfe0u: goto label_4dbfe0;
        case 0x4dbfe4u: goto label_4dbfe4;
        case 0x4dbfe8u: goto label_4dbfe8;
        case 0x4dbfecu: goto label_4dbfec;
        case 0x4dbff0u: goto label_4dbff0;
        case 0x4dbff4u: goto label_4dbff4;
        case 0x4dbff8u: goto label_4dbff8;
        case 0x4dbffcu: goto label_4dbffc;
        case 0x4dc000u: goto label_4dc000;
        case 0x4dc004u: goto label_4dc004;
        case 0x4dc008u: goto label_4dc008;
        case 0x4dc00cu: goto label_4dc00c;
        case 0x4dc010u: goto label_4dc010;
        case 0x4dc014u: goto label_4dc014;
        case 0x4dc018u: goto label_4dc018;
        case 0x4dc01cu: goto label_4dc01c;
        case 0x4dc020u: goto label_4dc020;
        case 0x4dc024u: goto label_4dc024;
        case 0x4dc028u: goto label_4dc028;
        case 0x4dc02cu: goto label_4dc02c;
        case 0x4dc030u: goto label_4dc030;
        case 0x4dc034u: goto label_4dc034;
        case 0x4dc038u: goto label_4dc038;
        case 0x4dc03cu: goto label_4dc03c;
        case 0x4dc040u: goto label_4dc040;
        case 0x4dc044u: goto label_4dc044;
        case 0x4dc048u: goto label_4dc048;
        case 0x4dc04cu: goto label_4dc04c;
        case 0x4dc050u: goto label_4dc050;
        case 0x4dc054u: goto label_4dc054;
        case 0x4dc058u: goto label_4dc058;
        case 0x4dc05cu: goto label_4dc05c;
        case 0x4dc060u: goto label_4dc060;
        case 0x4dc064u: goto label_4dc064;
        case 0x4dc068u: goto label_4dc068;
        case 0x4dc06cu: goto label_4dc06c;
        case 0x4dc070u: goto label_4dc070;
        case 0x4dc074u: goto label_4dc074;
        case 0x4dc078u: goto label_4dc078;
        case 0x4dc07cu: goto label_4dc07c;
        case 0x4dc080u: goto label_4dc080;
        case 0x4dc084u: goto label_4dc084;
        case 0x4dc088u: goto label_4dc088;
        case 0x4dc08cu: goto label_4dc08c;
        case 0x4dc090u: goto label_4dc090;
        case 0x4dc094u: goto label_4dc094;
        case 0x4dc098u: goto label_4dc098;
        case 0x4dc09cu: goto label_4dc09c;
        case 0x4dc0a0u: goto label_4dc0a0;
        case 0x4dc0a4u: goto label_4dc0a4;
        case 0x4dc0a8u: goto label_4dc0a8;
        case 0x4dc0acu: goto label_4dc0ac;
        case 0x4dc0b0u: goto label_4dc0b0;
        case 0x4dc0b4u: goto label_4dc0b4;
        case 0x4dc0b8u: goto label_4dc0b8;
        case 0x4dc0bcu: goto label_4dc0bc;
        case 0x4dc0c0u: goto label_4dc0c0;
        case 0x4dc0c4u: goto label_4dc0c4;
        case 0x4dc0c8u: goto label_4dc0c8;
        case 0x4dc0ccu: goto label_4dc0cc;
        case 0x4dc0d0u: goto label_4dc0d0;
        case 0x4dc0d4u: goto label_4dc0d4;
        case 0x4dc0d8u: goto label_4dc0d8;
        case 0x4dc0dcu: goto label_4dc0dc;
        case 0x4dc0e0u: goto label_4dc0e0;
        case 0x4dc0e4u: goto label_4dc0e4;
        case 0x4dc0e8u: goto label_4dc0e8;
        case 0x4dc0ecu: goto label_4dc0ec;
        case 0x4dc0f0u: goto label_4dc0f0;
        case 0x4dc0f4u: goto label_4dc0f4;
        case 0x4dc0f8u: goto label_4dc0f8;
        case 0x4dc0fcu: goto label_4dc0fc;
        case 0x4dc100u: goto label_4dc100;
        case 0x4dc104u: goto label_4dc104;
        case 0x4dc108u: goto label_4dc108;
        case 0x4dc10cu: goto label_4dc10c;
        case 0x4dc110u: goto label_4dc110;
        case 0x4dc114u: goto label_4dc114;
        case 0x4dc118u: goto label_4dc118;
        case 0x4dc11cu: goto label_4dc11c;
        case 0x4dc120u: goto label_4dc120;
        case 0x4dc124u: goto label_4dc124;
        case 0x4dc128u: goto label_4dc128;
        case 0x4dc12cu: goto label_4dc12c;
        case 0x4dc130u: goto label_4dc130;
        case 0x4dc134u: goto label_4dc134;
        case 0x4dc138u: goto label_4dc138;
        case 0x4dc13cu: goto label_4dc13c;
        case 0x4dc140u: goto label_4dc140;
        case 0x4dc144u: goto label_4dc144;
        case 0x4dc148u: goto label_4dc148;
        case 0x4dc14cu: goto label_4dc14c;
        case 0x4dc150u: goto label_4dc150;
        case 0x4dc154u: goto label_4dc154;
        case 0x4dc158u: goto label_4dc158;
        case 0x4dc15cu: goto label_4dc15c;
        case 0x4dc160u: goto label_4dc160;
        case 0x4dc164u: goto label_4dc164;
        case 0x4dc168u: goto label_4dc168;
        case 0x4dc16cu: goto label_4dc16c;
        case 0x4dc170u: goto label_4dc170;
        case 0x4dc174u: goto label_4dc174;
        case 0x4dc178u: goto label_4dc178;
        case 0x4dc17cu: goto label_4dc17c;
        case 0x4dc180u: goto label_4dc180;
        case 0x4dc184u: goto label_4dc184;
        case 0x4dc188u: goto label_4dc188;
        case 0x4dc18cu: goto label_4dc18c;
        case 0x4dc190u: goto label_4dc190;
        case 0x4dc194u: goto label_4dc194;
        case 0x4dc198u: goto label_4dc198;
        case 0x4dc19cu: goto label_4dc19c;
        case 0x4dc1a0u: goto label_4dc1a0;
        case 0x4dc1a4u: goto label_4dc1a4;
        case 0x4dc1a8u: goto label_4dc1a8;
        case 0x4dc1acu: goto label_4dc1ac;
        case 0x4dc1b0u: goto label_4dc1b0;
        case 0x4dc1b4u: goto label_4dc1b4;
        case 0x4dc1b8u: goto label_4dc1b8;
        case 0x4dc1bcu: goto label_4dc1bc;
        default: break;
    }

    ctx->pc = 0x4dbfc0u;

label_4dbfc0:
    // 0x4dbfc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dbfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4dbfc4:
    // 0x4dbfc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4dbfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4dbfc8:
    // 0x4dbfc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dbfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dbfcc:
    // 0x4dbfcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dbfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dbfd0:
    // 0x4dbfd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4dbfd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dbfd4:
    // 0x4dbfd4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4dbfd8:
    if (ctx->pc == 0x4DBFD8u) {
        ctx->pc = 0x4DBFD8u;
            // 0x4dbfd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DBFDCu;
        goto label_4dbfdc;
    }
    ctx->pc = 0x4DBFD4u;
    {
        const bool branch_taken_0x4dbfd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DBFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBFD4u;
            // 0x4dbfd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dbfd4) {
            ctx->pc = 0x4DC108u;
            goto label_4dc108;
        }
    }
    ctx->pc = 0x4DBFDCu;
label_4dbfdc:
    // 0x4dbfdc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dbfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dbfe0:
    // 0x4dbfe0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dbfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dbfe4:
    // 0x4dbfe4: 0x24632d30  addiu       $v1, $v1, 0x2D30
    ctx->pc = 0x4dbfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11568));
label_4dbfe8:
    // 0x4dbfe8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4dbfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4dbfec:
    // 0x4dbfec: 0x24422d68  addiu       $v0, $v0, 0x2D68
    ctx->pc = 0x4dbfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11624));
label_4dbff0:
    // 0x4dbff0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4dbff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4dbff4:
    // 0x4dbff4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4dbff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4dbff8:
    // 0x4dbff8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4dbff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4dbffc:
    // 0x4dbffc: 0xc0407c0  jal         func_101F00
label_4dc000:
    if (ctx->pc == 0x4DC000u) {
        ctx->pc = 0x4DC000u;
            // 0x4dc000: 0x24a5c120  addiu       $a1, $a1, -0x3EE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951200));
        ctx->pc = 0x4DC004u;
        goto label_4dc004;
    }
    ctx->pc = 0x4DBFFCu;
    SET_GPR_U32(ctx, 31, 0x4DC004u);
    ctx->pc = 0x4DC000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DBFFCu;
            // 0x4dc000: 0x24a5c120  addiu       $a1, $a1, -0x3EE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC004u; }
        if (ctx->pc != 0x4DC004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC004u; }
        if (ctx->pc != 0x4DC004u) { return; }
    }
    ctx->pc = 0x4DC004u;
label_4dc004:
    // 0x4dc004: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4dc004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4dc008:
    // 0x4dc008: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4dc00c:
    if (ctx->pc == 0x4DC00Cu) {
        ctx->pc = 0x4DC00Cu;
            // 0x4dc00c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4DC010u;
        goto label_4dc010;
    }
    ctx->pc = 0x4DC008u;
    {
        const bool branch_taken_0x4dc008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc008) {
            ctx->pc = 0x4DC00Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC008u;
            // 0x4dc00c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DC01Cu;
            goto label_4dc01c;
        }
    }
    ctx->pc = 0x4DC010u;
label_4dc010:
    // 0x4dc010: 0xc07507c  jal         func_1D41F0
label_4dc014:
    if (ctx->pc == 0x4DC014u) {
        ctx->pc = 0x4DC014u;
            // 0x4dc014: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4DC018u;
        goto label_4dc018;
    }
    ctx->pc = 0x4DC010u;
    SET_GPR_U32(ctx, 31, 0x4DC018u);
    ctx->pc = 0x4DC014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC010u;
            // 0x4dc014: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC018u; }
        if (ctx->pc != 0x4DC018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC018u; }
        if (ctx->pc != 0x4DC018u) { return; }
    }
    ctx->pc = 0x4DC018u;
label_4dc018:
    // 0x4dc018: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4dc018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4dc01c:
    // 0x4dc01c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4dc020:
    if (ctx->pc == 0x4DC020u) {
        ctx->pc = 0x4DC020u;
            // 0x4dc020: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4DC024u;
        goto label_4dc024;
    }
    ctx->pc = 0x4DC01Cu;
    {
        const bool branch_taken_0x4dc01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc01c) {
            ctx->pc = 0x4DC020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC01Cu;
            // 0x4dc020: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DC04Cu;
            goto label_4dc04c;
        }
    }
    ctx->pc = 0x4DC024u;
label_4dc024:
    // 0x4dc024: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4dc028:
    if (ctx->pc == 0x4DC028u) {
        ctx->pc = 0x4DC02Cu;
        goto label_4dc02c;
    }
    ctx->pc = 0x4DC024u;
    {
        const bool branch_taken_0x4dc024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc024) {
            ctx->pc = 0x4DC048u;
            goto label_4dc048;
        }
    }
    ctx->pc = 0x4DC02Cu;
label_4dc02c:
    // 0x4dc02c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4dc030:
    if (ctx->pc == 0x4DC030u) {
        ctx->pc = 0x4DC034u;
        goto label_4dc034;
    }
    ctx->pc = 0x4DC02Cu;
    {
        const bool branch_taken_0x4dc02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc02c) {
            ctx->pc = 0x4DC048u;
            goto label_4dc048;
        }
    }
    ctx->pc = 0x4DC034u;
label_4dc034:
    // 0x4dc034: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4dc034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4dc038:
    // 0x4dc038: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4dc03c:
    if (ctx->pc == 0x4DC03Cu) {
        ctx->pc = 0x4DC040u;
        goto label_4dc040;
    }
    ctx->pc = 0x4DC038u;
    {
        const bool branch_taken_0x4dc038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc038) {
            ctx->pc = 0x4DC048u;
            goto label_4dc048;
        }
    }
    ctx->pc = 0x4DC040u;
label_4dc040:
    // 0x4dc040: 0xc0400a8  jal         func_1002A0
label_4dc044:
    if (ctx->pc == 0x4DC044u) {
        ctx->pc = 0x4DC048u;
        goto label_4dc048;
    }
    ctx->pc = 0x4DC040u;
    SET_GPR_U32(ctx, 31, 0x4DC048u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC048u; }
        if (ctx->pc != 0x4DC048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC048u; }
        if (ctx->pc != 0x4DC048u) { return; }
    }
    ctx->pc = 0x4DC048u;
label_4dc048:
    // 0x4dc048: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4dc048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4dc04c:
    // 0x4dc04c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4dc050:
    if (ctx->pc == 0x4DC050u) {
        ctx->pc = 0x4DC050u;
            // 0x4dc050: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4DC054u;
        goto label_4dc054;
    }
    ctx->pc = 0x4DC04Cu;
    {
        const bool branch_taken_0x4dc04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc04c) {
            ctx->pc = 0x4DC050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC04Cu;
            // 0x4dc050: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DC07Cu;
            goto label_4dc07c;
        }
    }
    ctx->pc = 0x4DC054u;
label_4dc054:
    // 0x4dc054: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4dc058:
    if (ctx->pc == 0x4DC058u) {
        ctx->pc = 0x4DC05Cu;
        goto label_4dc05c;
    }
    ctx->pc = 0x4DC054u;
    {
        const bool branch_taken_0x4dc054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc054) {
            ctx->pc = 0x4DC078u;
            goto label_4dc078;
        }
    }
    ctx->pc = 0x4DC05Cu;
label_4dc05c:
    // 0x4dc05c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4dc060:
    if (ctx->pc == 0x4DC060u) {
        ctx->pc = 0x4DC064u;
        goto label_4dc064;
    }
    ctx->pc = 0x4DC05Cu;
    {
        const bool branch_taken_0x4dc05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc05c) {
            ctx->pc = 0x4DC078u;
            goto label_4dc078;
        }
    }
    ctx->pc = 0x4DC064u;
label_4dc064:
    // 0x4dc064: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4dc064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4dc068:
    // 0x4dc068: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4dc06c:
    if (ctx->pc == 0x4DC06Cu) {
        ctx->pc = 0x4DC070u;
        goto label_4dc070;
    }
    ctx->pc = 0x4DC068u;
    {
        const bool branch_taken_0x4dc068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc068) {
            ctx->pc = 0x4DC078u;
            goto label_4dc078;
        }
    }
    ctx->pc = 0x4DC070u;
label_4dc070:
    // 0x4dc070: 0xc0400a8  jal         func_1002A0
label_4dc074:
    if (ctx->pc == 0x4DC074u) {
        ctx->pc = 0x4DC078u;
        goto label_4dc078;
    }
    ctx->pc = 0x4DC070u;
    SET_GPR_U32(ctx, 31, 0x4DC078u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC078u; }
        if (ctx->pc != 0x4DC078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC078u; }
        if (ctx->pc != 0x4DC078u) { return; }
    }
    ctx->pc = 0x4DC078u;
label_4dc078:
    // 0x4dc078: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4dc078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4dc07c:
    // 0x4dc07c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4dc080:
    if (ctx->pc == 0x4DC080u) {
        ctx->pc = 0x4DC084u;
        goto label_4dc084;
    }
    ctx->pc = 0x4DC07Cu;
    {
        const bool branch_taken_0x4dc07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc07c) {
            ctx->pc = 0x4DC098u;
            goto label_4dc098;
        }
    }
    ctx->pc = 0x4DC084u;
label_4dc084:
    // 0x4dc084: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dc084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dc088:
    // 0x4dc088: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4dc088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4dc08c:
    // 0x4dc08c: 0x24632d18  addiu       $v1, $v1, 0x2D18
    ctx->pc = 0x4dc08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11544));
label_4dc090:
    // 0x4dc090: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4dc090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4dc094:
    // 0x4dc094: 0xac4064b0  sw          $zero, 0x64B0($v0)
    ctx->pc = 0x4dc094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25776), GPR_U32(ctx, 0));
label_4dc098:
    // 0x4dc098: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4dc09c:
    if (ctx->pc == 0x4DC09Cu) {
        ctx->pc = 0x4DC09Cu;
            // 0x4dc09c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4DC0A0u;
        goto label_4dc0a0;
    }
    ctx->pc = 0x4DC098u;
    {
        const bool branch_taken_0x4dc098 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc098) {
            ctx->pc = 0x4DC09Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC098u;
            // 0x4dc09c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DC0F4u;
            goto label_4dc0f4;
        }
    }
    ctx->pc = 0x4DC0A0u;
label_4dc0a0:
    // 0x4dc0a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4dc0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4dc0a4:
    // 0x4dc0a4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4dc0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4dc0a8:
    // 0x4dc0a8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4dc0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4dc0ac:
    // 0x4dc0ac: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4dc0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4dc0b0:
    // 0x4dc0b0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4dc0b4:
    if (ctx->pc == 0x4DC0B4u) {
        ctx->pc = 0x4DC0B4u;
            // 0x4dc0b4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4DC0B8u;
        goto label_4dc0b8;
    }
    ctx->pc = 0x4DC0B0u;
    {
        const bool branch_taken_0x4dc0b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc0b0) {
            ctx->pc = 0x4DC0B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC0B0u;
            // 0x4dc0b4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DC0CCu;
            goto label_4dc0cc;
        }
    }
    ctx->pc = 0x4DC0B8u;
label_4dc0b8:
    // 0x4dc0b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dc0b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dc0bc:
    // 0x4dc0bc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4dc0bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4dc0c0:
    // 0x4dc0c0: 0x320f809  jalr        $t9
label_4dc0c4:
    if (ctx->pc == 0x4DC0C4u) {
        ctx->pc = 0x4DC0C4u;
            // 0x4dc0c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DC0C8u;
        goto label_4dc0c8;
    }
    ctx->pc = 0x4DC0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DC0C8u);
        ctx->pc = 0x4DC0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC0C0u;
            // 0x4dc0c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DC0C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DC0C8u; }
            if (ctx->pc != 0x4DC0C8u) { return; }
        }
        }
    }
    ctx->pc = 0x4DC0C8u;
label_4dc0c8:
    // 0x4dc0c8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4dc0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4dc0cc:
    // 0x4dc0cc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4dc0d0:
    if (ctx->pc == 0x4DC0D0u) {
        ctx->pc = 0x4DC0D0u;
            // 0x4dc0d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC0D4u;
        goto label_4dc0d4;
    }
    ctx->pc = 0x4DC0CCu;
    {
        const bool branch_taken_0x4dc0cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc0cc) {
            ctx->pc = 0x4DC0D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC0CCu;
            // 0x4dc0d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DC0E8u;
            goto label_4dc0e8;
        }
    }
    ctx->pc = 0x4DC0D4u;
label_4dc0d4:
    // 0x4dc0d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dc0d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dc0d8:
    // 0x4dc0d8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4dc0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4dc0dc:
    // 0x4dc0dc: 0x320f809  jalr        $t9
label_4dc0e0:
    if (ctx->pc == 0x4DC0E0u) {
        ctx->pc = 0x4DC0E0u;
            // 0x4dc0e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DC0E4u;
        goto label_4dc0e4;
    }
    ctx->pc = 0x4DC0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DC0E4u);
        ctx->pc = 0x4DC0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC0DCu;
            // 0x4dc0e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DC0E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DC0E4u; }
            if (ctx->pc != 0x4DC0E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4DC0E4u;
label_4dc0e4:
    // 0x4dc0e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4dc0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dc0e8:
    // 0x4dc0e8: 0xc075bf8  jal         func_1D6FE0
label_4dc0ec:
    if (ctx->pc == 0x4DC0ECu) {
        ctx->pc = 0x4DC0ECu;
            // 0x4dc0ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC0F0u;
        goto label_4dc0f0;
    }
    ctx->pc = 0x4DC0E8u;
    SET_GPR_U32(ctx, 31, 0x4DC0F0u);
    ctx->pc = 0x4DC0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC0E8u;
            // 0x4dc0ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC0F0u; }
        if (ctx->pc != 0x4DC0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC0F0u; }
        if (ctx->pc != 0x4DC0F0u) { return; }
    }
    ctx->pc = 0x4DC0F0u;
label_4dc0f0:
    // 0x4dc0f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4dc0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4dc0f4:
    // 0x4dc0f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4dc0f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4dc0f8:
    // 0x4dc0f8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4dc0fc:
    if (ctx->pc == 0x4DC0FCu) {
        ctx->pc = 0x4DC0FCu;
            // 0x4dc0fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC100u;
        goto label_4dc100;
    }
    ctx->pc = 0x4DC0F8u;
    {
        const bool branch_taken_0x4dc0f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4dc0f8) {
            ctx->pc = 0x4DC0FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC0F8u;
            // 0x4dc0fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DC10Cu;
            goto label_4dc10c;
        }
    }
    ctx->pc = 0x4DC100u;
label_4dc100:
    // 0x4dc100: 0xc0400a8  jal         func_1002A0
label_4dc104:
    if (ctx->pc == 0x4DC104u) {
        ctx->pc = 0x4DC104u;
            // 0x4dc104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC108u;
        goto label_4dc108;
    }
    ctx->pc = 0x4DC100u;
    SET_GPR_U32(ctx, 31, 0x4DC108u);
    ctx->pc = 0x4DC104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC100u;
            // 0x4dc104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC108u; }
        if (ctx->pc != 0x4DC108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC108u; }
        if (ctx->pc != 0x4DC108u) { return; }
    }
    ctx->pc = 0x4DC108u;
label_4dc108:
    // 0x4dc108: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4dc108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dc10c:
    // 0x4dc10c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4dc10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4dc110:
    // 0x4dc110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dc110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dc114:
    // 0x4dc114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dc114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc118:
    // 0x4dc118: 0x3e00008  jr          $ra
label_4dc11c:
    if (ctx->pc == 0x4DC11Cu) {
        ctx->pc = 0x4DC11Cu;
            // 0x4dc11c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DC120u;
        goto label_4dc120;
    }
    ctx->pc = 0x4DC118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC118u;
            // 0x4dc11c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DC120u;
label_4dc120:
    // 0x4dc120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dc120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4dc124:
    // 0x4dc124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4dc124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4dc128:
    // 0x4dc128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dc128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4dc12c:
    // 0x4dc12c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dc12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4dc130:
    // 0x4dc130: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dc130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dc134:
    // 0x4dc134: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_4dc138:
    if (ctx->pc == 0x4DC138u) {
        ctx->pc = 0x4DC138u;
            // 0x4dc138: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC13Cu;
        goto label_4dc13c;
    }
    ctx->pc = 0x4DC134u;
    {
        const bool branch_taken_0x4dc134 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC134u;
            // 0x4dc138: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc134) {
            ctx->pc = 0x4DC1A8u;
            goto label_4dc1a8;
        }
    }
    ctx->pc = 0x4DC13Cu;
label_4dc13c:
    // 0x4dc13c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dc13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dc140:
    // 0x4dc140: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dc140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dc144:
    // 0x4dc144: 0x24632dd0  addiu       $v1, $v1, 0x2DD0
    ctx->pc = 0x4dc144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11728));
label_4dc148:
    // 0x4dc148: 0x24422e10  addiu       $v0, $v0, 0x2E10
    ctx->pc = 0x4dc148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11792));
label_4dc14c:
    // 0x4dc14c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dc14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4dc150:
    // 0x4dc150: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4dc150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4dc154:
    // 0x4dc154: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4dc154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dc158:
    // 0x4dc158: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4dc158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4dc15c:
    // 0x4dc15c: 0x320f809  jalr        $t9
label_4dc160:
    if (ctx->pc == 0x4DC160u) {
        ctx->pc = 0x4DC164u;
        goto label_4dc164;
    }
    ctx->pc = 0x4DC15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DC164u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DC164u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DC164u; }
            if (ctx->pc != 0x4DC164u) { return; }
        }
        }
    }
    ctx->pc = 0x4DC164u;
label_4dc164:
    // 0x4dc164: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_4dc168:
    if (ctx->pc == 0x4DC168u) {
        ctx->pc = 0x4DC168u;
            // 0x4dc168: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4DC16Cu;
        goto label_4dc16c;
    }
    ctx->pc = 0x4DC164u;
    {
        const bool branch_taken_0x4dc164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc164) {
            ctx->pc = 0x4DC168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC164u;
            // 0x4dc168: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DC194u;
            goto label_4dc194;
        }
    }
    ctx->pc = 0x4DC16Cu;
label_4dc16c:
    // 0x4dc16c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4dc16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4dc170:
    // 0x4dc170: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4dc170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4dc174:
    // 0x4dc174: 0x24632c30  addiu       $v1, $v1, 0x2C30
    ctx->pc = 0x4dc174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11312));
label_4dc178:
    // 0x4dc178: 0x24422c70  addiu       $v0, $v0, 0x2C70
    ctx->pc = 0x4dc178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
label_4dc17c:
    // 0x4dc17c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4dc17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4dc180:
    // 0x4dc180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dc180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dc184:
    // 0x4dc184: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4dc184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4dc188:
    // 0x4dc188: 0xc12e684  jal         func_4B9A10
label_4dc18c:
    if (ctx->pc == 0x4DC18Cu) {
        ctx->pc = 0x4DC18Cu;
            // 0x4dc18c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC190u;
        goto label_4dc190;
    }
    ctx->pc = 0x4DC188u;
    SET_GPR_U32(ctx, 31, 0x4DC190u);
    ctx->pc = 0x4DC18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC188u;
            // 0x4dc18c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9A10u;
    if (runtime->hasFunction(0x4B9A10u)) {
        auto targetFn = runtime->lookupFunction(0x4B9A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC190u; }
        if (ctx->pc != 0x4DC190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9A10_0x4b9a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC190u; }
        if (ctx->pc != 0x4DC190u) { return; }
    }
    ctx->pc = 0x4DC190u;
label_4dc190:
    // 0x4dc190: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4dc190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4dc194:
    // 0x4dc194: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4dc194u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4dc198:
    // 0x4dc198: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4dc19c:
    if (ctx->pc == 0x4DC19Cu) {
        ctx->pc = 0x4DC19Cu;
            // 0x4dc19c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC1A0u;
        goto label_4dc1a0;
    }
    ctx->pc = 0x4DC198u;
    {
        const bool branch_taken_0x4dc198 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4dc198) {
            ctx->pc = 0x4DC19Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC198u;
            // 0x4dc19c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DC1ACu;
            goto label_4dc1ac;
        }
    }
    ctx->pc = 0x4DC1A0u;
label_4dc1a0:
    // 0x4dc1a0: 0xc0400a8  jal         func_1002A0
label_4dc1a4:
    if (ctx->pc == 0x4DC1A4u) {
        ctx->pc = 0x4DC1A4u;
            // 0x4dc1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DC1A8u;
        goto label_4dc1a8;
    }
    ctx->pc = 0x4DC1A0u;
    SET_GPR_U32(ctx, 31, 0x4DC1A8u);
    ctx->pc = 0x4DC1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC1A0u;
            // 0x4dc1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC1A8u; }
        if (ctx->pc != 0x4DC1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DC1A8u; }
        if (ctx->pc != 0x4DC1A8u) { return; }
    }
    ctx->pc = 0x4DC1A8u;
label_4dc1a8:
    // 0x4dc1a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4dc1a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dc1ac:
    // 0x4dc1ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4dc1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4dc1b0:
    // 0x4dc1b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dc1b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dc1b4:
    // 0x4dc1b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dc1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc1b8:
    // 0x4dc1b8: 0x3e00008  jr          $ra
label_4dc1bc:
    if (ctx->pc == 0x4DC1BCu) {
        ctx->pc = 0x4DC1BCu;
            // 0x4dc1bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DC1C0u;
        goto label_fallthrough_0x4dc1b8;
    }
    ctx->pc = 0x4DC1B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DC1B8u;
            // 0x4dc1bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4dc1b8:
    ctx->pc = 0x4DC1C0u;
}
