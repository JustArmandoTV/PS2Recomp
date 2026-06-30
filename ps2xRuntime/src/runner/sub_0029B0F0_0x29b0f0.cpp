#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029B0F0
// Address: 0x29b0f0 - 0x29b250
void sub_0029B0F0_0x29b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B0F0_0x29b0f0");
#endif

    switch (ctx->pc) {
        case 0x29b0f0u: goto label_29b0f0;
        case 0x29b0f4u: goto label_29b0f4;
        case 0x29b0f8u: goto label_29b0f8;
        case 0x29b0fcu: goto label_29b0fc;
        case 0x29b100u: goto label_29b100;
        case 0x29b104u: goto label_29b104;
        case 0x29b108u: goto label_29b108;
        case 0x29b10cu: goto label_29b10c;
        case 0x29b110u: goto label_29b110;
        case 0x29b114u: goto label_29b114;
        case 0x29b118u: goto label_29b118;
        case 0x29b11cu: goto label_29b11c;
        case 0x29b120u: goto label_29b120;
        case 0x29b124u: goto label_29b124;
        case 0x29b128u: goto label_29b128;
        case 0x29b12cu: goto label_29b12c;
        case 0x29b130u: goto label_29b130;
        case 0x29b134u: goto label_29b134;
        case 0x29b138u: goto label_29b138;
        case 0x29b13cu: goto label_29b13c;
        case 0x29b140u: goto label_29b140;
        case 0x29b144u: goto label_29b144;
        case 0x29b148u: goto label_29b148;
        case 0x29b14cu: goto label_29b14c;
        case 0x29b150u: goto label_29b150;
        case 0x29b154u: goto label_29b154;
        case 0x29b158u: goto label_29b158;
        case 0x29b15cu: goto label_29b15c;
        case 0x29b160u: goto label_29b160;
        case 0x29b164u: goto label_29b164;
        case 0x29b168u: goto label_29b168;
        case 0x29b16cu: goto label_29b16c;
        case 0x29b170u: goto label_29b170;
        case 0x29b174u: goto label_29b174;
        case 0x29b178u: goto label_29b178;
        case 0x29b17cu: goto label_29b17c;
        case 0x29b180u: goto label_29b180;
        case 0x29b184u: goto label_29b184;
        case 0x29b188u: goto label_29b188;
        case 0x29b18cu: goto label_29b18c;
        case 0x29b190u: goto label_29b190;
        case 0x29b194u: goto label_29b194;
        case 0x29b198u: goto label_29b198;
        case 0x29b19cu: goto label_29b19c;
        case 0x29b1a0u: goto label_29b1a0;
        case 0x29b1a4u: goto label_29b1a4;
        case 0x29b1a8u: goto label_29b1a8;
        case 0x29b1acu: goto label_29b1ac;
        case 0x29b1b0u: goto label_29b1b0;
        case 0x29b1b4u: goto label_29b1b4;
        case 0x29b1b8u: goto label_29b1b8;
        case 0x29b1bcu: goto label_29b1bc;
        case 0x29b1c0u: goto label_29b1c0;
        case 0x29b1c4u: goto label_29b1c4;
        case 0x29b1c8u: goto label_29b1c8;
        case 0x29b1ccu: goto label_29b1cc;
        case 0x29b1d0u: goto label_29b1d0;
        case 0x29b1d4u: goto label_29b1d4;
        case 0x29b1d8u: goto label_29b1d8;
        case 0x29b1dcu: goto label_29b1dc;
        case 0x29b1e0u: goto label_29b1e0;
        case 0x29b1e4u: goto label_29b1e4;
        case 0x29b1e8u: goto label_29b1e8;
        case 0x29b1ecu: goto label_29b1ec;
        case 0x29b1f0u: goto label_29b1f0;
        case 0x29b1f4u: goto label_29b1f4;
        case 0x29b1f8u: goto label_29b1f8;
        case 0x29b1fcu: goto label_29b1fc;
        case 0x29b200u: goto label_29b200;
        case 0x29b204u: goto label_29b204;
        case 0x29b208u: goto label_29b208;
        case 0x29b20cu: goto label_29b20c;
        case 0x29b210u: goto label_29b210;
        case 0x29b214u: goto label_29b214;
        case 0x29b218u: goto label_29b218;
        case 0x29b21cu: goto label_29b21c;
        case 0x29b220u: goto label_29b220;
        case 0x29b224u: goto label_29b224;
        case 0x29b228u: goto label_29b228;
        case 0x29b22cu: goto label_29b22c;
        case 0x29b230u: goto label_29b230;
        case 0x29b234u: goto label_29b234;
        case 0x29b238u: goto label_29b238;
        case 0x29b23cu: goto label_29b23c;
        case 0x29b240u: goto label_29b240;
        case 0x29b244u: goto label_29b244;
        case 0x29b248u: goto label_29b248;
        case 0x29b24cu: goto label_29b24c;
        default: break;
    }

    ctx->pc = 0x29b0f0u;

