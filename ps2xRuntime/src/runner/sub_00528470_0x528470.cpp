#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00528470
// Address: 0x528470 - 0x528720
void sub_00528470_0x528470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00528470_0x528470");
#endif

    switch (ctx->pc) {
        case 0x52848cu: goto label_52848c;
        case 0x5284acu: goto label_5284ac;
        case 0x52852cu: goto label_52852c;
        case 0x528548u: goto label_528548;
        case 0x528580u: goto label_528580;
        case 0x5285a0u: goto label_5285a0;
        case 0x5285fcu: goto label_5285fc;
        case 0x528638u: goto label_528638;
        case 0x528650u: goto label_528650;
        case 0x5286b0u: goto label_5286b0;
        case 0x5286bcu: goto label_5286bc;
        case 0x5286c8u: goto label_5286c8;
        case 0x5286d4u: goto label_5286d4;
        case 0x5286e0u: goto label_5286e0;
        case 0x5286ecu: goto label_5286ec;
        case 0x528704u: goto label_528704;
        default: break;
    }

    ctx->pc = 0x528470u;

    // 0x528470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x528470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x528474: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x528474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x528478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x528478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x52847c: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x52847cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x528480: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x528480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x528484: 0xc14a200  jal         func_528800
    ctx->pc = 0x528484u;
    SET_GPR_U32(ctx, 31, 0x52848Cu);
    ctx->pc = 0x528488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528484u;
            // 0x528488: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x528800u;
    if (runtime->hasFunction(0x528800u)) {
        auto targetFn = runtime->lookupFunction(0x528800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52848Cu; }
        if (ctx->pc != 0x52848Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00528800_0x528800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52848Cu; }
        if (ctx->pc != 0x52848Cu) { return; }
    }
    ctx->pc = 0x52848Cu;
label_52848c:
    // 0x52848c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52848cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x528490: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x528490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x528494: 0x24636680  addiu       $v1, $v1, 0x6680
    ctx->pc = 0x528494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26240));
    // 0x528498: 0x244266b8  addiu       $v0, $v0, 0x66B8
    ctx->pc = 0x528498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26296));
    // 0x52849c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52849cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5284a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5284a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5284a4: 0xc14a1fc  jal         func_5287F0
    ctx->pc = 0x5284A4u;
    SET_GPR_U32(ctx, 31, 0x5284ACu);
    ctx->pc = 0x5284A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5284A4u;
            // 0x5284a8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5287F0u;
    if (runtime->hasFunction(0x5287F0u)) {
        auto targetFn = runtime->lookupFunction(0x5287F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5284ACu; }
        if (ctx->pc != 0x5284ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005287F0_0x5287f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5284ACu; }
        if (ctx->pc != 0x5284ACu) { return; }
    }
    ctx->pc = 0x5284ACu;
label_5284ac:
    // 0x5284ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x5284acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x5284b0: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x5284b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x5284b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5284b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5284b8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x5284b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x5284bc: 0x24426530  addiu       $v0, $v0, 0x6530
    ctx->pc = 0x5284bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25904));
    // 0x5284c0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x5284c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x5284c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5284c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x5284c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5284c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5284cc: 0x24426568  addiu       $v0, $v0, 0x6568
    ctx->pc = 0x5284ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25960));
    // 0x5284d0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x5284d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x5284d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5284d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x5284d8: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x5284d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x5284dc: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x5284dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x5284e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5284e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x5284e4: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x5284e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x5284e8: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x5284e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x5284ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5284ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x5284f0: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x5284f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x5284f4: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x5284f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x5284f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5284f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5284fc: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x5284fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x528500: 0x244266d0  addiu       $v0, $v0, 0x66D0
    ctx->pc = 0x528500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26320));
    // 0x528504: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x528504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x528508: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x528508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x52850c: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x52850cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x528510: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x528510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x528514: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x528514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x528518: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x528518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x52851c: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x52851cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x528520: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x528520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x528524: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x528524u;
    SET_GPR_U32(ctx, 31, 0x52852Cu);
    ctx->pc = 0x528528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528524u;
            // 0x528528: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52852Cu; }
        if (ctx->pc != 0x52852Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52852Cu; }
        if (ctx->pc != 0x52852Cu) { return; }
    }
    ctx->pc = 0x52852Cu;
