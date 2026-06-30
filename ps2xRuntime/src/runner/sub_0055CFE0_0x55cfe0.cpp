#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055CFE0
// Address: 0x55cfe0 - 0x55d160
void sub_0055CFE0_0x55cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055CFE0_0x55cfe0");
#endif

    switch (ctx->pc) {
        case 0x55cfe0u: goto label_55cfe0;
        case 0x55cfe4u: goto label_55cfe4;
        case 0x55cfe8u: goto label_55cfe8;
        case 0x55cfecu: goto label_55cfec;
        case 0x55cff0u: goto label_55cff0;
        case 0x55cff4u: goto label_55cff4;
        case 0x55cff8u: goto label_55cff8;
        case 0x55cffcu: goto label_55cffc;
        case 0x55d000u: goto label_55d000;
        case 0x55d004u: goto label_55d004;
        case 0x55d008u: goto label_55d008;
        case 0x55d00cu: goto label_55d00c;
        case 0x55d010u: goto label_55d010;
        case 0x55d014u: goto label_55d014;
        case 0x55d018u: goto label_55d018;
        case 0x55d01cu: goto label_55d01c;
        case 0x55d020u: goto label_55d020;
        case 0x55d024u: goto label_55d024;
        case 0x55d028u: goto label_55d028;
        case 0x55d02cu: goto label_55d02c;
        case 0x55d030u: goto label_55d030;
        case 0x55d034u: goto label_55d034;
        case 0x55d038u: goto label_55d038;
        case 0x55d03cu: goto label_55d03c;
        case 0x55d040u: goto label_55d040;
        case 0x55d044u: goto label_55d044;
        case 0x55d048u: goto label_55d048;
        case 0x55d04cu: goto label_55d04c;
        case 0x55d050u: goto label_55d050;
        case 0x55d054u: goto label_55d054;
        case 0x55d058u: goto label_55d058;
        case 0x55d05cu: goto label_55d05c;
        case 0x55d060u: goto label_55d060;
        case 0x55d064u: goto label_55d064;
        case 0x55d068u: goto label_55d068;
        case 0x55d06cu: goto label_55d06c;
        case 0x55d070u: goto label_55d070;
        case 0x55d074u: goto label_55d074;
        case 0x55d078u: goto label_55d078;
        case 0x55d07cu: goto label_55d07c;
        case 0x55d080u: goto label_55d080;
        case 0x55d084u: goto label_55d084;
        case 0x55d088u: goto label_55d088;
        case 0x55d08cu: goto label_55d08c;
        case 0x55d090u: goto label_55d090;
        case 0x55d094u: goto label_55d094;
        case 0x55d098u: goto label_55d098;
        case 0x55d09cu: goto label_55d09c;
        case 0x55d0a0u: goto label_55d0a0;
        case 0x55d0a4u: goto label_55d0a4;
        case 0x55d0a8u: goto label_55d0a8;
        case 0x55d0acu: goto label_55d0ac;
        case 0x55d0b0u: goto label_55d0b0;
        case 0x55d0b4u: goto label_55d0b4;
        case 0x55d0b8u: goto label_55d0b8;
        case 0x55d0bcu: goto label_55d0bc;
        case 0x55d0c0u: goto label_55d0c0;
        case 0x55d0c4u: goto label_55d0c4;
        case 0x55d0c8u: goto label_55d0c8;
        case 0x55d0ccu: goto label_55d0cc;
        case 0x55d0d0u: goto label_55d0d0;
        case 0x55d0d4u: goto label_55d0d4;
        case 0x55d0d8u: goto label_55d0d8;
        case 0x55d0dcu: goto label_55d0dc;
        case 0x55d0e0u: goto label_55d0e0;
        case 0x55d0e4u: goto label_55d0e4;
        case 0x55d0e8u: goto label_55d0e8;
        case 0x55d0ecu: goto label_55d0ec;
        case 0x55d0f0u: goto label_55d0f0;
        case 0x55d0f4u: goto label_55d0f4;
        case 0x55d0f8u: goto label_55d0f8;
        case 0x55d0fcu: goto label_55d0fc;
        case 0x55d100u: goto label_55d100;
        case 0x55d104u: goto label_55d104;
        case 0x55d108u: goto label_55d108;
        case 0x55d10cu: goto label_55d10c;
        case 0x55d110u: goto label_55d110;
        case 0x55d114u: goto label_55d114;
        case 0x55d118u: goto label_55d118;
        case 0x55d11cu: goto label_55d11c;
        case 0x55d120u: goto label_55d120;
        case 0x55d124u: goto label_55d124;
        case 0x55d128u: goto label_55d128;
        case 0x55d12cu: goto label_55d12c;
        case 0x55d130u: goto label_55d130;
        case 0x55d134u: goto label_55d134;
        case 0x55d138u: goto label_55d138;
        case 0x55d13cu: goto label_55d13c;
        case 0x55d140u: goto label_55d140;
        case 0x55d144u: goto label_55d144;
        case 0x55d148u: goto label_55d148;
        case 0x55d14cu: goto label_55d14c;
        case 0x55d150u: goto label_55d150;
        case 0x55d154u: goto label_55d154;
        case 0x55d158u: goto label_55d158;
        case 0x55d15cu: goto label_55d15c;
        default: break;
    }

    ctx->pc = 0x55cfe0u;

