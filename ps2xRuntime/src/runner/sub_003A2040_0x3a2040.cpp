#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A2040
// Address: 0x3a2040 - 0x3a2180
void sub_003A2040_0x3a2040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2040_0x3a2040");
#endif

    switch (ctx->pc) {
        case 0x3a2040u: goto label_3a2040;
        case 0x3a2044u: goto label_3a2044;
        case 0x3a2048u: goto label_3a2048;
        case 0x3a204cu: goto label_3a204c;
        case 0x3a2050u: goto label_3a2050;
        case 0x3a2054u: goto label_3a2054;
        case 0x3a2058u: goto label_3a2058;
        case 0x3a205cu: goto label_3a205c;
        case 0x3a2060u: goto label_3a2060;
        case 0x3a2064u: goto label_3a2064;
        case 0x3a2068u: goto label_3a2068;
        case 0x3a206cu: goto label_3a206c;
        case 0x3a2070u: goto label_3a2070;
        case 0x3a2074u: goto label_3a2074;
        case 0x3a2078u: goto label_3a2078;
        case 0x3a207cu: goto label_3a207c;
        case 0x3a2080u: goto label_3a2080;
        case 0x3a2084u: goto label_3a2084;
        case 0x3a2088u: goto label_3a2088;
        case 0x3a208cu: goto label_3a208c;
        case 0x3a2090u: goto label_3a2090;
        case 0x3a2094u: goto label_3a2094;
        case 0x3a2098u: goto label_3a2098;
        case 0x3a209cu: goto label_3a209c;
        case 0x3a20a0u: goto label_3a20a0;
        case 0x3a20a4u: goto label_3a20a4;
        case 0x3a20a8u: goto label_3a20a8;
        case 0x3a20acu: goto label_3a20ac;
        case 0x3a20b0u: goto label_3a20b0;
        case 0x3a20b4u: goto label_3a20b4;
        case 0x3a20b8u: goto label_3a20b8;
        case 0x3a20bcu: goto label_3a20bc;
        case 0x3a20c0u: goto label_3a20c0;
        case 0x3a20c4u: goto label_3a20c4;
        case 0x3a20c8u: goto label_3a20c8;
        case 0x3a20ccu: goto label_3a20cc;
        case 0x3a20d0u: goto label_3a20d0;
        case 0x3a20d4u: goto label_3a20d4;
        case 0x3a20d8u: goto label_3a20d8;
        case 0x3a20dcu: goto label_3a20dc;
        case 0x3a20e0u: goto label_3a20e0;
        case 0x3a20e4u: goto label_3a20e4;
        case 0x3a20e8u: goto label_3a20e8;
        case 0x3a20ecu: goto label_3a20ec;
        case 0x3a20f0u: goto label_3a20f0;
        case 0x3a20f4u: goto label_3a20f4;
        case 0x3a20f8u: goto label_3a20f8;
        case 0x3a20fcu: goto label_3a20fc;
        case 0x3a2100u: goto label_3a2100;
        case 0x3a2104u: goto label_3a2104;
        case 0x3a2108u: goto label_3a2108;
        case 0x3a210cu: goto label_3a210c;
        case 0x3a2110u: goto label_3a2110;
        case 0x3a2114u: goto label_3a2114;
        case 0x3a2118u: goto label_3a2118;
        case 0x3a211cu: goto label_3a211c;
        case 0x3a2120u: goto label_3a2120;
        case 0x3a2124u: goto label_3a2124;
        case 0x3a2128u: goto label_3a2128;
        case 0x3a212cu: goto label_3a212c;
        case 0x3a2130u: goto label_3a2130;
        case 0x3a2134u: goto label_3a2134;
        case 0x3a2138u: goto label_3a2138;
        case 0x3a213cu: goto label_3a213c;
        case 0x3a2140u: goto label_3a2140;
        case 0x3a2144u: goto label_3a2144;
        case 0x3a2148u: goto label_3a2148;
        case 0x3a214cu: goto label_3a214c;
        case 0x3a2150u: goto label_3a2150;
        case 0x3a2154u: goto label_3a2154;
        case 0x3a2158u: goto label_3a2158;
        case 0x3a215cu: goto label_3a215c;
        case 0x3a2160u: goto label_3a2160;
        case 0x3a2164u: goto label_3a2164;
        case 0x3a2168u: goto label_3a2168;
        case 0x3a216cu: goto label_3a216c;
        case 0x3a2170u: goto label_3a2170;
        case 0x3a2174u: goto label_3a2174;
        case 0x3a2178u: goto label_3a2178;
        case 0x3a217cu: goto label_3a217c;
        default: break;
    }

    ctx->pc = 0x3a2040u;

