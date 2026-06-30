#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00393000
// Address: 0x393000 - 0x3931d0
void sub_00393000_0x393000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393000_0x393000");
#endif

    switch (ctx->pc) {
        case 0x393000u: goto label_393000;
        case 0x393004u: goto label_393004;
        case 0x393008u: goto label_393008;
        case 0x39300cu: goto label_39300c;
        case 0x393010u: goto label_393010;
        case 0x393014u: goto label_393014;
        case 0x393018u: goto label_393018;
        case 0x39301cu: goto label_39301c;
        case 0x393020u: goto label_393020;
        case 0x393024u: goto label_393024;
        case 0x393028u: goto label_393028;
        case 0x39302cu: goto label_39302c;
        case 0x393030u: goto label_393030;
        case 0x393034u: goto label_393034;
        case 0x393038u: goto label_393038;
        case 0x39303cu: goto label_39303c;
        case 0x393040u: goto label_393040;
        case 0x393044u: goto label_393044;
        case 0x393048u: goto label_393048;
        case 0x39304cu: goto label_39304c;
        case 0x393050u: goto label_393050;
        case 0x393054u: goto label_393054;
        case 0x393058u: goto label_393058;
        case 0x39305cu: goto label_39305c;
        case 0x393060u: goto label_393060;
        case 0x393064u: goto label_393064;
        case 0x393068u: goto label_393068;
        case 0x39306cu: goto label_39306c;
        case 0x393070u: goto label_393070;
        case 0x393074u: goto label_393074;
        case 0x393078u: goto label_393078;
        case 0x39307cu: goto label_39307c;
        case 0x393080u: goto label_393080;
        case 0x393084u: goto label_393084;
        case 0x393088u: goto label_393088;
        case 0x39308cu: goto label_39308c;
        case 0x393090u: goto label_393090;
        case 0x393094u: goto label_393094;
        case 0x393098u: goto label_393098;
        case 0x39309cu: goto label_39309c;
        case 0x3930a0u: goto label_3930a0;
        case 0x3930a4u: goto label_3930a4;
        case 0x3930a8u: goto label_3930a8;
        case 0x3930acu: goto label_3930ac;
        case 0x3930b0u: goto label_3930b0;
        case 0x3930b4u: goto label_3930b4;
        case 0x3930b8u: goto label_3930b8;
        case 0x3930bcu: goto label_3930bc;
        case 0x3930c0u: goto label_3930c0;
        case 0x3930c4u: goto label_3930c4;
        case 0x3930c8u: goto label_3930c8;
        case 0x3930ccu: goto label_3930cc;
        case 0x3930d0u: goto label_3930d0;
        case 0x3930d4u: goto label_3930d4;
        case 0x3930d8u: goto label_3930d8;
        case 0x3930dcu: goto label_3930dc;
        case 0x3930e0u: goto label_3930e0;
        case 0x3930e4u: goto label_3930e4;
        case 0x3930e8u: goto label_3930e8;
        case 0x3930ecu: goto label_3930ec;
        case 0x3930f0u: goto label_3930f0;
        case 0x3930f4u: goto label_3930f4;
        case 0x3930f8u: goto label_3930f8;
        case 0x3930fcu: goto label_3930fc;
        case 0x393100u: goto label_393100;
        case 0x393104u: goto label_393104;
        case 0x393108u: goto label_393108;
        case 0x39310cu: goto label_39310c;
        case 0x393110u: goto label_393110;
        case 0x393114u: goto label_393114;
        case 0x393118u: goto label_393118;
        case 0x39311cu: goto label_39311c;
        case 0x393120u: goto label_393120;
        case 0x393124u: goto label_393124;
        case 0x393128u: goto label_393128;
        case 0x39312cu: goto label_39312c;
        case 0x393130u: goto label_393130;
        case 0x393134u: goto label_393134;
        case 0x393138u: goto label_393138;
        case 0x39313cu: goto label_39313c;
        case 0x393140u: goto label_393140;
        case 0x393144u: goto label_393144;
        case 0x393148u: goto label_393148;
        case 0x39314cu: goto label_39314c;
        case 0x393150u: goto label_393150;
        case 0x393154u: goto label_393154;
        case 0x393158u: goto label_393158;
        case 0x39315cu: goto label_39315c;
        case 0x393160u: goto label_393160;
        case 0x393164u: goto label_393164;
        case 0x393168u: goto label_393168;
        case 0x39316cu: goto label_39316c;
        case 0x393170u: goto label_393170;
        case 0x393174u: goto label_393174;
        case 0x393178u: goto label_393178;
        case 0x39317cu: goto label_39317c;
        case 0x393180u: goto label_393180;
        case 0x393184u: goto label_393184;
        case 0x393188u: goto label_393188;
        case 0x39318cu: goto label_39318c;
        case 0x393190u: goto label_393190;
        case 0x393194u: goto label_393194;
        case 0x393198u: goto label_393198;
        case 0x39319cu: goto label_39319c;
        case 0x3931a0u: goto label_3931a0;
        case 0x3931a4u: goto label_3931a4;
        case 0x3931a8u: goto label_3931a8;
        case 0x3931acu: goto label_3931ac;
        case 0x3931b0u: goto label_3931b0;
        case 0x3931b4u: goto label_3931b4;
        case 0x3931b8u: goto label_3931b8;
        case 0x3931bcu: goto label_3931bc;
        case 0x3931c0u: goto label_3931c0;
        case 0x3931c4u: goto label_3931c4;
        case 0x3931c8u: goto label_3931c8;
        case 0x3931ccu: goto label_3931cc;
        default: break;
    }

    ctx->pc = 0x393000u;