label_55cfe0:
    // 0x55cfe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x55cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_55cfe4:
    // 0x55cfe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x55cfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_55cfe8:
    // 0x55cfe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55cfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_55cfec:
    // 0x55cfec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x55cfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_55cff0:
    // 0x55cff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x55cff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55cff4:
    // 0x55cff4: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_55cff8:
    if (ctx->pc == 0x55CFF8u) {
        ctx->pc = 0x55CFF8u;
            // 0x55cff8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55CFFCu;
        goto label_55cffc;
    }
    ctx->pc = 0x55CFF4u;
    {
        const bool branch_taken_0x55cff4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x55CFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55CFF4u;
            // 0x55cff8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55cff4) {
            ctx->pc = 0x55D13Cu;
            goto label_55d13c;
        }
    }
    ctx->pc = 0x55CFFCu;
label_55cffc:
    // 0x55cffc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x55cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_55d000:
    // 0x55d000: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x55d000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_55d004:
    // 0x55d004: 0x24637c30  addiu       $v1, $v1, 0x7C30
    ctx->pc = 0x55d004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31792));
label_55d008:
    // 0x55d008: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x55d008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_55d00c:
    // 0x55d00c: 0x24427c68  addiu       $v0, $v0, 0x7C68
    ctx->pc = 0x55d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31848));
label_55d010:
    // 0x55d010: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x55d010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_55d014:
    // 0x55d014: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x55d014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_55d018:
    // 0x55d018: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x55d018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_55d01c:
    // 0x55d01c: 0xc0407c0  jal         func_101F00
label_55d020:
    if (ctx->pc == 0x55D020u) {
        ctx->pc = 0x55D020u;
            // 0x55d020: 0x24a5c470  addiu       $a1, $a1, -0x3B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952048));
        ctx->pc = 0x55D024u;
        goto label_55d024;
    }
    ctx->pc = 0x55D01Cu;
    SET_GPR_U32(ctx, 31, 0x55D024u);
    ctx->pc = 0x55D020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D01Cu;
            // 0x55d020: 0x24a5c470  addiu       $a1, $a1, -0x3B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D024u; }
        if (ctx->pc != 0x55D024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D024u; }
        if (ctx->pc != 0x55D024u) { return; }
    }
    ctx->pc = 0x55D024u;
label_55d024:
    // 0x55d024: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x55d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_55d028:
    // 0x55d028: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_55d02c:
    if (ctx->pc == 0x55D02Cu) {
        ctx->pc = 0x55D02Cu;
            // 0x55d02c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x55D030u;
        goto label_55d030;
    }
    ctx->pc = 0x55D028u;
    {
        const bool branch_taken_0x55d028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d028) {
            ctx->pc = 0x55D02Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D028u;
            // 0x55d02c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55D050u;
            goto label_55d050;
        }
    }
    ctx->pc = 0x55D030u;
label_55d030:
    // 0x55d030: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x55d030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_55d034:
    // 0x55d034: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_55d038:
    if (ctx->pc == 0x55D038u) {
        ctx->pc = 0x55D038u;
            // 0x55d038: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x55D03Cu;
        goto label_55d03c;
    }
    ctx->pc = 0x55D034u;
    {
        const bool branch_taken_0x55d034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d034) {
            ctx->pc = 0x55D038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D034u;
            // 0x55d038: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55D04Cu;
            goto label_55d04c;
        }
    }
    ctx->pc = 0x55D03Cu;