label_52852c:
    // 0x52852c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x52852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x528530: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x528530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x528534: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x528534u;
    {
        const bool branch_taken_0x528534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x528538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528534u;
            // 0x528538: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x528534) {
            ctx->pc = 0x52854Cu;
            goto label_52854c;
        }
    }
    ctx->pc = 0x52853Cu;
    // 0x52853c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x52853cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x528540: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x528540u;
    SET_GPR_U32(ctx, 31, 0x528548u);
    ctx->pc = 0x528544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528540u;
            // 0x528544: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528548u; }
        if (ctx->pc != 0x528548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528548u; }
        if (ctx->pc != 0x528548u) { return; }
    }
    ctx->pc = 0x528548u;
label_528548:
    // 0x528548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x528548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52854c:
    // 0x52854c: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x52854cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x528550: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x528550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x528554: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x528554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x528558: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x528558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x52855c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x52855cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x528560: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x528560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x528564: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x528564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x528568: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x528568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x52856c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x52856cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x528570: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x528570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x528574: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x528574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x528578: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x528578u;
    SET_GPR_U32(ctx, 31, 0x528580u);
    ctx->pc = 0x52857Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528578u;
            // 0x52857c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528580u; }
        if (ctx->pc != 0x528580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528580u; }
        if (ctx->pc != 0x528580u) { return; }
    }
    ctx->pc = 0x528580u;
label_528580:
    // 0x528580: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x528580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x528584: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x528584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x528588: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x528588u;
    {
        const bool branch_taken_0x528588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x52858Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528588u;
            // 0x52858c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x528588) {
            ctx->pc = 0x5285A4u;
            goto label_5285a4;
        }
    }
    ctx->pc = 0x528590u;
    // 0x528590: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x528590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x528594: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x528594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x528598: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x528598u;
    SET_GPR_U32(ctx, 31, 0x5285A0u);
    ctx->pc = 0x52859Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528598u;
            // 0x52859c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5285A0u; }
        if (ctx->pc != 0x5285A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5285A0u; }
        if (ctx->pc != 0x5285A0u) { return; }
    }
    ctx->pc = 0x5285A0u;
label_5285a0:
    // 0x5285a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x5285a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5285a4:
    // 0x5285a4: 0xae0400b0  sw          $a0, 0xB0($s0)
    ctx->pc = 0x5285a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 4));
    // 0x5285a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5285a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5285ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5285acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5285b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5285b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5285b4: 0x3e00008  jr          $ra
    ctx->pc = 0x5285B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5285B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5285B4u;
            // 0x5285b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5285BCu;
    // 0x5285bc: 0x0  nop
    ctx->pc = 0x5285bcu;
    // NOP
    // 0x5285c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5285c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5285c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5285c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x5285c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5285c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x5285cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5285ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5285d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5285d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5285d4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x5285D4u;
    {
        const bool branch_taken_0x5285d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5285D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5285D4u;
            // 0x5285d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5285d4) {
            ctx->pc = 0x528638u;
            goto label_528638;
        }
    }
    ctx->pc = 0x5285DCu;
    // 0x5285dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5285dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5285e0: 0x244266d0  addiu       $v0, $v0, 0x66D0
    ctx->pc = 0x5285e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26320));
    // 0x5285e4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x5285E4u;
    {
        const bool branch_taken_0x5285e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5285E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5285E4u;
            // 0x5285e8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5285e4) {
            ctx->pc = 0x528620u;
            goto label_528620;
        }
    }
    ctx->pc = 0x5285ECu;
    // 0x5285ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5285ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x5285f0: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x5285f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x5285f4: 0xc0d37dc  jal         func_34DF70
    ctx->pc = 0x5285F4u;
    SET_GPR_U32(ctx, 31, 0x5285FCu);
    ctx->pc = 0x5285F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5285F4u;
            // 0x5285f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5285FCu; }
        if (ctx->pc != 0x5285FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5285FCu; }
        if (ctx->pc != 0x5285FCu) { return; }
    }
    ctx->pc = 0x5285FCu;