label_3a2040:
    // 0x3a2040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a2040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3a2044:
    // 0x3a2044: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a2044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a2048:
    // 0x3a2048: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a2048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3a204c:
    // 0x3a204c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a204cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a2050:
    // 0x3a2050: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a2050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a2054:
    // 0x3a2054: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x3a2054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_3a2058:
    // 0x3a2058: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a2058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a205c:
    // 0x3a205c: 0xac860040  sw          $a2, 0x40($a0)
    ctx->pc = 0x3a205cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 6));
label_3a2060:
    // 0x3a2060: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x3a2060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
label_3a2064:
    // 0x3a2064: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x3a2064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_3a2068:
    // 0x3a2068: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x3a2068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_3a206c:
    // 0x3a206c: 0x10e20038  beq         $a3, $v0, . + 4 + (0x38 << 2)
label_3a2070:
    if (ctx->pc == 0x3A2070u) {
        ctx->pc = 0x3A2070u;
            // 0x3a2070: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x3A2074u;
        goto label_3a2074;
    }
    ctx->pc = 0x3A206Cu;
    {
        const bool branch_taken_0x3a206c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A2070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A206Cu;
            // 0x3a2070: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a206c) {
            ctx->pc = 0x3A2150u;
            goto label_3a2150;
        }
    }
    ctx->pc = 0x3A2074u;
label_3a2074:
    // 0x3a2074: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
label_3a2078:
    if (ctx->pc == 0x3A2078u) {
        ctx->pc = 0x3A2078u;
            // 0x3a2078: 0x27a30038  addiu       $v1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x3A207Cu;
        goto label_3a207c;
    }
    ctx->pc = 0x3A2074u;
    {
        const bool branch_taken_0x3a2074 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2074) {
            ctx->pc = 0x3A2078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2074u;
            // 0x3a2078: 0x27a30038  addiu       $v1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A2084u;
            goto label_3a2084;
        }
    }
    ctx->pc = 0x3A207Cu;
label_3a207c:
    // 0x3a207c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_3a2080:
    if (ctx->pc == 0x3A2080u) {
        ctx->pc = 0x3A2080u;
            // 0x3a2080: 0xa2000029  sb          $zero, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3A2084u;
        goto label_3a2084;
    }
    ctx->pc = 0x3A207Cu;
    {
        const bool branch_taken_0x3a207c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A207Cu;
            // 0x3a2080: 0xa2000029  sb          $zero, 0x29($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a207c) {
            ctx->pc = 0x3A216Cu;
            goto label_3a216c;
        }
    }
    ctx->pc = 0x3A2084u;
label_3a2084:
    // 0x3a2084: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3a2088:
    if (ctx->pc == 0x3A2088u) {
        ctx->pc = 0x3A2088u;
            // 0x3a2088: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3A208Cu;
        goto label_3a208c;
    }
    ctx->pc = 0x3A2084u;
    {
        const bool branch_taken_0x3a2084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2084u;
            // 0x3a2088: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2084) {
            ctx->pc = 0x3A20A8u;
            goto label_3a20a8;
        }
    }
    ctx->pc = 0x3A208Cu;
label_3a208c:
    // 0x3a208c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a208cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_3a2090:
    // 0x3a2090: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a2090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a2094:
    // 0x3a2094: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a2094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3a2098:
    // 0x3a2098: 0x0  nop
    ctx->pc = 0x3a2098u;
    // NOP
label_3a209c:
    // 0x3a209c: 0x0  nop
    ctx->pc = 0x3a209cu;
    // NOP
label_3a20a0:
    // 0x3a20a0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3a20a4:
    if (ctx->pc == 0x3A20A4u) {
        ctx->pc = 0x3A20A8u;
        goto label_3a20a8;
    }
    ctx->pc = 0x3A20A0u;
    {
        const bool branch_taken_0x3a20a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a20a0) {
            ctx->pc = 0x3A208Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a208c;
        }
    }
    ctx->pc = 0x3A20A8u;
label_3a20a8:
    // 0x3a20a8: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x3a20a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3a20ac:
    // 0x3a20ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a20acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a20b0:
    // 0x3a20b0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_3a20b4:
    if (ctx->pc == 0x3A20B4u) {
        ctx->pc = 0x3A20B4u;
            // 0x3a20b4: 0xafb0003c  sw          $s0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
        ctx->pc = 0x3A20B8u;
        goto label_3a20b8;
    }
    ctx->pc = 0x3A20B0u;
    {
        const bool branch_taken_0x3a20b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A20B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A20B0u;
            // 0x3a20b4: 0xafb0003c  sw          $s0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a20b0) {
            ctx->pc = 0x3A2110u;
            goto label_3a2110;
        }
    }
    ctx->pc = 0x3A20B8u;