label_55d03c:
    // 0x55d03c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x55d03cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_55d040:
    // 0x55d040: 0xc0407c0  jal         func_101F00
label_55d044:
    if (ctx->pc == 0x55D044u) {
        ctx->pc = 0x55D044u;
            // 0x55d044: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->pc = 0x55D048u;
        goto label_55d048;
    }
    ctx->pc = 0x55D040u;
    SET_GPR_U32(ctx, 31, 0x55D048u);
    ctx->pc = 0x55D044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D040u;
            // 0x55d044: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D048u; }
        if (ctx->pc != 0x55D048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D048u; }
        if (ctx->pc != 0x55D048u) { return; }
    }
    ctx->pc = 0x55D048u;
label_55d048:
    // 0x55d048: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x55d048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_55d04c:
    // 0x55d04c: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x55d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_55d050:
    // 0x55d050: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_55d054:
    if (ctx->pc == 0x55D054u) {
        ctx->pc = 0x55D054u;
            // 0x55d054: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x55D058u;
        goto label_55d058;
    }
    ctx->pc = 0x55D050u;
    {
        const bool branch_taken_0x55d050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d050) {
            ctx->pc = 0x55D054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D050u;
            // 0x55d054: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55D080u;
            goto label_55d080;
        }
    }
    ctx->pc = 0x55D058u;
label_55d058:
    // 0x55d058: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_55d05c:
    if (ctx->pc == 0x55D05Cu) {
        ctx->pc = 0x55D060u;
        goto label_55d060;
    }
    ctx->pc = 0x55D058u;
    {
        const bool branch_taken_0x55d058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d058) {
            ctx->pc = 0x55D07Cu;
            goto label_55d07c;
        }
    }
    ctx->pc = 0x55D060u;
label_55d060:
    // 0x55d060: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_55d064:
    if (ctx->pc == 0x55D064u) {
        ctx->pc = 0x55D068u;
        goto label_55d068;
    }
    ctx->pc = 0x55D060u;
    {
        const bool branch_taken_0x55d060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d060) {
            ctx->pc = 0x55D07Cu;
            goto label_55d07c;
        }
    }
    ctx->pc = 0x55D068u;
label_55d068:
    // 0x55d068: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x55d068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_55d06c:
    // 0x55d06c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_55d070:
    if (ctx->pc == 0x55D070u) {
        ctx->pc = 0x55D074u;
        goto label_55d074;
    }
    ctx->pc = 0x55D06Cu;
    {
        const bool branch_taken_0x55d06c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d06c) {
            ctx->pc = 0x55D07Cu;
            goto label_55d07c;
        }
    }
    ctx->pc = 0x55D074u;
label_55d074:
    // 0x55d074: 0xc0400a8  jal         func_1002A0
label_55d078:
    if (ctx->pc == 0x55D078u) {
        ctx->pc = 0x55D07Cu;
        goto label_55d07c;
    }
    ctx->pc = 0x55D074u;
    SET_GPR_U32(ctx, 31, 0x55D07Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D07Cu; }
        if (ctx->pc != 0x55D07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D07Cu; }
        if (ctx->pc != 0x55D07Cu) { return; }
    }
    ctx->pc = 0x55D07Cu;
label_55d07c:
    // 0x55d07c: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x55d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_55d080:
    // 0x55d080: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_55d084:
    if (ctx->pc == 0x55D084u) {
        ctx->pc = 0x55D084u;
            // 0x55d084: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x55D088u;
        goto label_55d088;
    }
    ctx->pc = 0x55D080u;
    {
        const bool branch_taken_0x55d080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d080) {
            ctx->pc = 0x55D084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D080u;
            // 0x55d084: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55D0B0u;
            goto label_55d0b0;
        }
    }
    ctx->pc = 0x55D088u;
label_55d088:
    // 0x55d088: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_55d08c:
    if (ctx->pc == 0x55D08Cu) {
        ctx->pc = 0x55D090u;
        goto label_55d090;
    }
    ctx->pc = 0x55D088u;
    {
        const bool branch_taken_0x55d088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d088) {
            ctx->pc = 0x55D0ACu;
            goto label_55d0ac;
        }
    }
    ctx->pc = 0x55D090u;
