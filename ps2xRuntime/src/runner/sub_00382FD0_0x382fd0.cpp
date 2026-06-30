#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00382FD0
// Address: 0x382fd0 - 0x3831a0
void sub_00382FD0_0x382fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382FD0_0x382fd0");
#endif

    switch (ctx->pc) {
        case 0x382fd0u: goto label_382fd0;
        case 0x382fd4u: goto label_382fd4;
        case 0x382fd8u: goto label_382fd8;
        case 0x382fdcu: goto label_382fdc;
        case 0x382fe0u: goto label_382fe0;
        case 0x382fe4u: goto label_382fe4;
        case 0x382fe8u: goto label_382fe8;
        case 0x382fecu: goto label_382fec;
        case 0x382ff0u: goto label_382ff0;
        case 0x382ff4u: goto label_382ff4;
        case 0x382ff8u: goto label_382ff8;
        case 0x382ffcu: goto label_382ffc;
        case 0x383000u: goto label_383000;
        case 0x383004u: goto label_383004;
        case 0x383008u: goto label_383008;
        case 0x38300cu: goto label_38300c;
        case 0x383010u: goto label_383010;
        case 0x383014u: goto label_383014;
        case 0x383018u: goto label_383018;
        case 0x38301cu: goto label_38301c;
        case 0x383020u: goto label_383020;
        case 0x383024u: goto label_383024;
        case 0x383028u: goto label_383028;
        case 0x38302cu: goto label_38302c;
        case 0x383030u: goto label_383030;
        case 0x383034u: goto label_383034;
        case 0x383038u: goto label_383038;
        case 0x38303cu: goto label_38303c;
        case 0x383040u: goto label_383040;
        case 0x383044u: goto label_383044;
        case 0x383048u: goto label_383048;
        case 0x38304cu: goto label_38304c;
        case 0x383050u: goto label_383050;
        case 0x383054u: goto label_383054;
        case 0x383058u: goto label_383058;
        case 0x38305cu: goto label_38305c;
        case 0x383060u: goto label_383060;
        case 0x383064u: goto label_383064;
        case 0x383068u: goto label_383068;
        case 0x38306cu: goto label_38306c;
        case 0x383070u: goto label_383070;
        case 0x383074u: goto label_383074;
        case 0x383078u: goto label_383078;
        case 0x38307cu: goto label_38307c;
        case 0x383080u: goto label_383080;
        case 0x383084u: goto label_383084;
        case 0x383088u: goto label_383088;
        case 0x38308cu: goto label_38308c;
        case 0x383090u: goto label_383090;
        case 0x383094u: goto label_383094;
        case 0x383098u: goto label_383098;
        case 0x38309cu: goto label_38309c;
        case 0x3830a0u: goto label_3830a0;
        case 0x3830a4u: goto label_3830a4;
        case 0x3830a8u: goto label_3830a8;
        case 0x3830acu: goto label_3830ac;
        case 0x3830b0u: goto label_3830b0;
        case 0x3830b4u: goto label_3830b4;
        case 0x3830b8u: goto label_3830b8;
        case 0x3830bcu: goto label_3830bc;
        case 0x3830c0u: goto label_3830c0;
        case 0x3830c4u: goto label_3830c4;
        case 0x3830c8u: goto label_3830c8;
        case 0x3830ccu: goto label_3830cc;
        case 0x3830d0u: goto label_3830d0;
        case 0x3830d4u: goto label_3830d4;
        case 0x3830d8u: goto label_3830d8;
        case 0x3830dcu: goto label_3830dc;
        case 0x3830e0u: goto label_3830e0;
        case 0x3830e4u: goto label_3830e4;
        case 0x3830e8u: goto label_3830e8;
        case 0x3830ecu: goto label_3830ec;
        case 0x3830f0u: goto label_3830f0;
        case 0x3830f4u: goto label_3830f4;
        case 0x3830f8u: goto label_3830f8;
        case 0x3830fcu: goto label_3830fc;
        case 0x383100u: goto label_383100;
        case 0x383104u: goto label_383104;
        case 0x383108u: goto label_383108;
        case 0x38310cu: goto label_38310c;
        case 0x383110u: goto label_383110;
        case 0x383114u: goto label_383114;
        case 0x383118u: goto label_383118;
        case 0x38311cu: goto label_38311c;
        case 0x383120u: goto label_383120;
        case 0x383124u: goto label_383124;
        case 0x383128u: goto label_383128;
        case 0x38312cu: goto label_38312c;
        case 0x383130u: goto label_383130;
        case 0x383134u: goto label_383134;
        case 0x383138u: goto label_383138;
        case 0x38313cu: goto label_38313c;
        case 0x383140u: goto label_383140;
        case 0x383144u: goto label_383144;
        case 0x383148u: goto label_383148;
        case 0x38314cu: goto label_38314c;
        case 0x383150u: goto label_383150;
        case 0x383154u: goto label_383154;
        case 0x383158u: goto label_383158;
        case 0x38315cu: goto label_38315c;
        case 0x383160u: goto label_383160;
        case 0x383164u: goto label_383164;
        case 0x383168u: goto label_383168;
        case 0x38316cu: goto label_38316c;
        case 0x383170u: goto label_383170;
        case 0x383174u: goto label_383174;
        case 0x383178u: goto label_383178;
        case 0x38317cu: goto label_38317c;
        case 0x383180u: goto label_383180;
        case 0x383184u: goto label_383184;
        case 0x383188u: goto label_383188;
        case 0x38318cu: goto label_38318c;
        case 0x383190u: goto label_383190;
        case 0x383194u: goto label_383194;
        case 0x383198u: goto label_383198;
        case 0x38319cu: goto label_38319c;
        default: break;
    }

    ctx->pc = 0x382fd0u;