label_29b0f0:
    // 0x29b0f0: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x29b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
label_29b0f4:
    // 0x29b0f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_29b0f8:
    // 0x29b0f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29b0fc:
    // 0x29b0fc: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x29b0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_29b100:
    // 0x29b100: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29b100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29b104:
    // 0x29b104: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x29b104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_29b108:
    // 0x29b108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29b10c:
    // 0x29b10c: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x29b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_29b110:
    // 0x29b110: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29b110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_29b114:
    // 0x29b114: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x29b114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_29b118:
    // 0x29b118: 0x8c70ea78  lw          $s0, -0x1588($v1)
    ctx->pc = 0x29b118u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961784)));
label_29b11c:
    // 0x29b11c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_29b120:
    if (ctx->pc == 0x29B120u) {
        ctx->pc = 0x29B120u;
            // 0x29b120: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
        ctx->pc = 0x29B124u;
        goto label_29b124;
    }
    ctx->pc = 0x29B11Cu;
    {
        const bool branch_taken_0x29b11c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B11Cu;
            // 0x29b120: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b11c) {
            ctx->pc = 0x29B170u;
            goto label_29b170;
        }
    }
    ctx->pc = 0x29B124u;
label_29b124:
    // 0x29b124: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29b124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29b128:
    // 0x29b128: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x29b128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_29b12c:
    // 0x29b12c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x29b12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_29b130:
    // 0x29b130: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x29b130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_29b134:
    // 0x29b134: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_29b138:
    if (ctx->pc == 0x29B138u) {
        ctx->pc = 0x29B13Cu;
        goto label_29b13c;
    }
    ctx->pc = 0x29B134u;
    {
        const bool branch_taken_0x29b134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x29b134) {
            ctx->pc = 0x29B148u;
            goto label_29b148;
        }
    }
    ctx->pc = 0x29B13Cu;
label_29b13c:
    // 0x29b13c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x29b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_29b140:
    // 0x29b140: 0xc0a728c  jal         func_29CA30
label_29b144:
    if (ctx->pc == 0x29B144u) {
        ctx->pc = 0x29B144u;
            // 0x29b144: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x29B148u;
        goto label_29b148;
    }
    ctx->pc = 0x29B140u;
    SET_GPR_U32(ctx, 31, 0x29B148u);
    ctx->pc = 0x29B144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B140u;
            // 0x29b144: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B148u; }
        if (ctx->pc != 0x29B148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B148u; }
        if (ctx->pc != 0x29B148u) { return; }
    }
    ctx->pc = 0x29B148u;
label_29b148:
    // 0x29b148: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x29b148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_29b14c:
    // 0x29b14c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x29b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29b150:
    // 0x29b150: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x29b150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29b154:
    // 0x29b154: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29b154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_29b158:
    // 0x29b158: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x29b158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
