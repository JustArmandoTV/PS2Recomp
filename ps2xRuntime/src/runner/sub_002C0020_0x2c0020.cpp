#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0020
// Address: 0x2c0020 - 0x2c0220
void sub_002C0020_0x2c0020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0020_0x2c0020");
#endif

    switch (ctx->pc) {
        case 0x2c0020u: goto label_2c0020;
        case 0x2c0024u: goto label_2c0024;
        case 0x2c0028u: goto label_2c0028;
        case 0x2c002cu: goto label_2c002c;
        case 0x2c0030u: goto label_2c0030;
        case 0x2c0034u: goto label_2c0034;
        case 0x2c0038u: goto label_2c0038;
        case 0x2c003cu: goto label_2c003c;
        case 0x2c0040u: goto label_2c0040;
        case 0x2c0044u: goto label_2c0044;
        case 0x2c0048u: goto label_2c0048;
        case 0x2c004cu: goto label_2c004c;
        case 0x2c0050u: goto label_2c0050;
        case 0x2c0054u: goto label_2c0054;
        case 0x2c0058u: goto label_2c0058;
        case 0x2c005cu: goto label_2c005c;
        case 0x2c0060u: goto label_2c0060;
        case 0x2c0064u: goto label_2c0064;
        case 0x2c0068u: goto label_2c0068;
        case 0x2c006cu: goto label_2c006c;
        case 0x2c0070u: goto label_2c0070;
        case 0x2c0074u: goto label_2c0074;
        case 0x2c0078u: goto label_2c0078;
        case 0x2c007cu: goto label_2c007c;
        case 0x2c0080u: goto label_2c0080;
        case 0x2c0084u: goto label_2c0084;
        case 0x2c0088u: goto label_2c0088;
        case 0x2c008cu: goto label_2c008c;
        case 0x2c0090u: goto label_2c0090;
        case 0x2c0094u: goto label_2c0094;
        case 0x2c0098u: goto label_2c0098;
        case 0x2c009cu: goto label_2c009c;
        case 0x2c00a0u: goto label_2c00a0;
        case 0x2c00a4u: goto label_2c00a4;
        case 0x2c00a8u: goto label_2c00a8;
        case 0x2c00acu: goto label_2c00ac;
        case 0x2c00b0u: goto label_2c00b0;
        case 0x2c00b4u: goto label_2c00b4;
        case 0x2c00b8u: goto label_2c00b8;
        case 0x2c00bcu: goto label_2c00bc;
        case 0x2c00c0u: goto label_2c00c0;
        case 0x2c00c4u: goto label_2c00c4;
        case 0x2c00c8u: goto label_2c00c8;
        case 0x2c00ccu: goto label_2c00cc;
        case 0x2c00d0u: goto label_2c00d0;
        case 0x2c00d4u: goto label_2c00d4;
        case 0x2c00d8u: goto label_2c00d8;
        case 0x2c00dcu: goto label_2c00dc;
        case 0x2c00e0u: goto label_2c00e0;
        case 0x2c00e4u: goto label_2c00e4;
        case 0x2c00e8u: goto label_2c00e8;
        case 0x2c00ecu: goto label_2c00ec;
        case 0x2c00f0u: goto label_2c00f0;
        case 0x2c00f4u: goto label_2c00f4;
        case 0x2c00f8u: goto label_2c00f8;
        case 0x2c00fcu: goto label_2c00fc;
        case 0x2c0100u: goto label_2c0100;
        case 0x2c0104u: goto label_2c0104;
        case 0x2c0108u: goto label_2c0108;
        case 0x2c010cu: goto label_2c010c;
        case 0x2c0110u: goto label_2c0110;
        case 0x2c0114u: goto label_2c0114;
        case 0x2c0118u: goto label_2c0118;
        case 0x2c011cu: goto label_2c011c;
        case 0x2c0120u: goto label_2c0120;
        case 0x2c0124u: goto label_2c0124;
        case 0x2c0128u: goto label_2c0128;
        case 0x2c012cu: goto label_2c012c;
        case 0x2c0130u: goto label_2c0130;
        case 0x2c0134u: goto label_2c0134;
        case 0x2c0138u: goto label_2c0138;
        case 0x2c013cu: goto label_2c013c;
        case 0x2c0140u: goto label_2c0140;
        case 0x2c0144u: goto label_2c0144;
        case 0x2c0148u: goto label_2c0148;
        case 0x2c014cu: goto label_2c014c;
        case 0x2c0150u: goto label_2c0150;
        case 0x2c0154u: goto label_2c0154;
        case 0x2c0158u: goto label_2c0158;
        case 0x2c015cu: goto label_2c015c;
        case 0x2c0160u: goto label_2c0160;
        case 0x2c0164u: goto label_2c0164;
        case 0x2c0168u: goto label_2c0168;
        case 0x2c016cu: goto label_2c016c;
        case 0x2c0170u: goto label_2c0170;
        case 0x2c0174u: goto label_2c0174;
        case 0x2c0178u: goto label_2c0178;
        case 0x2c017cu: goto label_2c017c;
        case 0x2c0180u: goto label_2c0180;
        case 0x2c0184u: goto label_2c0184;
        case 0x2c0188u: goto label_2c0188;
        case 0x2c018cu: goto label_2c018c;
        case 0x2c0190u: goto label_2c0190;
        case 0x2c0194u: goto label_2c0194;
        case 0x2c0198u: goto label_2c0198;
        case 0x2c019cu: goto label_2c019c;
        case 0x2c01a0u: goto label_2c01a0;
        case 0x2c01a4u: goto label_2c01a4;
        case 0x2c01a8u: goto label_2c01a8;
        case 0x2c01acu: goto label_2c01ac;
        case 0x2c01b0u: goto label_2c01b0;
        case 0x2c01b4u: goto label_2c01b4;
        case 0x2c01b8u: goto label_2c01b8;
        case 0x2c01bcu: goto label_2c01bc;
        case 0x2c01c0u: goto label_2c01c0;
        case 0x2c01c4u: goto label_2c01c4;
        case 0x2c01c8u: goto label_2c01c8;
        case 0x2c01ccu: goto label_2c01cc;
        case 0x2c01d0u: goto label_2c01d0;
        case 0x2c01d4u: goto label_2c01d4;
        case 0x2c01d8u: goto label_2c01d8;
        case 0x2c01dcu: goto label_2c01dc;
        case 0x2c01e0u: goto label_2c01e0;
        case 0x2c01e4u: goto label_2c01e4;
        case 0x2c01e8u: goto label_2c01e8;
        case 0x2c01ecu: goto label_2c01ec;
        case 0x2c01f0u: goto label_2c01f0;
        case 0x2c01f4u: goto label_2c01f4;
        case 0x2c01f8u: goto label_2c01f8;
        case 0x2c01fcu: goto label_2c01fc;
        case 0x2c0200u: goto label_2c0200;
        case 0x2c0204u: goto label_2c0204;
        case 0x2c0208u: goto label_2c0208;
        case 0x2c020cu: goto label_2c020c;
        case 0x2c0210u: goto label_2c0210;
        case 0x2c0214u: goto label_2c0214;
        case 0x2c0218u: goto label_2c0218;
        case 0x2c021cu: goto label_2c021c;
        default: break;
    }

    ctx->pc = 0x2c0020u;