label_382fd0:
    // 0x382fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x382fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_382fd4:
    // 0x382fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x382fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_382fd8:
    // 0x382fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x382fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_382fdc:
    // 0x382fdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x382fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_382fe0:
    // 0x382fe0: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
label_382fe4:
    if (ctx->pc == 0x382FE4u) {
        ctx->pc = 0x382FE4u;
            // 0x382fe4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x382FE8u;
        goto label_382fe8;
    }
    ctx->pc = 0x382FE0u;
    {
        const bool branch_taken_0x382fe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x382fe0) {
            ctx->pc = 0x382FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x382FE0u;
            // 0x382fe4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x383028u;
            goto label_383028;
        }
    }
    ctx->pc = 0x382FE8u;
label_382fe8:
    // 0x382fe8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x382fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_382fec:
    // 0x382fec: 0x24427850  addiu       $v0, $v0, 0x7850
    ctx->pc = 0x382fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30800));
label_382ff0:
    // 0x382ff0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_382ff4:
    if (ctx->pc == 0x382FF4u) {
        ctx->pc = 0x382FF4u;
            // 0x382ff4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x382FF8u;
        goto label_382ff8;
    }
    ctx->pc = 0x382FF0u;
    {
        const bool branch_taken_0x382ff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x382FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x382FF0u;
            // 0x382ff4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382ff0) {
            ctx->pc = 0x38300Cu;
            goto label_38300c;
        }
    }
    ctx->pc = 0x382FF8u;
label_382ff8:
    // 0x382ff8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x382ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_382ffc:
    // 0x382ffc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x382ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_383000:
    // 0x383000: 0x24637860  addiu       $v1, $v1, 0x7860
    ctx->pc = 0x383000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30816));
label_383004:
    // 0x383004: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x383004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_383008:
    // 0x383008: 0xac403e60  sw          $zero, 0x3E60($v0)
    ctx->pc = 0x383008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15968), GPR_U32(ctx, 0));
label_38300c:
    // 0x38300c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x38300cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_383010:
    // 0x383010: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x383010u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_383014:
    // 0x383014: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_383018:
    if (ctx->pc == 0x383018u) {
        ctx->pc = 0x38301Cu;
        goto label_38301c;
    }
    ctx->pc = 0x383014u;
    {
        const bool branch_taken_0x383014 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x383014) {
            ctx->pc = 0x383024u;
            goto label_383024;
        }
    }
    ctx->pc = 0x38301Cu;
label_38301c:
    // 0x38301c: 0xc0400a8  jal         func_1002A0