label_5285fc:
    // 0x5285fc: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x5285FCu;
    {
        const bool branch_taken_0x5285fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x5285fc) {
            ctx->pc = 0x528600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5285FCu;
            // 0x528600: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x528624u;
            goto label_528624;
        }
    }
    ctx->pc = 0x528604u;
    // 0x528604: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x528604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x528608: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x528608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x52860c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x52860Cu;
    {
        const bool branch_taken_0x52860c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x528610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52860Cu;
            // 0x528610: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52860c) {
            ctx->pc = 0x528620u;
            goto label_528620;
        }
    }
    ctx->pc = 0x528614u;
    // 0x528614: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x528614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x528618: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x528618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x52861c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x52861cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_528620:
    // 0x528620: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x528620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_528624:
    // 0x528624: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x528624u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x528628: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x528628u;
    {
        const bool branch_taken_0x528628 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x528628) {
            ctx->pc = 0x52862Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x528628u;
            // 0x52862c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52863Cu;
            goto label_52863c;
        }
    }
    ctx->pc = 0x528630u;
    // 0x528630: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x528630u;
    SET_GPR_U32(ctx, 31, 0x528638u);
    ctx->pc = 0x528634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x528630u;
            // 0x528634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528638u; }
        if (ctx->pc != 0x528638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528638u; }
        if (ctx->pc != 0x528638u) { return; }
    }
    ctx->pc = 0x528638u;
label_528638:
    // 0x528638: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x528638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52863c:
    // 0x52863c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52863cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x528640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x528640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x528644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x528644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x528648: 0x3e00008  jr          $ra
    ctx->pc = 0x528648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52864Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528648u;
            // 0x52864c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x528650u;
label_528650:
    // 0x528650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x528650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x528654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x528654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x528658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x528658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x52865c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52865cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x528660: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x528660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x528664: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x528664u;
    {
        const bool branch_taken_0x528664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x528668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528664u;
            // 0x528668: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x528664) {
            ctx->pc = 0x528704u;
            goto label_528704;
        }
    }
    ctx->pc = 0x52866Cu;
    // 0x52866c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52866cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x528670: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x528670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x528674: 0x24636680  addiu       $v1, $v1, 0x6680
    ctx->pc = 0x528674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26240));
    // 0x528678: 0x244266b8  addiu       $v0, $v0, 0x66B8
    ctx->pc = 0x528678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26296));
    // 0x52867c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52867cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x528680: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x528680u;
    {
        const bool branch_taken_0x528680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x528684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528680u;
            // 0x528684: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x528680) {
            ctx->pc = 0x5286ECu;
            goto label_5286ec;
        }
    }
    ctx->pc = 0x528688u;
    // 0x528688: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x528688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x52868c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52868cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x528690: 0x24636630  addiu       $v1, $v1, 0x6630
    ctx->pc = 0x528690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26160));
    // 0x528694: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x528694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
    // 0x528698: 0x24426668  addiu       $v0, $v0, 0x6668
    ctx->pc = 0x528698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26216));
    // 0x52869c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52869cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5286a0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x5286a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x5286a4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x5286a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x5286a8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x5286A8u;
    SET_GPR_U32(ctx, 31, 0x5286B0u);
    ctx->pc = 0x5286ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5286A8u;
            // 0x5286ac: 0x24a57e00  addiu       $a1, $a1, 0x7E00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5286B0u; }
        if (ctx->pc != 0x5286B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5286B0u; }
        if (ctx->pc != 0x5286B0u) { return; }
    }
    ctx->pc = 0x5286B0u;