label_29b15c:
    // 0x29b15c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29b160:
    // 0x29b160: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x29b160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_29b164:
    // 0x29b164: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x29b164u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29b168:
    // 0x29b168: 0x5600ffef  bnel        $s0, $zero, . + 4 + (-0x11 << 2)
label_29b16c:
    if (ctx->pc == 0x29B16Cu) {
        ctx->pc = 0x29B16Cu;
            // 0x29b16c: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->pc = 0x29B170u;
        goto label_29b170;
    }
    ctx->pc = 0x29B168u;
    {
        const bool branch_taken_0x29b168 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b168) {
            ctx->pc = 0x29B16Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B168u;
            // 0x29b16c: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29b128;
        }
    }
    ctx->pc = 0x29B170u;
label_29b170:
    // 0x29b170: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x29b170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_29b174:
    // 0x29b174: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x29b174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_29b178:
    // 0x29b178: 0x620001f  bltz        $s1, . + 4 + (0x1F << 2)
label_29b17c:
    if (ctx->pc == 0x29B17Cu) {
        ctx->pc = 0x29B180u;
        goto label_29b180;
    }
    ctx->pc = 0x29B178u;
    {
        const bool branch_taken_0x29b178 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x29b178) {
            ctx->pc = 0x29B1F8u;
            goto label_29b1f8;
        }
    }
    ctx->pc = 0x29B180u;
label_29b180:
    // 0x29b180: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x29b180u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_29b184:
    // 0x29b184: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x29b184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29b188:
    // 0x29b188: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x29b188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_29b18c:
    // 0x29b18c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29b190:
    // 0x29b190: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x29b190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_29b194:
    // 0x29b194: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29b194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29b198:
    // 0x29b198: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x29b198u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_29b19c:
    // 0x29b19c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_29b1a0:
    if (ctx->pc == 0x29B1A0u) {
        ctx->pc = 0x29B1A4u;
        goto label_29b1a4;
    }
    ctx->pc = 0x29B19Cu;
    {
        const bool branch_taken_0x29b19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b19c) {
            ctx->pc = 0x29B1D8u;
            goto label_29b1d8;
        }
    }
    ctx->pc = 0x29B1A4u;
label_29b1a4:
    // 0x29b1a4: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x29b1a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_29b1a8:
    // 0x29b1a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_29b1ac:
    // 0x29b1ac: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x29b1acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_29b1b0:
    // 0x29b1b0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x29b1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_29b1b4:
    // 0x29b1b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29b1b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_29b1b8:
    // 0x29b1b8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_29b1bc:
    if (ctx->pc == 0x29B1BCu) {
        ctx->pc = 0x29B1C0u;
        goto label_29b1c0;
    }
    ctx->pc = 0x29B1B8u;
    {
        const bool branch_taken_0x29b1b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b1b8) {
            ctx->pc = 0x29B1D8u;
            goto label_29b1d8;
        }
    }
    ctx->pc = 0x29B1C0u;
label_29b1c0:
    // 0x29b1c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_29b1c4:
    if (ctx->pc == 0x29B1C4u) {
        ctx->pc = 0x29B1C8u;
        goto label_29b1c8;
    }
    ctx->pc = 0x29B1C0u;
    {
        const bool branch_taken_0x29b1c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b1c0) {
            ctx->pc = 0x29B1D8u;
            goto label_29b1d8;
        }
    }
    ctx->pc = 0x29B1C8u;
label_29b1c8:
    // 0x29b1c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29b1c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29b1cc:
    // 0x29b1cc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29b1ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29b1d0:
    // 0x29b1d0: 0x320f809  jalr        $t9