label_383020:
    if (ctx->pc == 0x383020u) {
        ctx->pc = 0x383020u;
            // 0x383020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383024u;
        goto label_383024;
    }
    ctx->pc = 0x38301Cu;
    SET_GPR_U32(ctx, 31, 0x383024u);
    ctx->pc = 0x383020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38301Cu;
            // 0x383020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383024u; }
        if (ctx->pc != 0x383024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383024u; }
        if (ctx->pc != 0x383024u) { return; }
    }
    ctx->pc = 0x383024u;
label_383024:
    // 0x383024: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x383024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_383028:
    // 0x383028: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x383028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38302c:
    // 0x38302c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38302cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_383030:
    // 0x383030: 0x3e00008  jr          $ra
label_383034:
    if (ctx->pc == 0x383034u) {
        ctx->pc = 0x383034u;
            // 0x383034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x383038u;
        goto label_383038;
    }
    ctx->pc = 0x383030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383030u;
            // 0x383034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x383038u;
label_383038:
    // 0x383038: 0x0  nop
    ctx->pc = 0x383038u;
    // NOP
label_38303c:
    // 0x38303c: 0x0  nop
    ctx->pc = 0x38303cu;
    // NOP
label_383040:
    // 0x383040: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x383040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_383044:
    // 0x383044: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x383044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_383048:
    // 0x383048: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x383048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_38304c:
    // 0x38304c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38304cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_383050:
    // 0x383050: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x383050u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_383054:
    // 0x383054: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x383054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_383058:
    // 0x383058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x383058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38305c:
    // 0x38305c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38305cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_383060:
    // 0x383060: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x383060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_383064:
    // 0x383064: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_383068:
    if (ctx->pc == 0x383068u) {
        ctx->pc = 0x383068u;
            // 0x383068: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38306Cu;
        goto label_38306c;
    }
    ctx->pc = 0x383064u;
    {
        const bool branch_taken_0x383064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x383068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383064u;
            // 0x383068: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383064) {
            ctx->pc = 0x3830A8u;
            goto label_3830a8;
        }
    }
    ctx->pc = 0x38306Cu;
label_38306c:
    // 0x38306c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38306cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383070:
    // 0x383070: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x383070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383074:
    // 0x383074: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x383074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383078:
    // 0x383078: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x383078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_38307c:
    // 0x38307c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x38307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_383080:
    // 0x383080: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x383080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_383084:
    // 0x383084: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x383084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_383088:
    // 0x383088: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x383088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_38308c:
    // 0x38308c: 0x320f809  jalr        $t9
label_383090:
    if (ctx->pc == 0x383090u) {
        ctx->pc = 0x383094u;
        goto label_383094;
    }
    ctx->pc = 0x38308Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x383094u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x383094u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x383094u; }
            if (ctx->pc != 0x383094u) { return; }
        }
        }
    }
    ctx->pc = 0x383094u;
label_383094:
    // 0x383094: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x383094u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_383098:
    // 0x383098: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x383098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_38309c:
    // 0x38309c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x38309cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3830a0:
    // 0x3830a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3830a4:
    if (ctx->pc == 0x3830A4u) {
        ctx->pc = 0x3830A4u;
            // 0x3830a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3830A8u;
        goto label_3830a8;
    }
    ctx->pc = 0x3830A0u;
    {
        const bool branch_taken_0x3830a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3830A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3830A0u;
            // 0x3830a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3830a0) {
            ctx->pc = 0x383078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_383078;
        }
    }
    ctx->pc = 0x3830A8u;
label_3830a8:
    // 0x3830a8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3830a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3830ac:
    // 0x3830ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3830acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3830b0:
    // 0x3830b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3830b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3830b4:
    // 0x3830b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3830b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3830b8:
    // 0x3830b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3830b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3830bc:
    // 0x3830bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3830bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3830c0:
    // 0x3830c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3830c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3830c4:
    // 0x3830c4: 0x3e00008  jr          $ra
label_3830c8:
    if (ctx->pc == 0x3830C8u) {
        ctx->pc = 0x3830C8u;
            // 0x3830c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3830CCu;
        goto label_3830cc;
    }
    ctx->pc = 0x3830C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3830C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3830C4u;
            // 0x3830c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3830CCu;
label_3830cc:
    // 0x3830cc: 0x0  nop
    ctx->pc = 0x3830ccu;
    // NOP