label_3a20b8:
    // 0x3a20b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a20b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a20bc:
    // 0x3a20bc: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_3a20c0:
    if (ctx->pc == 0x3A20C0u) {
        ctx->pc = 0x3A20C4u;
        goto label_3a20c4;
    }
    ctx->pc = 0x3A20BCu;
    {
        const bool branch_taken_0x3a20bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a20bc) {
            ctx->pc = 0x3A20F4u;
            goto label_3a20f4;
        }
    }
    ctx->pc = 0x3A20C4u;
label_3a20c4:
    // 0x3a20c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a20c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a20c8:
    // 0x3a20c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3a20cc:
    if (ctx->pc == 0x3A20CCu) {
        ctx->pc = 0x3A20D0u;
        goto label_3a20d0;
    }
    ctx->pc = 0x3A20C8u;
    {
        const bool branch_taken_0x3a20c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a20c8) {
            ctx->pc = 0x3A20D8u;
            goto label_3a20d8;
        }
    }
    ctx->pc = 0x3A20D0u;
label_3a20d0:
    // 0x3a20d0: 0x10000016  b           . + 4 + (0x16 << 2)
label_3a20d4:
    if (ctx->pc == 0x3A20D4u) {
        ctx->pc = 0x3A20D4u;
            // 0x3a20d4: 0x2402ff3a  addiu       $v0, $zero, -0xC6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967098));
        ctx->pc = 0x3A20D8u;
        goto label_3a20d8;
    }
    ctx->pc = 0x3A20D0u;
    {
        const bool branch_taken_0x3a20d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A20D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A20D0u;
            // 0x3a20d4: 0x2402ff3a  addiu       $v0, $zero, -0xC6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967098));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a20d0) {
            ctx->pc = 0x3A212Cu;
            goto label_3a212c;
        }
    }
    ctx->pc = 0x3A20D8u;
label_3a20d8:
    // 0x3a20d8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3a20d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3a20dc:
    // 0x3a20dc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3a20e0:
    // 0x3a20e0: 0xdc63f368  ld          $v1, -0xC98($v1)
    ctx->pc = 0x3a20e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294964072)));
label_3a20e4:
    // 0x3a20e4: 0xc440f370  lwc1        $f0, -0xC90($v0)
    ctx->pc = 0x3a20e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a20e8:
    // 0x3a20e8: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x3a20e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
label_3a20ec:
    // 0x3a20ec: 0x10000011  b           . + 4 + (0x11 << 2)
label_3a20f0:
    if (ctx->pc == 0x3A20F0u) {
        ctx->pc = 0x3A20F0u;
            // 0x3a20f0: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->pc = 0x3A20F4u;
        goto label_3a20f4;
    }
    ctx->pc = 0x3A20ECu;
    {
        const bool branch_taken_0x3a20ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A20F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A20ECu;
            // 0x3a20f0: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a20ec) {
            ctx->pc = 0x3A2134u;
            goto label_3a2134;
        }
    }
    ctx->pc = 0x3A20F4u;
label_3a20f4:
    // 0x3a20f4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3a20f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3a20f8:
    // 0x3a20f8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a20f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3a20fc:
    // 0x3a20fc: 0xdc63f378  ld          $v1, -0xC88($v1)
    ctx->pc = 0x3a20fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294964088)));
label_3a2100:
    // 0x3a2100: 0xc440f380  lwc1        $f0, -0xC80($v0)
    ctx->pc = 0x3a2100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a2104:
    // 0x3a2104: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x3a2104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
label_3a2108:
    // 0x3a2108: 0x1000000a  b           . + 4 + (0xA << 2)
label_3a210c:
    if (ctx->pc == 0x3A210Cu) {
        ctx->pc = 0x3A210Cu;
            // 0x3a210c: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->pc = 0x3A2110u;
        goto label_3a2110;
    }
    ctx->pc = 0x3A2108u;
    {
        const bool branch_taken_0x3a2108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A210Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2108u;
            // 0x3a210c: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2108) {
            ctx->pc = 0x3A2134u;
            goto label_3a2134;
        }
    }
    ctx->pc = 0x3A2110u;
label_3a2110:
    // 0x3a2110: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3a2110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3a2114:
    // 0x3a2114: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a2114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3a2118:
    // 0x3a2118: 0xdc63f388  ld          $v1, -0xC78($v1)
    ctx->pc = 0x3a2118u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294964104)));
label_3a211c:
    // 0x3a211c: 0xc440f390  lwc1        $f0, -0xC70($v0)
    ctx->pc = 0x3a211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a2120:
    // 0x3a2120: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x3a2120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
label_3a2124:
    // 0x3a2124: 0x10000003  b           . + 4 + (0x3 << 2)