label_2c0020:
    // 0x2c0020: 0x80788fc  j           func_1E23F0
label_2c0024:
    if (ctx->pc == 0x2C0024u) {
        ctx->pc = 0x2C0028u;
        goto label_2c0028;
    }
    ctx->pc = 0x2C0020u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C0028u;
label_2c0028:
    // 0x2c0028: 0x0  nop
    ctx->pc = 0x2c0028u;
    // NOP
label_2c002c:
    // 0x2c002c: 0x0  nop
    ctx->pc = 0x2c002cu;
    // NOP
label_2c0030:
    // 0x2c0030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c0030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c0034:
    // 0x2c0034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c0034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c0038:
    // 0x2c0038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c0038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c003c:
    // 0x2c003c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c003cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c0040:
    // 0x2c0040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c0040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c0044:
    // 0x2c0044: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_2c0048:
    if (ctx->pc == 0x2C0048u) {
        ctx->pc = 0x2C0048u;
            // 0x2c0048: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C004Cu;
        goto label_2c004c;
    }
    ctx->pc = 0x2C0044u;
    {
        const bool branch_taken_0x2c0044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0044u;
            // 0x2c0048: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0044) {
            ctx->pc = 0x2C010Cu;
            goto label_2c010c;
        }
    }
    ctx->pc = 0x2C004Cu;
label_2c004c:
    // 0x2c004c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c004cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c0050:
    // 0x2c0050: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c0054:
    // 0x2c0054: 0x246318c0  addiu       $v1, $v1, 0x18C0
    ctx->pc = 0x2c0054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6336));
label_2c0058:
    // 0x2c0058: 0x24421900  addiu       $v0, $v0, 0x1900
    ctx->pc = 0x2c0058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6400));