label_55d090:
    // 0x55d090: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_55d094:
    if (ctx->pc == 0x55D094u) {
        ctx->pc = 0x55D098u;
        goto label_55d098;
    }
    ctx->pc = 0x55D090u;
    {
        const bool branch_taken_0x55d090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d090) {
            ctx->pc = 0x55D0ACu;
            goto label_55d0ac;
        }
    }
    ctx->pc = 0x55D098u;
label_55d098:
    // 0x55d098: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x55d098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_55d09c:
    // 0x55d09c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_55d0a0:
    if (ctx->pc == 0x55D0A0u) {
        ctx->pc = 0x55D0A4u;
        goto label_55d0a4;
    }
    ctx->pc = 0x55D09Cu;
    {
        const bool branch_taken_0x55d09c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d09c) {
            ctx->pc = 0x55D0ACu;
            goto label_55d0ac;
        }
    }
    ctx->pc = 0x55D0A4u;
label_55d0a4:
    // 0x55d0a4: 0xc0400a8  jal         func_1002A0
label_55d0a8:
    if (ctx->pc == 0x55D0A8u) {
        ctx->pc = 0x55D0ACu;
        goto label_55d0ac;
    }
    ctx->pc = 0x55D0A4u;
    SET_GPR_U32(ctx, 31, 0x55D0ACu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D0ACu; }
        if (ctx->pc != 0x55D0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D0ACu; }
        if (ctx->pc != 0x55D0ACu) { return; }
    }
    ctx->pc = 0x55D0ACu;
label_55d0ac:
    // 0x55d0ac: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x55d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_55d0b0:
    // 0x55d0b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_55d0b4:
    if (ctx->pc == 0x55D0B4u) {
        ctx->pc = 0x55D0B8u;
        goto label_55d0b8;
    }
    ctx->pc = 0x55D0B0u;
    {
        const bool branch_taken_0x55d0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d0b0) {
            ctx->pc = 0x55D0CCu;
            goto label_55d0cc;
        }
    }
    ctx->pc = 0x55D0B8u;
label_55d0b8:
    // 0x55d0b8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x55d0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_55d0bc:
    // 0x55d0bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55d0c0:
    // 0x55d0c0: 0x24637c20  addiu       $v1, $v1, 0x7C20
    ctx->pc = 0x55d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31776));
label_55d0c4:
    // 0x55d0c4: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x55d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_55d0c8:
    // 0x55d0c8: 0xac40e3f8  sw          $zero, -0x1C08($v0)
    ctx->pc = 0x55d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960120), GPR_U32(ctx, 0));
label_55d0cc:
    // 0x55d0cc: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_55d0d0:
    if (ctx->pc == 0x55D0D0u) {
        ctx->pc = 0x55D0D0u;
            // 0x55d0d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x55D0D4u;
        goto label_55d0d4;
    }
    ctx->pc = 0x55D0CCu;
    {
        const bool branch_taken_0x55d0cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d0cc) {
            ctx->pc = 0x55D0D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D0CCu;
            // 0x55d0d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55D128u;
            goto label_55d128;
        }
    }
    ctx->pc = 0x55D0D4u;
label_55d0d4:
    // 0x55d0d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x55d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_55d0d8:
    // 0x55d0d8: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x55d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_55d0dc:
    // 0x55d0dc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x55d0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_55d0e0:
    // 0x55d0e0: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x55d0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_55d0e4:
    // 0x55d0e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_55d0e8:
    if (ctx->pc == 0x55D0E8u) {
        ctx->pc = 0x55D0E8u;
            // 0x55d0e8: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x55D0ECu;
        goto label_55d0ec;
    }
    ctx->pc = 0x55D0E4u;
    {
        const bool branch_taken_0x55d0e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d0e4) {
            ctx->pc = 0x55D0E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D0E4u;
            // 0x55d0e8: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55D100u;
            goto label_55d100;
        }
    }
    ctx->pc = 0x55D0ECu;
label_55d0ec:
    // 0x55d0ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55d0ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55d0f0:
    // 0x55d0f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x55d0f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_55d0f4:
    // 0x55d0f4: 0x320f809  jalr        $t9
label_55d0f8:
    if (ctx->pc == 0x55D0F8u) {
        ctx->pc = 0x55D0F8u;
            // 0x55d0f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55D0FCu;
        goto label_55d0fc;
    }
    ctx->pc = 0x55D0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55D0FCu);
        ctx->pc = 0x55D0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55D0F4u;
            // 0x55d0f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55D0FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55D0FCu; }
            if (ctx->pc != 0x55D0FCu) { return; }
        }
        }
    }
    ctx->pc = 0x55D0FCu;