label_393000:
    // 0x393000: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x393000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_393004:
    // 0x393004: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x393004u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_393008:
    // 0x393008: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x393008u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_39300c:
    // 0x39300c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39300cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_393010:
    // 0x393010: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x393010u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_393014:
    // 0x393014: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x393014u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_393018:
    // 0x393018: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x393018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39301c:
    // 0x39301c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x39301cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_393020:
    // 0x393020: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x393020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_393024:
    // 0x393024: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x393024u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_393028:
    // 0x393028: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x393028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_39302c:
    // 0x39302c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x39302cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_393030:
    // 0x393030: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x393030u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_393034:
    // 0x393034: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x393034u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_393038:
    // 0x393038: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x393038u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_39303c:
    // 0x39303c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39303cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_393040:
    // 0x393040: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x393040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_393044:
    // 0x393044: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x393044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_393048:
    // 0x393048: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x393048u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_39304c:
    // 0x39304c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x39304cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_393050:
    // 0x393050: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x393050u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_393054:
    // 0x393054: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x393054u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_393058:
    // 0x393058: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x393058u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_39305c:
    // 0x39305c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x39305cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_393060:
    // 0x393060: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x393060u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_393064:
    // 0x393064: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x393064u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_393068:
    // 0x393068: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x393068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39306c:
    // 0x39306c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x39306cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_393070:
    // 0x393070: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x393070u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_393074:
    // 0x393074: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x393074u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_393078:
    // 0x393078: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x393078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_39307c:
    // 0x39307c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x39307cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_393080:
    // 0x393080: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x393080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_393084:
    // 0x393084: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x393084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_393088:
    // 0x393088: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x393088u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_39308c:
    // 0x39308c: 0x3e00008  jr          $ra
label_393090:
    if (ctx->pc == 0x393090u) {
        ctx->pc = 0x393090u;
            // 0x393090: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x393094u;
        goto label_393094;
    }
    ctx->pc = 0x39308Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39308Cu;
            // 0x393090: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x393094u;
label_393094:
    // 0x393094: 0x0  nop
    ctx->pc = 0x393094u;
    // NOP
label_393098:
    // 0x393098: 0x0  nop
    ctx->pc = 0x393098u;
    // NOP
label_39309c:
    // 0x39309c: 0x0  nop
    ctx->pc = 0x39309cu;
    // NOP