label_2c005c:
    // 0x2c005c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c005cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c0060:
    // 0x2c0060: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2c0060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2c0064:
    // 0x2c0064: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c0064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c0068:
    // 0x2c0068: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c0068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c006c:
    // 0x2c006c: 0x320f809  jalr        $t9
label_2c0070:
    if (ctx->pc == 0x2C0070u) {
        ctx->pc = 0x2C0074u;
        goto label_2c0074;
    }
    ctx->pc = 0x2C006Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C0074u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C0074u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C0074u; }
            if (ctx->pc != 0x2C0074u) { return; }
        }
        }
    }
    ctx->pc = 0x2C0074u;
label_2c0074:
    // 0x2c0074: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_2c0078:
    if (ctx->pc == 0x2C0078u) {
        ctx->pc = 0x2C0078u;
            // 0x2c0078: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C007Cu;
        goto label_2c007c;
    }
    ctx->pc = 0x2C0074u;
    {
        const bool branch_taken_0x2c0074 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0074) {
            ctx->pc = 0x2C0078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0074u;
            // 0x2c0078: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C00F8u;
            goto label_2c00f8;
        }
    }
    ctx->pc = 0x2C007Cu;
label_2c007c:
    // 0x2c007c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c007cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c0080:
    // 0x2c0080: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c0080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c0084:
    // 0x2c0084: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x2c0084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_2c0088:
    // 0x2c0088: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x2c0088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_2c008c:
    // 0x2c008c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c008cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c0090:
    // 0x2c0090: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2c0090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2c0094:
    // 0x2c0094: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2c0098:
    if (ctx->pc == 0x2C0098u) {
        ctx->pc = 0x2C0098u;
            // 0x2c0098: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2C009Cu;
        goto label_2c009c;
    }
    ctx->pc = 0x2C0094u;
    {
        const bool branch_taken_0x2c0094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0094u;
            // 0x2c0098: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0094) {
            ctx->pc = 0x2C00D0u;
            goto label_2c00d0;
        }
    }
    ctx->pc = 0x2C009Cu;
label_2c009c:
    // 0x2c009c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c009cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c00a0:
    // 0x2c00a0: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2c00a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2c00a4:
    // 0x2c00a4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2c00a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2c00a8:
    // 0x2c00a8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2c00a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2c00ac:
    // 0x2c00ac: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2c00b0:
    if (ctx->pc == 0x2C00B0u) {
        ctx->pc = 0x2C00B4u;
        goto label_2c00b4;
    }
    ctx->pc = 0x2C00ACu;
    {
        const bool branch_taken_0x2c00ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c00ac) {
            ctx->pc = 0x2C00D0u;
            goto label_2c00d0;
        }
    }
    ctx->pc = 0x2C00B4u;
label_2c00b4:
    // 0x2c00b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c00b8:
    if (ctx->pc == 0x2C00B8u) {
        ctx->pc = 0x2C00B8u;
            // 0x2c00b8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2C00BCu;
        goto label_2c00bc;
    }
    ctx->pc = 0x2C00B4u;
    {
        const bool branch_taken_0x2c00b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c00b4) {
            ctx->pc = 0x2C00B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C00B4u;
            // 0x2c00b8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C00D0u;
            goto label_2c00d0;
        }
    }
    ctx->pc = 0x2C00BCu;
label_2c00bc:
    // 0x2c00bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c00bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c00c0:
    // 0x2c00c0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c00c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c00c4:
    // 0x2c00c4: 0x320f809  jalr        $t9
label_2c00c8:
    if (ctx->pc == 0x2C00C8u) {
        ctx->pc = 0x2C00C8u;
            // 0x2c00c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C00CCu;
        goto label_2c00cc;
    }
    ctx->pc = 0x2C00C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C00CCu);
        ctx->pc = 0x2C00C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C00C4u;
            // 0x2c00c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C00CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C00CCu; }
            if (ctx->pc != 0x2C00CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2C00CCu;
label_2c00cc:
    // 0x2c00cc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2c00ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2c00d0:
    // 0x2c00d0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2c00d4:
    if (ctx->pc == 0x2C00D4u) {
        ctx->pc = 0x2C00D8u;
        goto label_2c00d8;
    }
    ctx->pc = 0x2C00D0u;
    {
        const bool branch_taken_0x2c00d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c00d0) {
            ctx->pc = 0x2C00F4u;
            goto label_2c00f4;
        }
    }
    ctx->pc = 0x2C00D8u;