label_3830d0:
    // 0x3830d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3830d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3830d4:
    // 0x3830d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3830d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3830d8:
    // 0x3830d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3830d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3830dc:
    // 0x3830dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3830dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3830e0:
    // 0x3830e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3830e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3830e4:
    // 0x3830e4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_3830e8:
    if (ctx->pc == 0x3830E8u) {
        ctx->pc = 0x3830E8u;
            // 0x3830e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3830ECu;
        goto label_3830ec;
    }
    ctx->pc = 0x3830E4u;
    {
        const bool branch_taken_0x3830e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3830E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3830E4u;
            // 0x3830e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3830e4) {
            ctx->pc = 0x383184u;
            goto label_383184;
        }
    }
    ctx->pc = 0x3830ECu;
label_3830ec:
    // 0x3830ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3830ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3830f0:
    // 0x3830f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3830f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3830f4:
    // 0x3830f4: 0x24637870  addiu       $v1, $v1, 0x7870
    ctx->pc = 0x3830f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30832));
label_3830f8:
    // 0x3830f8: 0x244278a8  addiu       $v0, $v0, 0x78A8
    ctx->pc = 0x3830f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30888));
label_3830fc:
    // 0x3830fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3830fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_383100:
    // 0x383100: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_383104:
    if (ctx->pc == 0x383104u) {
        ctx->pc = 0x383104u;
            // 0x383104: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x383108u;
        goto label_383108;
    }
    ctx->pc = 0x383100u;
    {
        const bool branch_taken_0x383100 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x383104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383100u;
            // 0x383104: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383100) {
            ctx->pc = 0x38316Cu;
            goto label_38316c;
        }
    }
    ctx->pc = 0x383108u;
label_383108:
    // 0x383108: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x383108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_38310c:
    // 0x38310c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38310cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_383110:
    // 0x383110: 0x246378f0  addiu       $v1, $v1, 0x78F0
    ctx->pc = 0x383110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30960));
label_383114:
    // 0x383114: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x383114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_383118:
    // 0x383118: 0x24427928  addiu       $v0, $v0, 0x7928
    ctx->pc = 0x383118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31016));
label_38311c:
    // 0x38311c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38311cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_383120:
    // 0x383120: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x383120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_383124:
    // 0x383124: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x383124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_383128:
    // 0x383128: 0xc0407c0  jal         func_101F00
label_38312c:
    if (ctx->pc == 0x38312Cu) {
        ctx->pc = 0x38312Cu;
            // 0x38312c: 0x24a53270  addiu       $a1, $a1, 0x3270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12912));
        ctx->pc = 0x383130u;
        goto label_383130;
    }
    ctx->pc = 0x383128u;
    SET_GPR_U32(ctx, 31, 0x383130u);
    ctx->pc = 0x38312Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383128u;
            // 0x38312c: 0x24a53270  addiu       $a1, $a1, 0x3270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383130u; }
        if (ctx->pc != 0x383130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383130u; }
        if (ctx->pc != 0x383130u) { return; }
    }
    ctx->pc = 0x383130u;
label_383130:
    // 0x383130: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x383130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_383134:
    // 0x383134: 0xc0a8cf8  jal         func_2A33E0
label_383138:
    if (ctx->pc == 0x383138u) {
        ctx->pc = 0x383138u;
            // 0x383138: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x38313Cu;
        goto label_38313c;
    }
    ctx->pc = 0x383134u;
    SET_GPR_U32(ctx, 31, 0x38313Cu);
    ctx->pc = 0x383138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383134u;
            // 0x383138: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38313Cu; }
        if (ctx->pc != 0x38313Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38313Cu; }
        if (ctx->pc != 0x38313Cu) { return; }
    }
    ctx->pc = 0x38313Cu;
label_38313c:
    // 0x38313c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x38313cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_383140:
    // 0x383140: 0xc0e0c80  jal         func_383200
label_383144:
    if (ctx->pc == 0x383144u) {
        ctx->pc = 0x383144u;
            // 0x383144: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x383148u;
        goto label_383148;
    }
    ctx->pc = 0x383140u;
    SET_GPR_U32(ctx, 31, 0x383148u);
    ctx->pc = 0x383144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383140u;
            // 0x383144: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x383200u;
    if (runtime->hasFunction(0x383200u)) {
        auto targetFn = runtime->lookupFunction(0x383200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383148u; }
        if (ctx->pc != 0x383148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00383200_0x383200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383148u; }
        if (ctx->pc != 0x383148u) { return; }
    }
    ctx->pc = 0x383148u;