label_3930a0:
    // 0x3930a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3930a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3930a4:
    // 0x3930a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3930a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3930a8:
    // 0x3930a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3930a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3930ac:
    // 0x3930ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3930acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3930b0:
    // 0x3930b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3930b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3930b4:
    // 0x3930b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3930b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3930b8:
    // 0x3930b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3930b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3930bc:
    // 0x3930bc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3930bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3930c0:
    // 0x3930c0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_3930c4:
    if (ctx->pc == 0x3930C4u) {
        ctx->pc = 0x3930C4u;
            // 0x3930c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3930C8u;
        goto label_3930c8;
    }
    ctx->pc = 0x3930C0u;
    {
        const bool branch_taken_0x3930c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3930C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3930C0u;
            // 0x3930c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3930c0) {
            ctx->pc = 0x3930F4u;
            goto label_3930f4;
        }
    }
    ctx->pc = 0x3930C8u;
label_3930c8:
    // 0x3930c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3930c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3930cc:
    // 0x3930cc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_3930d0:
    if (ctx->pc == 0x3930D0u) {
        ctx->pc = 0x3930D0u;
            // 0x3930d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3930D4u;
        goto label_3930d4;
    }
    ctx->pc = 0x3930CCu;
    {
        const bool branch_taken_0x3930cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3930cc) {
            ctx->pc = 0x3930D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3930CCu;
            // 0x3930d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3930E8u;
            goto label_3930e8;
        }
    }
    ctx->pc = 0x3930D4u;
label_3930d4:
    // 0x3930d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3930d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3930d8:
    // 0x3930d8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_3930dc:
    if (ctx->pc == 0x3930DCu) {
        ctx->pc = 0x3930E0u;
        goto label_3930e0;
    }
    ctx->pc = 0x3930D8u;
    {
        const bool branch_taken_0x3930d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3930d8) {
            ctx->pc = 0x393128u;
            goto label_393128;
        }
    }
    ctx->pc = 0x3930E0u;
label_3930e0:
    // 0x3930e0: 0x10000011  b           . + 4 + (0x11 << 2)
label_3930e4:
    if (ctx->pc == 0x3930E4u) {
        ctx->pc = 0x3930E8u;
        goto label_3930e8;
    }
    ctx->pc = 0x3930E0u;
    {
        const bool branch_taken_0x3930e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3930e0) {
            ctx->pc = 0x393128u;
            goto label_393128;
        }
    }
    ctx->pc = 0x3930E8u;
label_3930e8:
    // 0x3930e8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3930e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3930ec:
    // 0x3930ec: 0x320f809  jalr        $t9
label_3930f0:
    if (ctx->pc == 0x3930F0u) {
        ctx->pc = 0x3930F4u;
        goto label_3930f4;
    }
    ctx->pc = 0x3930ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3930F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3930F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3930F4u; }
            if (ctx->pc != 0x3930F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3930F4u;
label_3930f4:
    // 0x3930f4: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x3930f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_3930f8:
    // 0x3930f8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_3930fc:
    if (ctx->pc == 0x3930FCu) {
        ctx->pc = 0x393100u;
        goto label_393100;
    }
    ctx->pc = 0x3930F8u;
    {
        const bool branch_taken_0x3930f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3930f8) {
            ctx->pc = 0x393128u;
            goto label_393128;
        }
    }
    ctx->pc = 0x393100u;
label_393100:
    // 0x393100: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x393100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393104:
    // 0x393104: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x393104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393108:
    // 0x393108: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x393108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_39310c:
    // 0x39310c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x39310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_393110:
    // 0x393110: 0xc0e3658  jal         func_38D960
label_393114:
    if (ctx->pc == 0x393114u) {
        ctx->pc = 0x393114u;
            // 0x393114: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x393118u;
        goto label_393118;
    }
    ctx->pc = 0x393110u;
    SET_GPR_U32(ctx, 31, 0x393118u);
    ctx->pc = 0x393114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x393110u;
            // 0x393114: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393118u; }
        if (ctx->pc != 0x393118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x393118u; }
        if (ctx->pc != 0x393118u) { return; }
    }
    ctx->pc = 0x393118u;
label_393118:
    // 0x393118: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x393118u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_39311c:
    // 0x39311c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x39311cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_393120:
    // 0x393120: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_393124:
    if (ctx->pc == 0x393124u) {
        ctx->pc = 0x393124u;
            // 0x393124: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x393128u;
        goto label_393128;
    }
    ctx->pc = 0x393120u;
    {
        const bool branch_taken_0x393120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x393124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x393120u;
            // 0x393124: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393120) {
            ctx->pc = 0x393108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_393108;
        }
    }
    ctx->pc = 0x393128u;