label_2c00d8:
    // 0x2c00d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c00dc:
    // 0x2c00dc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2c00dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2c00e0:
    // 0x2c00e0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2c00e4:
    if (ctx->pc == 0x2C00E4u) {
        ctx->pc = 0x2C00E4u;
            // 0x2c00e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C00E8u;
        goto label_2c00e8;
    }
    ctx->pc = 0x2C00E0u;
    {
        const bool branch_taken_0x2c00e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C00E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C00E0u;
            // 0x2c00e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c00e0) {
            ctx->pc = 0x2C00F4u;
            goto label_2c00f4;
        }
    }
    ctx->pc = 0x2C00E8u;
label_2c00e8:
    // 0x2c00e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c00e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c00ec:
    // 0x2c00ec: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c00ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c00f0:
    // 0x2c00f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c00f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c00f4:
    // 0x2c00f4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c00f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c00f8:
    // 0x2c00f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c00f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c00fc:
    // 0x2c00fc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c0100:
    if (ctx->pc == 0x2C0100u) {
        ctx->pc = 0x2C0100u;
            // 0x2c0100: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0104u;
        goto label_2c0104;
    }
    ctx->pc = 0x2C00FCu;
    {
        const bool branch_taken_0x2c00fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c00fc) {
            ctx->pc = 0x2C0100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C00FCu;
            // 0x2c0100: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0110u;
            goto label_2c0110;
        }
    }
    ctx->pc = 0x2C0104u;
label_2c0104:
    // 0x2c0104: 0xc0400a8  jal         func_1002A0
label_2c0108:
    if (ctx->pc == 0x2C0108u) {
        ctx->pc = 0x2C0108u;
            // 0x2c0108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C010Cu;
        goto label_2c010c;
    }
    ctx->pc = 0x2C0104u;
    SET_GPR_U32(ctx, 31, 0x2C010Cu);
    ctx->pc = 0x2C0108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0104u;
            // 0x2c0108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C010Cu; }
        if (ctx->pc != 0x2C010Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C010Cu; }
        if (ctx->pc != 0x2C010Cu) { return; }
    }
    ctx->pc = 0x2C010Cu;
label_2c010c:
    // 0x2c010c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c010cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c0110:
    // 0x2c0110: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c0110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c0114:
    // 0x2c0114: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c0114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c0118:
    // 0x2c0118: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c0118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c011c:
    // 0x2c011c: 0x3e00008  jr          $ra
label_2c0120:
    if (ctx->pc == 0x2C0120u) {
        ctx->pc = 0x2C0120u;
            // 0x2c0120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C0124u;
        goto label_2c0124;
    }
    ctx->pc = 0x2C011Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C011Cu;
            // 0x2c0120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0124u;
label_2c0124:
    // 0x2c0124: 0x0  nop
    ctx->pc = 0x2c0124u;
    // NOP
label_2c0128:
    // 0x2c0128: 0x0  nop
    ctx->pc = 0x2c0128u;
    // NOP
label_2c012c:
    // 0x2c012c: 0x0  nop
    ctx->pc = 0x2c012cu;
    // NOP
label_2c0130:
    // 0x2c0130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c0134:
    // 0x2c0134: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c0138:
    // 0x2c0138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c0138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c013c:
    // 0x2c013c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c013cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c0140:
    // 0x2c0140: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c0140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c0144:
    // 0x2c0144: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c0144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c0148:
    // 0x2c0148: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c0148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c014c:
    // 0x2c014c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c014cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2c0150:
    // 0x2c0150: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2c0150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_2c0154:
    // 0x2c0154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c0158:
    // 0x2c0158: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c0158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2c015c:
    // 0x2c015c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c015cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c0160:
    // 0x2c0160: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c0160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_2c0164:
    // 0x2c0164: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c0164u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2c0168:
    // 0x2c0168: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2c0168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_2c016c:
    // 0x2c016c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c016cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2c0170:
    // 0x2c0170: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2c0170u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_2c0174:
    // 0x2c0174: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2c0174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_2c0178:
    // 0x2c0178: 0xc04cbd8  jal         func_132F60
label_2c017c:
    if (ctx->pc == 0x2C017Cu) {
        ctx->pc = 0x2C017Cu;
            // 0x2c017c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2C0180u;
        goto label_2c0180;
    }
    ctx->pc = 0x2C0178u;
    SET_GPR_U32(ctx, 31, 0x2C0180u);
    ctx->pc = 0x2C017Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0178u;
            // 0x2c017c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0180u; }
        if (ctx->pc != 0x2C0180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0180u; }
        if (ctx->pc != 0x2C0180u) { return; }
    }
    ctx->pc = 0x2C0180u;
label_2c0180:
    // 0x2c0180: 0xc04c968  jal         func_1325A0