label_383148:
    // 0x383148: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x383148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_38314c:
    // 0x38314c: 0xc0e0c80  jal         func_383200
label_383150:
    if (ctx->pc == 0x383150u) {
        ctx->pc = 0x383150u;
            // 0x383150: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x383154u;
        goto label_383154;
    }
    ctx->pc = 0x38314Cu;
    SET_GPR_U32(ctx, 31, 0x383154u);
    ctx->pc = 0x383150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38314Cu;
            // 0x383150: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x383200u;
    if (runtime->hasFunction(0x383200u)) {
        auto targetFn = runtime->lookupFunction(0x383200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383154u; }
        if (ctx->pc != 0x383154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00383200_0x383200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383154u; }
        if (ctx->pc != 0x383154u) { return; }
    }
    ctx->pc = 0x383154u;
label_383154:
    // 0x383154: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x383154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_383158:
    // 0x383158: 0xc0e0c68  jal         func_3831A0
label_38315c:
    if (ctx->pc == 0x38315Cu) {
        ctx->pc = 0x38315Cu;
            // 0x38315c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383160u;
        goto label_383160;
    }
    ctx->pc = 0x383158u;
    SET_GPR_U32(ctx, 31, 0x383160u);
    ctx->pc = 0x38315Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383158u;
            // 0x38315c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3831A0u;
    if (runtime->hasFunction(0x3831A0u)) {
        auto targetFn = runtime->lookupFunction(0x3831A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383160u; }
        if (ctx->pc != 0x383160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003831A0_0x3831a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383160u; }
        if (ctx->pc != 0x383160u) { return; }
    }
    ctx->pc = 0x383160u;
label_383160:
    // 0x383160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x383160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_383164:
    // 0x383164: 0xc0ae1c0  jal         func_2B8700
label_383168:
    if (ctx->pc == 0x383168u) {
        ctx->pc = 0x383168u;
            // 0x383168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38316Cu;
        goto label_38316c;
    }
    ctx->pc = 0x383164u;
    SET_GPR_U32(ctx, 31, 0x38316Cu);
    ctx->pc = 0x383168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x383164u;
            // 0x383168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38316Cu; }
        if (ctx->pc != 0x38316Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38316Cu; }
        if (ctx->pc != 0x38316Cu) { return; }
    }
    ctx->pc = 0x38316Cu;
label_38316c:
    // 0x38316c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x38316cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_383170:
    // 0x383170: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x383170u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_383174:
    // 0x383174: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_383178:
    if (ctx->pc == 0x383178u) {
        ctx->pc = 0x383178u;
            // 0x383178: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38317Cu;
        goto label_38317c;
    }
    ctx->pc = 0x383174u;
    {
        const bool branch_taken_0x383174 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x383174) {
            ctx->pc = 0x383178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x383174u;
            // 0x383178: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x383188u;
            goto label_383188;
        }
    }
    ctx->pc = 0x38317Cu;
label_38317c:
    // 0x38317c: 0xc0400a8  jal         func_1002A0
label_383180:
    if (ctx->pc == 0x383180u) {
        ctx->pc = 0x383180u;
            // 0x383180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x383184u;
        goto label_383184;
    }
    ctx->pc = 0x38317Cu;
    SET_GPR_U32(ctx, 31, 0x383184u);
    ctx->pc = 0x383180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38317Cu;
            // 0x383180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383184u; }
        if (ctx->pc != 0x383184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383184u; }
        if (ctx->pc != 0x383184u) { return; }
    }
    ctx->pc = 0x383184u;
label_383184:
    // 0x383184: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x383184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_383188:
    // 0x383188: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x383188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38318c:
    // 0x38318c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38318cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_383190:
    // 0x383190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x383190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_383194:
    // 0x383194: 0x3e00008  jr          $ra
label_383198:
    if (ctx->pc == 0x383198u) {
        ctx->pc = 0x383198u;
            // 0x383198: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x38319Cu;
        goto label_38319c;
    }
    ctx->pc = 0x383194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x383194u;
            // 0x383198: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38319Cu;
label_38319c:
    // 0x38319c: 0x0  nop
    ctx->pc = 0x38319cu;
    // NOP
}