label_393128:
    // 0x393128: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x393128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39312c:
    // 0x39312c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39312cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_393130:
    // 0x393130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x393130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_393134:
    // 0x393134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x393134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_393138:
    // 0x393138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x393138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39313c:
    // 0x39313c: 0x3e00008  jr          $ra
label_393140:
    if (ctx->pc == 0x393140u) {
        ctx->pc = 0x393140u;
            // 0x393140: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x393144u;
        goto label_393144;
    }
    ctx->pc = 0x39313Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39313Cu;
            // 0x393140: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x393144u;
label_393144:
    // 0x393144: 0x0  nop
    ctx->pc = 0x393144u;
    // NOP
label_393148:
    // 0x393148: 0x0  nop
    ctx->pc = 0x393148u;
    // NOP
label_39314c:
    // 0x39314c: 0x0  nop
    ctx->pc = 0x39314cu;
    // NOP
label_393150:
    // 0x393150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x393150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_393154:
    // 0x393154: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x393154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_393158:
    // 0x393158: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x393158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39315c:
    // 0x39315c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39315cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_393160:
    // 0x393160: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x393160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_393164:
    // 0x393164: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x393164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_393168:
    // 0x393168: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x393168u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_39316c:
    // 0x39316c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_393170:
    if (ctx->pc == 0x393170u) {
        ctx->pc = 0x393170u;
            // 0x393170: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x393174u;
        goto label_393174;
    }
    ctx->pc = 0x39316Cu;
    {
        const bool branch_taken_0x39316c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x393170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39316Cu;
            // 0x393170: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39316c) {
            ctx->pc = 0x3931A8u;
            goto label_3931a8;
        }
    }
    ctx->pc = 0x393174u;
label_393174:
    // 0x393174: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x393174u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_393178:
    // 0x393178: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x393178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39317c:
    // 0x39317c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x39317cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_393180:
    // 0x393180: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x393180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_393184:
    // 0x393184: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x393184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_393188:
    // 0x393188: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x393188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39318c:
    // 0x39318c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x39318cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_393190:
    // 0x393190: 0x320f809  jalr        $t9
label_393194:
    if (ctx->pc == 0x393194u) {
        ctx->pc = 0x393198u;
        goto label_393198;
    }
    ctx->pc = 0x393190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x393198u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x393198u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x393198u; }
            if (ctx->pc != 0x393198u) { return; }
        }
        }
    }
    ctx->pc = 0x393198u;
label_393198:
    // 0x393198: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x393198u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_39319c:
    // 0x39319c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x39319cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3931a0:
    // 0x3931a0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_3931a4:
    if (ctx->pc == 0x3931A4u) {
        ctx->pc = 0x3931A4u;
            // 0x3931a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3931A8u;
        goto label_3931a8;
    }
    ctx->pc = 0x3931A0u;
    {
        const bool branch_taken_0x3931a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3931A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3931A0u;
            // 0x3931a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3931a0) {
            ctx->pc = 0x39317Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39317c;
        }
    }
    ctx->pc = 0x3931A8u;
label_3931a8:
    // 0x3931a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3931a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3931ac:
    // 0x3931ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3931acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3931b0:
    // 0x3931b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3931b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3931b4:
    // 0x3931b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3931b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3931b8:
    // 0x3931b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3931b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3931bc:
    // 0x3931bc: 0x3e00008  jr          $ra
label_3931c0:
    if (ctx->pc == 0x3931C0u) {
        ctx->pc = 0x3931C0u;
            // 0x3931c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3931C4u;
        goto label_3931c4;
    }
    ctx->pc = 0x3931BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3931C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3931BCu;
            // 0x3931c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3931C4u;
label_3931c4:
    // 0x3931c4: 0x0  nop
    ctx->pc = 0x3931c4u;
    // NOP
label_3931c8:
    // 0x3931c8: 0x0  nop
    ctx->pc = 0x3931c8u;
    // NOP
label_3931cc:
    // 0x3931cc: 0x0  nop
    ctx->pc = 0x3931ccu;
    // NOP
}