label_2c0184:
    if (ctx->pc == 0x2C0184u) {
        ctx->pc = 0x2C0184u;
            // 0x2c0184: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2C0188u;
        goto label_2c0188;
    }
    ctx->pc = 0x2C0180u;
    SET_GPR_U32(ctx, 31, 0x2C0188u);
    ctx->pc = 0x2C0184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0180u;
            // 0x2c0184: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0188u; }
        if (ctx->pc != 0x2C0188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0188u; }
        if (ctx->pc != 0x2C0188u) { return; }
    }
    ctx->pc = 0x2C0188u;
label_2c0188:
    // 0x2c0188: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c0188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c018c:
    // 0x2c018c: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x2c018cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
label_2c0190:
    // 0x2c0190: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x2c0190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2c0194:
    // 0x2c0194: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x2c0194u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
label_2c0198:
    // 0x2c0198: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x2c0198u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
label_2c019c:
    // 0x2c019c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2c019cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_2c01a0:
    // 0x2c01a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c01a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c01a4:
    // 0x2c01a4: 0x254ac560  addiu       $t2, $t2, -0x3AA0
    ctx->pc = 0x2c01a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952288));
label_2c01a8:
    // 0x2c01a8: 0x8c8b0788  lw          $t3, 0x788($a0)
    ctx->pc = 0x2c01a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1928)));
label_2c01ac:
    // 0x2c01ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c01acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c01b0:
    // 0x2c01b0: 0x25292660  addiu       $t1, $t1, 0x2660
    ctx->pc = 0x2c01b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9824));
label_2c01b4:
    // 0x2c01b4: 0x25082670  addiu       $t0, $t0, 0x2670
    ctx->pc = 0x2c01b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9840));
label_2c01b8:
    // 0x2c01b8: 0x24e726b0  addiu       $a3, $a3, 0x26B0
    ctx->pc = 0x2c01b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9904));
label_2c01bc:
    // 0x2c01bc: 0x246318c0  addiu       $v1, $v1, 0x18C0
    ctx->pc = 0x2c01bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6336));
label_2c01c0:
    // 0x2c01c0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x2c01c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_2c01c4:
    // 0x2c01c4: 0x24421900  addiu       $v0, $v0, 0x1900
    ctx->pc = 0x2c01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6400));
label_2c01c8:
    // 0x2c01c8: 0x914a0000  lbu         $t2, 0x0($t2)
    ctx->pc = 0x2c01c8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_2c01cc:
    // 0x2c01cc: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x2c01ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2c01d0:
    // 0x2c01d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c01d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c01d4:
    // 0x2c01d4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2c01d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2c01d8:
    // 0x2c01d8: 0xa20a004d  sb          $t2, 0x4D($s0)
    ctx->pc = 0x2c01d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 10));
label_2c01dc:
    // 0x2c01dc: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x2c01dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
label_2c01e0:
    // 0x2c01e0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2c01e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_2c01e4:
    // 0x2c01e4: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x2c01e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
label_2c01e8:
    // 0x2c01e8: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x2c01e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_2c01ec:
    // 0x2c01ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c01ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c01f0:
    // 0x2c01f0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2c01f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2c01f4:
    // 0x2c01f4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2c01f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_2c01f8:
    // 0x2c01f8: 0xc04a576  jal         func_1295D8
label_2c01fc:
    if (ctx->pc == 0x2C01FCu) {
        ctx->pc = 0x2C01FCu;
            // 0x2c01fc: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x2C0200u;
        goto label_2c0200;
    }
    ctx->pc = 0x2C01F8u;
    SET_GPR_U32(ctx, 31, 0x2C0200u);
    ctx->pc = 0x2C01FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C01F8u;
            // 0x2c01fc: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0200u; }
        if (ctx->pc != 0x2C0200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0200u; }
        if (ctx->pc != 0x2C0200u) { return; }
    }
    ctx->pc = 0x2C0200u;
label_2c0200:
    // 0x2c0200: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c0200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c0204:
    // 0x2c0204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c0204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c0208:
    // 0x2c0208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c0208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c020c:
    // 0x2c020c: 0x3e00008  jr          $ra
label_2c0210:
    if (ctx->pc == 0x2C0210u) {
        ctx->pc = 0x2C0210u;
            // 0x2c0210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2C0214u;
        goto label_2c0214;
    }
    ctx->pc = 0x2C020Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C020Cu;
            // 0x2c0210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0214u;
label_2c0214:
    // 0x2c0214: 0x0  nop
    ctx->pc = 0x2c0214u;
    // NOP
label_2c0218:
    // 0x2c0218: 0x0  nop
    ctx->pc = 0x2c0218u;
    // NOP
label_2c021c:
    // 0x2c021c: 0x0  nop
    ctx->pc = 0x2c021cu;
    // NOP
}