label_29b1d4:
    if (ctx->pc == 0x29B1D4u) {
        ctx->pc = 0x29B1D4u;
            // 0x29b1d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29B1D8u;
        goto label_29b1d8;
    }
    ctx->pc = 0x29B1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29B1D8u);
        ctx->pc = 0x29B1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B1D0u;
            // 0x29b1d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29B1D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29B1D8u; }
            if (ctx->pc != 0x29B1D8u) { return; }
        }
        }
    }
    ctx->pc = 0x29B1D8u;
label_29b1d8:
    // 0x29b1d8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x29b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29b1dc:
    // 0x29b1dc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x29b1dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_29b1e0:
    // 0x29b1e0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x29b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_29b1e4:
    // 0x29b1e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29b1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29b1e8:
    // 0x29b1e8: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x29b1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_29b1ec:
    // 0x29b1ec: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x29b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_29b1f0:
    // 0x29b1f0: 0x621ffe4  bgez        $s1, . + 4 + (-0x1C << 2)
label_29b1f4:
    if (ctx->pc == 0x29B1F4u) {
        ctx->pc = 0x29B1F4u;
            // 0x29b1f4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x29B1F8u;
        goto label_29b1f8;
    }
    ctx->pc = 0x29B1F0u;
    {
        const bool branch_taken_0x29b1f0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x29B1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B1F0u;
            // 0x29b1f4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b1f0) {
            ctx->pc = 0x29B184u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29b184;
        }
    }
    ctx->pc = 0x29B1F8u;
label_29b1f8:
    // 0x29b1f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29b1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29b1fc:
    // 0x29b1fc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29b1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_29b200:
    // 0x29b200: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29b200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_29b204:
    // 0x29b204: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_29b208:
    if (ctx->pc == 0x29B208u) {
        ctx->pc = 0x29B208u;
            // 0x29b208: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x29B20Cu;
        goto label_29b20c;
    }
    ctx->pc = 0x29B204u;
    {
        const bool branch_taken_0x29b204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b204) {
            ctx->pc = 0x29B208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B204u;
            // 0x29b208: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B234u;
            goto label_29b234;
        }
    }
    ctx->pc = 0x29B20Cu;
label_29b20c:
    // 0x29b20c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29b210:
    // 0x29b210: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29b210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29b214:
    // 0x29b214: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29b214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29b218:
    // 0x29b218: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x29b218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_29b21c:
    // 0x29b21c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x29b21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29b220:
    // 0x29b220: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x29b220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_29b224:
    // 0x29b224: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x29b224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_29b228:
    // 0x29b228: 0xc0a7ab4  jal         func_29EAD0
label_29b22c:
    if (ctx->pc == 0x29B22Cu) {
        ctx->pc = 0x29B22Cu;
            // 0x29b22c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x29B230u;
        goto label_29b230;
    }
    ctx->pc = 0x29B228u;
    SET_GPR_U32(ctx, 31, 0x29B230u);
    ctx->pc = 0x29B22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B228u;
            // 0x29b22c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B230u; }
        if (ctx->pc != 0x29B230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B230u; }
        if (ctx->pc != 0x29B230u) { return; }
    }
    ctx->pc = 0x29B230u;
label_29b230:
    // 0x29b230: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29b234:
    // 0x29b234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29b238:
    // 0x29b238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29b23c:
    // 0x29b23c: 0x3e00008  jr          $ra
label_29b240:
    if (ctx->pc == 0x29B240u) {
        ctx->pc = 0x29B240u;
            // 0x29b240: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->pc = 0x29B244u;
        goto label_29b244;
    }
    ctx->pc = 0x29B23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B23Cu;
            // 0x29b240: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B244u;
label_29b244:
    // 0x29b244: 0x0  nop
    ctx->pc = 0x29b244u;
    // NOP
label_29b248:
    // 0x29b248: 0x0  nop
    ctx->pc = 0x29b248u;
    // NOP
label_29b24c:
    // 0x29b24c: 0x0  nop
    ctx->pc = 0x29b24cu;
    // NOP
}