label_55d0fc:
    // 0x55d0fc: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x55d0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_55d100:
    // 0x55d100: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_55d104:
    if (ctx->pc == 0x55D104u) {
        ctx->pc = 0x55D104u;
            // 0x55d104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D108u;
        goto label_55d108;
    }
    ctx->pc = 0x55D100u;
    {
        const bool branch_taken_0x55d100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d100) {
            ctx->pc = 0x55D104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D100u;
            // 0x55d104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55D11Cu;
            goto label_55d11c;
        }
    }
    ctx->pc = 0x55D108u;
label_55d108:
    // 0x55d108: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55d108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55d10c:
    // 0x55d10c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x55d10cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_55d110:
    // 0x55d110: 0x320f809  jalr        $t9
label_55d114:
    if (ctx->pc == 0x55D114u) {
        ctx->pc = 0x55D114u;
            // 0x55d114: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55D118u;
        goto label_55d118;
    }
    ctx->pc = 0x55D110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55D118u);
        ctx->pc = 0x55D114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55D110u;
            // 0x55d114: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55D118u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55D118u; }
            if (ctx->pc != 0x55D118u) { return; }
        }
        }
    }
    ctx->pc = 0x55D118u;
label_55d118:
    // 0x55d118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x55d118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_55d11c:
    // 0x55d11c: 0xc075bf8  jal         func_1D6FE0
label_55d120:
    if (ctx->pc == 0x55D120u) {
        ctx->pc = 0x55D120u;
            // 0x55d120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D124u;
        goto label_55d124;
    }
    ctx->pc = 0x55D11Cu;
    SET_GPR_U32(ctx, 31, 0x55D124u);
    ctx->pc = 0x55D120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D11Cu;
            // 0x55d120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D124u; }
        if (ctx->pc != 0x55D124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D124u; }
        if (ctx->pc != 0x55D124u) { return; }
    }
    ctx->pc = 0x55D124u;
label_55d124:
    // 0x55d124: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x55d124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_55d128:
    // 0x55d128: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x55d128u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_55d12c:
    // 0x55d12c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_55d130:
    if (ctx->pc == 0x55D130u) {
        ctx->pc = 0x55D130u;
            // 0x55d130: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D134u;
        goto label_55d134;
    }
    ctx->pc = 0x55D12Cu;
    {
        const bool branch_taken_0x55d12c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x55d12c) {
            ctx->pc = 0x55D130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D12Cu;
            // 0x55d130: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55D140u;
            goto label_55d140;
        }
    }
    ctx->pc = 0x55D134u;
label_55d134:
    // 0x55d134: 0xc0400a8  jal         func_1002A0
label_55d138:
    if (ctx->pc == 0x55D138u) {
        ctx->pc = 0x55D138u;
            // 0x55d138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D13Cu;
        goto label_55d13c;
    }
    ctx->pc = 0x55D134u;
    SET_GPR_U32(ctx, 31, 0x55D13Cu);
    ctx->pc = 0x55D138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D134u;
            // 0x55d138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D13Cu; }
        if (ctx->pc != 0x55D13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D13Cu; }
        if (ctx->pc != 0x55D13Cu) { return; }
    }
    ctx->pc = 0x55D13Cu;
label_55d13c:
    // 0x55d13c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x55d13cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_55d140:
    // 0x55d140: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x55d140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_55d144:
    // 0x55d144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x55d144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55d148:
    // 0x55d148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x55d148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_55d14c:
    // 0x55d14c: 0x3e00008  jr          $ra
label_55d150:
    if (ctx->pc == 0x55D150u) {
        ctx->pc = 0x55D150u;
            // 0x55d150: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x55D154u;
        goto label_55d154;
    }
    ctx->pc = 0x55D14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55D150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55D14Cu;
            // 0x55d150: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55D154u;
label_55d154:
    // 0x55d154: 0x0  nop
    ctx->pc = 0x55d154u;
    // NOP
label_55d158:
    // 0x55d158: 0x0  nop
    ctx->pc = 0x55d158u;
    // NOP
label_55d15c:
    // 0x55d15c: 0x0  nop
    ctx->pc = 0x55d15cu;
    // NOP
}