label_3a2128:
    if (ctx->pc == 0x3A2128u) {
        ctx->pc = 0x3A2128u;
            // 0x3a2128: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->pc = 0x3A212Cu;
        goto label_3a212c;
    }
    ctx->pc = 0x3A2124u;
    {
        const bool branch_taken_0x3a2124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2124u;
            // 0x3a2128: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2124) {
            ctx->pc = 0x3A2134u;
            goto label_3a2134;
        }
    }
    ctx->pc = 0x3A212Cu;
label_3a212c:
    // 0x3a212c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a2130:
    if (ctx->pc == 0x3A2130u) {
        ctx->pc = 0x3A2130u;
            // 0x3a2130: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x3A2134u;
        goto label_3a2134;
    }
    ctx->pc = 0x3A212Cu;
    {
        const bool branch_taken_0x3a212c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A212Cu;
            // 0x3a2130: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a212c) {
            ctx->pc = 0x3A2144u;
            goto label_3a2144;
        }
    }
    ctx->pc = 0x3A2134u;
label_3a2134:
    // 0x3a2134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a2134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a2138:
    // 0x3a2138: 0xc0408c8  jal         func_102320
label_3a213c:
    if (ctx->pc == 0x3A213Cu) {
        ctx->pc = 0x3A213Cu;
            // 0x3a213c: 0x27b90028  addiu       $t9, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x3A2140u;
        goto label_3a2140;
    }
    ctx->pc = 0x3A2138u;
    SET_GPR_U32(ctx, 31, 0x3A2140u);
    ctx->pc = 0x3A213Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2138u;
            // 0x3a213c: 0x27b90028  addiu       $t9, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102320u;
    if (runtime->hasFunction(0x102320u)) {
        auto targetFn = runtime->lookupFunction(0x102320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2140u; }
        if (ctx->pc != 0x3A2140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102320_0x102320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A2140u; }
        if (ctx->pc != 0x3A2140u) { return; }
    }
    ctx->pc = 0x3A2140u;
label_3a2140:
    // 0x3a2140: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3a2140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_3a2144:
    // 0x3a2144: 0xa2000029  sb          $zero, 0x29($s0)
    ctx->pc = 0x3a2144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 0));
label_3a2148:
    // 0x3a2148: 0x10000009  b           . + 4 + (0x9 << 2)
label_3a214c:
    if (ctx->pc == 0x3A214Cu) {
        ctx->pc = 0x3A214Cu;
            // 0x3a214c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x3A2150u;
        goto label_3a2150;
    }
    ctx->pc = 0x3A2148u;
    {
        const bool branch_taken_0x3a2148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A214Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2148u;
            // 0x3a214c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2148) {
            ctx->pc = 0x3A2170u;
            goto label_3a2170;
        }
    }
    ctx->pc = 0x3A2150u;
label_3a2150:
    // 0x3a2150: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3a2150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3a2154:
    // 0x3a2154: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a2154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2158:
    // 0x3a2158: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3a2158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3a215c:
    // 0x3a215c: 0x320f809  jalr        $t9
label_3a2160:
    if (ctx->pc == 0x3A2160u) {
        ctx->pc = 0x3A2164u;
        goto label_3a2164;
    }
    ctx->pc = 0x3A215Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A2164u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A2164u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A2164u; }
            if (ctx->pc != 0x3A2164u) { return; }
        }
        }
    }
    ctx->pc = 0x3A2164u;
label_3a2164:
    // 0x3a2164: 0x10000002  b           . + 4 + (0x2 << 2)
label_3a2168:
    if (ctx->pc == 0x3A2168u) {
        ctx->pc = 0x3A2168u;
            // 0x3a2168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A216Cu;
        goto label_3a216c;
    }
    ctx->pc = 0x3A2164u;
    {
        const bool branch_taken_0x3a2164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2164u;
            // 0x3a2168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2164) {
            ctx->pc = 0x3A2170u;
            goto label_3a2170;
        }
    }
    ctx->pc = 0x3A216Cu;
label_3a216c:
    // 0x3a216c: 0x2402ff3a  addiu       $v0, $zero, -0xC6
    ctx->pc = 0x3a216cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967098));
label_3a2170:
    // 0x3a2170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a2170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a2174:
    // 0x3a2174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a2174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a2178:
    // 0x3a2178: 0x3e00008  jr          $ra
label_3a217c:
    if (ctx->pc == 0x3A217Cu) {
        ctx->pc = 0x3A217Cu;
            // 0x3a217c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3A2180u;
        goto label_fallthrough_0x3a2178;
    }
    ctx->pc = 0x3A2178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A217Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A2178u;
            // 0x3a217c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3a2178:
    ctx->pc = 0x3A2180u;
}