label_5286b0:
    // 0x5286b0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x5286b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x5286b4: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x5286B4u;
    SET_GPR_U32(ctx, 31, 0x5286BCu);
    ctx->pc = 0x5286B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5286B4u;
            // 0x5286b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5286BCu; }
        if (ctx->pc != 0x5286BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5286BCu; }
        if (ctx->pc != 0x5286BCu) { return; }
    }
    ctx->pc = 0x5286BCu;
label_5286bc:
    // 0x5286bc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x5286bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x5286c0: 0xc14a1e0  jal         func_528780
    ctx->pc = 0x5286C0u;
    SET_GPR_U32(ctx, 31, 0x5286C8u);
    ctx->pc = 0x5286C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5286C0u;
            // 0x5286c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x528780u;
    if (runtime->hasFunction(0x528780u)) {
        auto targetFn = runtime->lookupFunction(0x528780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5286C8u; }
        if (ctx->pc != 0x5286C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00528780_0x528780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5286C8u; }
        if (ctx->pc != 0x5286C8u) { return; }
    }
    ctx->pc = 0x5286C8u;
label_5286c8:
    // 0x5286c8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x5286c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x5286cc: 0xc14a1e0  jal         func_528780
    ctx->pc = 0x5286CCu;
    SET_GPR_U32(ctx, 31, 0x5286D4u);
    ctx->pc = 0x5286D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5286CCu;
            // 0x5286d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x528780u;
    if (runtime->hasFunction(0x528780u)) {
        auto targetFn = runtime->lookupFunction(0x528780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5286D4u; }
        if (ctx->pc != 0x5286D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00528780_0x528780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5286D4u; }
        if (ctx->pc != 0x5286D4u) { return; }
    }
    ctx->pc = 0x5286D4u;
label_5286d4:
    // 0x5286d4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x5286d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x5286d8: 0xc14a1c8  jal         func_528720
    ctx->pc = 0x5286D8u;
    SET_GPR_U32(ctx, 31, 0x5286E0u);
    ctx->pc = 0x5286DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5286D8u;
            // 0x5286dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x528720u;
    if (runtime->hasFunction(0x528720u)) {
        auto targetFn = runtime->lookupFunction(0x528720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5286E0u; }
        if (ctx->pc != 0x5286E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00528720_0x528720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5286E0u; }
        if (ctx->pc != 0x5286E0u) { return; }
    }
    ctx->pc = 0x5286E0u;
label_5286e0:
    // 0x5286e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5286e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5286e4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x5286E4u;
    SET_GPR_U32(ctx, 31, 0x5286ECu);
    ctx->pc = 0x5286E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5286E4u;
            // 0x5286e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5286ECu; }
        if (ctx->pc != 0x5286ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5286ECu; }
        if (ctx->pc != 0x5286ECu) { return; }
    }
    ctx->pc = 0x5286ECu;
label_5286ec:
    // 0x5286ec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x5286ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x5286f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5286f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x5286f4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5286F4u;
    {
        const bool branch_taken_0x5286f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5286f4) {
            ctx->pc = 0x5286F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5286F4u;
            // 0x5286f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x528708u;
            goto label_528708;
        }
    }
    ctx->pc = 0x5286FCu;
    // 0x5286fc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x5286FCu;
    SET_GPR_U32(ctx, 31, 0x528704u);
    ctx->pc = 0x528700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5286FCu;
            // 0x528700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528704u; }
        if (ctx->pc != 0x528704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528704u; }
        if (ctx->pc != 0x528704u) { return; }
    }
    ctx->pc = 0x528704u;
label_528704:
    // 0x528704: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x528704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_528708:
    // 0x528708: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x528708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x52870c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52870cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x528710: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x528710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x528714: 0x3e00008  jr          $ra
    ctx->pc = 0x528714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x528718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528714u;
            // 0x528718: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52871Cu;
    // 0x52871c: 0x0  nop
    ctx->pc = 0x52871cu;
    // NOP
}
