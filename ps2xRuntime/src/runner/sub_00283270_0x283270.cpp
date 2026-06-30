#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00283270
// Address: 0x283270 - 0x283ce0
void sub_00283270_0x283270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283270_0x283270");
#endif

    switch (ctx->pc) {
        case 0x2832f0u: goto label_2832f0;
        case 0x283330u: goto label_283330;
        case 0x28339cu: goto label_28339c;
        case 0x283440u: goto label_283440;
        case 0x28347cu: goto label_28347c;
        case 0x283548u: goto label_283548;
        case 0x2835a0u: goto label_2835a0;
        case 0x2835ecu: goto label_2835ec;
        case 0x283648u: goto label_283648;
        case 0x2836d0u: goto label_2836d0;
        case 0x283718u: goto label_283718;
        case 0x283798u: goto label_283798;
        case 0x2837d8u: goto label_2837d8;
        case 0x283820u: goto label_283820;
        case 0x283888u: goto label_283888;
        case 0x283898u: goto label_283898;
        case 0x2838d4u: goto label_2838d4;
        case 0x283a20u: goto label_283a20;
        case 0x283b08u: goto label_283b08;
        case 0x283bb8u: goto label_283bb8;
        case 0x283c70u: goto label_283c70;
        default: break;
    }

    ctx->pc = 0x283270u;

    // 0x283270: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x283270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x283274: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x283274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x283278: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x283278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x28327c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x28327cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x283280: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x283280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x283284: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x283284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x283288: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x283288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x28328c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x28328cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x283290: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x283290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x283294: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x283294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x283298: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x283298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28329c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x28329cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2832a0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2832a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2832a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2832a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2832a8: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x2832a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x2832ac: 0xafa6011c  sw          $a2, 0x11C($sp)
    ctx->pc = 0x2832acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 6));
    // 0x2832b0: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x2832b0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2832b4: 0xafa80114  sw          $t0, 0x114($sp)
    ctx->pc = 0x2832b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 8));
    // 0x2832b8: 0xafa70118  sw          $a3, 0x118($sp)
    ctx->pc = 0x2832b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 7));
    // 0x2832bc: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x2832bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2832c0: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x2832c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x2832c4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2832c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2832c8: 0x14600275  bnez        $v1, . + 4 + (0x275 << 2)
    ctx->pc = 0x2832C8u;
    {
        const bool branch_taken_0x2832c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2832CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2832C8u;
            // 0x2832cc: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832c8) {
            ctx->pc = 0x283CA0u;
            goto label_283ca0;
        }
    }
    ctx->pc = 0x2832D0u;
    // 0x2832d0: 0x8ed50004  lw          $s5, 0x4($s6)
    ctx->pc = 0x2832d0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2832d4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2832d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2832d8: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x2832d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x2832dc: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x2832dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2832e0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2832e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2832e4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2832E4u;
    {
        const bool branch_taken_0x2832e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2832E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2832E4u;
            // 0x2832e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2832e4) {
            ctx->pc = 0x283310u;
            goto label_283310;
        }
    }
    ctx->pc = 0x2832ECu;
    // 0x2832ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2832ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2832f0:
    // 0x2832f0: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x2832f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2832f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2832f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2832f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2832f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2832fc: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x2832fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x283300: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x283300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x283304: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x283304u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x283308: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x283308u;
    {
        const bool branch_taken_0x283308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28330Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283308u;
            // 0x28330c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283308) {
            ctx->pc = 0x2832F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2832f0;
        }
    }
    ctx->pc = 0x283310u;
label_283310:
    // 0x283310: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x283310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x283314: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x283314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x283318: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x283318u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28331c: 0x102000f8  beqz        $at, . + 4 + (0xF8 << 2)
    ctx->pc = 0x28331Cu;
    {
        const bool branch_taken_0x28331c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28331c) {
            ctx->pc = 0x283700u;
            goto label_283700;
        }
    }
    ctx->pc = 0x283324u;
    // 0x283324: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x283324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x283328: 0x27b10184  addiu       $s1, $sp, 0x184
    ctx->pc = 0x283328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x28332c: 0x27b40188  addiu       $s4, $sp, 0x188
    ctx->pc = 0x28332cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_283330:
    // 0x283330: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x283330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x283334: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x283334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x283338: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x283338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28333c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x28333cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x283340: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x283340u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x283344: 0x106400e2  beq         $v1, $a0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x283344u;
    {
        const bool branch_taken_0x283344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x283344) {
            ctx->pc = 0x2836D0u;
            goto label_2836d0;
        }
    }
    ctx->pc = 0x28334Cu;
    // 0x28334c: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x28334cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x283350: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x283350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x283354: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x283354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x283358: 0xa4a40006  sh          $a0, 0x6($a1)
    ctx->pc = 0x283358u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x28335c: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x28335cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x283360: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x283360u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x283364: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x283364u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x283368: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x283368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x28336c: 0x947e0000  lhu         $fp, 0x0($v1)
    ctx->pc = 0x28336cu;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x283370: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x283370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x283374: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x283374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x283378: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x283378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28337c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28337cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283380: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x283380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x283384: 0x1e1900  sll         $v1, $fp, 4
    ctx->pc = 0x283384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x283388: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x283388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28338c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x28338cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x283390: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x283390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283394: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x283394u;
    SET_GPR_U32(ctx, 31, 0x28339Cu);
    ctx->pc = 0x283398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283394u;
            // 0x283398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28339Cu; }
        if (ctx->pc != 0x28339Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28339Cu; }
        if (ctx->pc != 0x28339Cu) { return; }
    }
    ctx->pc = 0x28339Cu;
label_28339c:
    // 0x28339c: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x28339cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x2833a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2833a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2833a4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2833a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2833a8: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x2833a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2833ac: 0x8fb700e0  lw          $s7, 0xE0($sp)
    ctx->pc = 0x2833acu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2833b0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2833b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2833b4: 0x3c033586  lui         $v1, 0x3586
    ctx->pc = 0x2833b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13702 << 16));
    // 0x2833b8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2833b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2833bc: 0x346437bd  ori         $a0, $v1, 0x37BD
    ctx->pc = 0x2833bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14269);
    // 0x2833c0: 0x27a30164  addiu       $v1, $sp, 0x164
    ctx->pc = 0x2833c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    // 0x2833c4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2833c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2833c8: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x2833c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2833cc: 0x4484b000  mtc1        $a0, $f22
    ctx->pc = 0x2833ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2833d0: 0x27a30168  addiu       $v1, $sp, 0x168
    ctx->pc = 0x2833d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x2833d4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2833d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2833d8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2833d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2833dc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2833dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2833e0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2833e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2833e4: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x2833e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2833e8: 0x13c3008f  beq         $fp, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x2833E8u;
    {
        const bool branch_taken_0x2833e8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 3));
        ctx->pc = 0x2833ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2833E8u;
            // 0x2833ec: 0x4602155c  madd.s      $f21, $f2, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833e8) {
            ctx->pc = 0x283628u;
            goto label_283628;
        }
    }
    ctx->pc = 0x2833F0u;
    // 0x2833f0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2833f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2833f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2833f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2833f8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2833f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2833fc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2833fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283400: 0x45000089  bc1f        . + 4 + (0x89 << 2)
    ctx->pc = 0x283400u;
    {
        const bool branch_taken_0x283400 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x283400) {
            ctx->pc = 0x283628u;
            goto label_283628;
        }
    }
    ctx->pc = 0x283408u;
    // 0x283408: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x283408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28340c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x28340cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283410: 0x45000085  bc1f        . + 4 + (0x85 << 2)
    ctx->pc = 0x283410u;
    {
        const bool branch_taken_0x283410 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x283410) {
            ctx->pc = 0x283628u;
            goto label_283628;
        }
    }
    ctx->pc = 0x283418u;
    // 0x283418: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x283418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x28341c: 0x8fb20120  lw          $s2, 0x120($sp)
    ctx->pc = 0x28341cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x283420: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x283420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x283424: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x283424u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283428: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x283428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x28342c: 0x1020007e  beqz        $at, . + 4 + (0x7E << 2)
    ctx->pc = 0x28342Cu;
    {
        const bool branch_taken_0x28342c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28342c) {
            ctx->pc = 0x283628u;
            goto label_283628;
        }
    }
    ctx->pc = 0x283434u;
    // 0x283434: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x283434u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x283438: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x283438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28343c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x28343cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_283440:
    // 0x283440: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x283440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x283444: 0x10720072  beq         $v1, $s2, . + 4 + (0x72 << 2)
    ctx->pc = 0x283444u;
    {
        const bool branch_taken_0x283444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x283444) {
            ctx->pc = 0x283610u;
            goto label_283610;
        }
    }
    ctx->pc = 0x28344Cu;
    // 0x28344c: 0x13d20070  beq         $fp, $s2, . + 4 + (0x70 << 2)
    ctx->pc = 0x28344Cu;
    {
        const bool branch_taken_0x28344c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 18));
        if (branch_taken_0x28344c) {
            ctx->pc = 0x283610u;
            goto label_283610;
        }
    }
    ctx->pc = 0x283454u;
    // 0x283454: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x283454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283458: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x283458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28345c: 0x0  nop
    ctx->pc = 0x28345cu;
    // NOP
    // 0x283460: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x283460u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283464: 0x4500006a  bc1f        . + 4 + (0x6A << 2)
    ctx->pc = 0x283464u;
    {
        const bool branch_taken_0x283464 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x283464) {
            ctx->pc = 0x283610u;
            goto label_283610;
        }
    }
    ctx->pc = 0x28346Cu;
    // 0x28346c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x28346cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x283470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283474: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x283474u;
    SET_GPR_U32(ctx, 31, 0x28347Cu);
    ctx->pc = 0x283478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283474u;
            // 0x283478: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28347Cu; }
        if (ctx->pc != 0x28347Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28347Cu; }
        if (ctx->pc != 0x28347Cu) { return; }
    }
    ctx->pc = 0x28347Cu;
label_28347c:
    // 0x28347c: 0x27a30164  addiu       $v1, $sp, 0x164
    ctx->pc = 0x28347cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    // 0x283480: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x283480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x283484: 0xc7a50160  lwc1        $f5, 0x160($sp)
    ctx->pc = 0x283484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x283488: 0xc7a40150  lwc1        $f4, 0x150($sp)
    ctx->pc = 0x283488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28348c: 0xc7a60150  lwc1        $f6, 0x150($sp)
    ctx->pc = 0x28348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x283490: 0x27a30154  addiu       $v1, $sp, 0x154
    ctx->pc = 0x283490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x283494: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x283494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283498: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x283498u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x28349c: 0x27a30168  addiu       $v1, $sp, 0x168
    ctx->pc = 0x28349cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x2834a0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2834a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2834a4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2834a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2834a8: 0x27a30158  addiu       $v1, $sp, 0x158
    ctx->pc = 0x2834a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x2834ac: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2834acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2834b0: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x2834b0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2834b4: 0xc7a50160  lwc1        $f5, 0x160($sp)
    ctx->pc = 0x2834b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2834b8: 0x27a30154  addiu       $v1, $sp, 0x154
    ctx->pc = 0x2834b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x2834bc: 0xc4670000  lwc1        $f7, 0x0($v1)
    ctx->pc = 0x2834bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2834c0: 0x4601151c  madd.s      $f20, $f2, $f1
    ctx->pc = 0x2834c0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x2834c4: 0x27a30168  addiu       $v1, $sp, 0x168
    ctx->pc = 0x2834c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x2834c8: 0xc4690000  lwc1        $f9, 0x0($v1)
    ctx->pc = 0x2834c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2834cc: 0x27a30158  addiu       $v1, $sp, 0x158
    ctx->pc = 0x2834ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x2834d0: 0xc46a0000  lwc1        $f10, 0x0($v1)
    ctx->pc = 0x2834d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2834d4: 0x27a30164  addiu       $v1, $sp, 0x164
    ctx->pc = 0x2834d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    // 0x2834d8: 0xc4680000  lwc1        $f8, 0x0($v1)
    ctx->pc = 0x2834d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2834dc: 0x460a401a  mula.s      $f8, $f10
    ctx->pc = 0x2834dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x2834e0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2834e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2834e4: 0x4607485d  msub.s      $f1, $f9, $f7
    ctx->pc = 0x2834e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[7]));
    // 0x2834e8: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x2834e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2834ec: 0x4606481a  mula.s      $f9, $f6
    ctx->pc = 0x2834ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x2834f0: 0x460a285d  msub.s      $f1, $f5, $f10
    ctx->pc = 0x2834f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[10]));
    // 0x2834f4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2834f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2834f8: 0x4607281a  mula.s      $f5, $f7
    ctx->pc = 0x2834f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x2834fc: 0x460640dd  msub.s      $f3, $f8, $f6
    ctx->pc = 0x2834fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[6]));
    // 0x283500: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x283500u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x283504: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x283504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283508: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x283508u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x28350c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28350cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283510: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x283510u;
    {
        const bool branch_taken_0x283510 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x283510) {
            ctx->pc = 0x283610u;
            goto label_283610;
        }
    }
    ctx->pc = 0x283518u;
    // 0x283518: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x283518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28351c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x28351Cu;
    {
        const bool branch_taken_0x28351c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28351c) {
            ctx->pc = 0x283570u;
            goto label_283570;
        }
    }
    ctx->pc = 0x283524u;
    // 0x283524: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x283524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x283528: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x283528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28352c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x28352cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x283530: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x283530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x283534: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x283534u;
    {
        const bool branch_taken_0x283534 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x283534) {
            ctx->pc = 0x283548u;
            goto label_283548;
        }
    }
    ctx->pc = 0x28353Cu;
    // 0x28353c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x28353cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x283540: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x283540u;
    SET_GPR_U32(ctx, 31, 0x283548u);
    ctx->pc = 0x283544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283540u;
            // 0x283544: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283548u; }
        if (ctx->pc != 0x283548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283548u; }
        if (ctx->pc != 0x283548u) { return; }
    }
    ctx->pc = 0x283548u;
label_283548:
    // 0x283548: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x283548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28354c: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x28354cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    // 0x283550: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x283550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x283554: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x283554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x283558: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x283558u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28355c: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x28355cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x283560: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x283560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x283564: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x283564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
    // 0x283568: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x283568u;
    {
        const bool branch_taken_0x283568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28356Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283568u;
            // 0x28356c: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283568) {
            ctx->pc = 0x283610u;
            goto label_283610;
        }
    }
    ctx->pc = 0x283570u;
label_283570:
    // 0x283570: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x283570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283574: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x283574u;
    {
        const bool branch_taken_0x283574 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x283574) {
            ctx->pc = 0x2835C8u;
            goto label_2835c8;
        }
    }
    ctx->pc = 0x28357Cu;
    // 0x28357c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x28357cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x283580: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x283580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x283584: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x283584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x283588: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x283588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x28358c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28358Cu;
    {
        const bool branch_taken_0x28358c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x28358c) {
            ctx->pc = 0x2835A0u;
            goto label_2835a0;
        }
    }
    ctx->pc = 0x283594u;
    // 0x283594: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x283594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x283598: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x283598u;
    SET_GPR_U32(ctx, 31, 0x2835A0u);
    ctx->pc = 0x28359Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283598u;
            // 0x28359c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2835A0u; }
        if (ctx->pc != 0x2835A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2835A0u; }
        if (ctx->pc != 0x2835A0u) { return; }
    }
    ctx->pc = 0x2835A0u;
label_2835a0:
    // 0x2835a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2835a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2835a4: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2835a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x2835a8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2835a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2835ac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2835acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2835b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2835b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2835b4: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x2835b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2835b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2835b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2835bc: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x2835bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x2835c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2835C0u;
    {
        const bool branch_taken_0x2835c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2835C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2835C0u;
            // 0x2835c4: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835c0) {
            ctx->pc = 0x283610u;
            goto label_283610;
        }
    }
    ctx->pc = 0x2835C8u;
label_2835c8:
    // 0x2835c8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2835c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2835cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2835ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2835d0: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2835d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x2835d4: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2835d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x2835d8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2835D8u;
    {
        const bool branch_taken_0x2835d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2835d8) {
            ctx->pc = 0x2835F0u;
            goto label_2835f0;
        }
    }
    ctx->pc = 0x2835E0u;
    // 0x2835e0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2835e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2835e4: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x2835E4u;
    SET_GPR_U32(ctx, 31, 0x2835ECu);
    ctx->pc = 0x2835E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2835E4u;
            // 0x2835e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2835ECu; }
        if (ctx->pc != 0x2835ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2835ECu; }
        if (ctx->pc != 0x2835ECu) { return; }
    }
    ctx->pc = 0x2835ECu;
label_2835ec:
    // 0x2835ec: 0x0  nop
    ctx->pc = 0x2835ecu;
    // NOP
label_2835f0:
    // 0x2835f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2835f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2835f4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2835f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2835f8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2835f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2835fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2835fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x283600: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x283600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x283604: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x283604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x283608: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x283608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x28360c: 0x0  nop
    ctx->pc = 0x28360cu;
    // NOP
label_283610:
    // 0x283610: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x283610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x283614: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x283614u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x283618: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x283618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28361c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x28361cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x283620: 0x1460ff87  bnez        $v1, . + 4 + (-0x79 << 2)
    ctx->pc = 0x283620u;
    {
        const bool branch_taken_0x283620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283620u;
            // 0x283624: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283620) {
            ctx->pc = 0x283440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283440;
        }
    }
    ctx->pc = 0x283628u;
label_283628:
    // 0x283628: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x283628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28362c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28362cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x283630: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x283630u;
    {
        const bool branch_taken_0x283630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x283634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283630u;
            // 0x283634: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283630) {
            ctx->pc = 0x283698u;
            goto label_283698;
        }
    }
    ctx->pc = 0x283638u;
    // 0x283638: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x283638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28363c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x28363cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x283640: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x283640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283644: 0x0  nop
    ctx->pc = 0x283644u;
    // NOP
label_283648:
    // 0x283648: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x283648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x28364c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x28364cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x283650: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x283650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x283654: 0x12e3000a  beq         $s7, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x283654u;
    {
        const bool branch_taken_0x283654 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        if (branch_taken_0x283654) {
            ctx->pc = 0x283680u;
            goto label_283680;
        }
    }
    ctx->pc = 0x28365Cu;
    // 0x28365c: 0x12630008  beq         $s3, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28365Cu;
    {
        const bool branch_taken_0x28365c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x28365c) {
            ctx->pc = 0x283680u;
            goto label_283680;
        }
    }
    ctx->pc = 0x283664u;
    // 0x283664: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x283664u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x283668: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x283668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28366c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x28366cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x283670: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x283670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x283674: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x283674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x283678: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x283678u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x28367c: 0x0  nop
    ctx->pc = 0x28367cu;
    // NOP
label_283680:
    // 0x283680: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x283680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x283684: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x283684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x283688: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x283688u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28368c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x28368Cu;
    {
        const bool branch_taken_0x28368c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28368Cu;
            // 0x283690: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28368c) {
            ctx->pc = 0x283648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283648;
        }
    }
    ctx->pc = 0x283694u;
    // 0x283694: 0x0  nop
    ctx->pc = 0x283694u;
    // NOP
label_283698:
    // 0x283698: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x283698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28369c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28369cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2836a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2836a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2836a4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2836A4u;
    {
        const bool branch_taken_0x2836a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2836a4) {
            ctx->pc = 0x2836D0u;
            goto label_2836d0;
        }
    }
    ctx->pc = 0x2836ACu;
    // 0x2836ac: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2836acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2836b0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2836b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x2836b4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2836b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2836b8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2836b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2836bc: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x2836bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2836c0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2836c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2836c4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2836c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2836c8: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2836C8u;
    SET_GPR_U32(ctx, 31, 0x2836D0u);
    ctx->pc = 0x2836CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2836C8u;
            // 0x2836cc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2836D0u; }
        if (ctx->pc != 0x2836D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2836D0u; }
        if (ctx->pc != 0x2836D0u) { return; }
    }
    ctx->pc = 0x2836D0u;
label_2836d0:
    // 0x2836d0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2836d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2836d4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2836d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2836d8: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2836d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x2836dc: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2836dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2836e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2836e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2836e4: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x2836e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x2836e8: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x2836e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2836ec: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2836ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2836f0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2836f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2836f4: 0x1460ff0e  bnez        $v1, . + 4 + (-0xF2 << 2)
    ctx->pc = 0x2836F4u;
    {
        const bool branch_taken_0x2836f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2836f4) {
            ctx->pc = 0x283330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283330;
        }
    }
    ctx->pc = 0x2836FCu;
    // 0x2836fc: 0x0  nop
    ctx->pc = 0x2836fcu;
    // NOP
label_283700:
    // 0x283700: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x283700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x283704: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x283704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x283708: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x283708u;
    {
        const bool branch_taken_0x283708 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28370Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283708u;
            // 0x28370c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283708) {
            ctx->pc = 0x283738u;
            goto label_283738;
        }
    }
    ctx->pc = 0x283710u;
    // 0x283710: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x283710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283714: 0x0  nop
    ctx->pc = 0x283714u;
    // NOP
label_283718:
    // 0x283718: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x283718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x28371c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28371cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x283720: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x283720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x283724: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x283724u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x283728: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x283728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x28372c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x28372cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x283730: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x283730u;
    {
        const bool branch_taken_0x283730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283730u;
            // 0x283734: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283730) {
            ctx->pc = 0x283718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283718;
        }
    }
    ctx->pc = 0x283738u;
label_283738:
    // 0x283738: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x283738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x28373c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x28373cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x283740: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x283740u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x283744: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x283744u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x283748: 0x14200155  bnez        $at, . + 4 + (0x155 << 2)
    ctx->pc = 0x283748u;
    {
        const bool branch_taken_0x283748 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x283748) {
            ctx->pc = 0x283CA0u;
            goto label_283ca0;
        }
    }
    ctx->pc = 0x283750u;
    // 0x283750: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x283750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x283754: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x283754u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x283758: 0x14200151  bnez        $at, . + 4 + (0x151 << 2)
    ctx->pc = 0x283758u;
    {
        const bool branch_taken_0x283758 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x283758) {
            ctx->pc = 0x283CA0u;
            goto label_283ca0;
        }
    }
    ctx->pc = 0x283760u;
    // 0x283760: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x283760u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283764: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x283764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x283768: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x283768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x28376c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x28376cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x283770: 0x1020014b  beqz        $at, . + 4 + (0x14B << 2)
    ctx->pc = 0x283770u;
    {
        const bool branch_taken_0x283770 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x283770) {
            ctx->pc = 0x283CA0u;
            goto label_283ca0;
        }
    }
    ctx->pc = 0x283778u;
    // 0x283778: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x283778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28377c: 0x27be0174  addiu       $fp, $sp, 0x174
    ctx->pc = 0x28377cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x283780: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x283780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x283784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x283784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x283788: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x283788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x28378c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28378cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x283790: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x283790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x283794: 0x0  nop
    ctx->pc = 0x283794u;
    // NOP
label_283798:
    // 0x283798: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x283798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28379c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28379cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2837a0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2837a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2837a4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2837a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2837a8: 0x45000131  bc1f        . + 4 + (0x131 << 2)
    ctx->pc = 0x2837A8u;
    {
        const bool branch_taken_0x2837a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2837a8) {
            ctx->pc = 0x283C70u;
            goto label_283c70;
        }
    }
    ctx->pc = 0x2837B0u;
    // 0x2837b0: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x2837b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x2837b4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2837b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2837b8: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x2837b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x2837bc: 0x27a30178  addiu       $v1, $sp, 0x178
    ctx->pc = 0x2837bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x2837c0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2837c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2837c4: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x2837c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2837c8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2837c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2837cc: 0x10200086  beqz        $at, . + 4 + (0x86 << 2)
    ctx->pc = 0x2837CCu;
    {
        const bool branch_taken_0x2837cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2837D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2837CCu;
            // 0x2837d0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837cc) {
            ctx->pc = 0x2839E8u;
            goto label_2839e8;
        }
    }
    ctx->pc = 0x2837D4u;
    // 0x2837d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2837d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2837d8:
    // 0x2837d8: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x2837d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2837dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2837dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2837e0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2837e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2837e4: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x2837e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2837e8: 0x10650079  beq         $v1, $a1, . + 4 + (0x79 << 2)
    ctx->pc = 0x2837E8u;
    {
        const bool branch_taken_0x2837e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2837ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2837E8u;
            // 0x2837ec: 0x24860006  addiu       $a2, $a0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837e8) {
            ctx->pc = 0x2839D0u;
            goto label_2839d0;
        }
    }
    ctx->pc = 0x2837F0u;
    // 0x2837f0: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x2837f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2837f4: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x2837f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2837f8: 0x14640075  bne         $v1, $a0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2837F8u;
    {
        const bool branch_taken_0x2837f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2837f8) {
            ctx->pc = 0x2839D0u;
            goto label_2839d0;
        }
    }
    ctx->pc = 0x283800u;
    // 0x283800: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x283800u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x283804: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x283804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x283808: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x283808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28380c: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x28380cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x283810: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x283810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x283814: 0x2a2b821  addu        $s7, $s5, $v0
    ctx->pc = 0x283814u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x283818: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x283818u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28381c: 0x0  nop
    ctx->pc = 0x28381cu;
    // NOP
label_283820:
    // 0x283820: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x283820u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x283824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x283824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283828: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x283828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x28382c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28382cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x283830: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x283830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x283834: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x283834u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x283838: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x283838u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28383c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x28383cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x283840: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x283840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x283844: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x283844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x283848: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x283848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28384c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x28384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x283850: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x283850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283854: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x283854u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x283858: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x283858u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28385c: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x28385cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x283860: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x283860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x283864: 0x458821  addu        $s1, $v0, $a1
    ctx->pc = 0x283864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x283868: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x283868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28386c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28386cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283870: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x283870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x283874: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x283874u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283878: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x283878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28387c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x28387cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x283880: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x283880u;
    SET_GPR_U32(ctx, 31, 0x283888u);
    ctx->pc = 0x283884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283880u;
            // 0x283884: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283888u; }
        if (ctx->pc != 0x283888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283888u; }
        if (ctx->pc != 0x283888u) { return; }
    }
    ctx->pc = 0x283888u;
label_283888:
    // 0x283888: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x283888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28388c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28388cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283890: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x283890u;
    SET_GPR_U32(ctx, 31, 0x283898u);
    ctx->pc = 0x283894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283890u;
            // 0x283894: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283898u; }
        if (ctx->pc != 0x283898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283898u; }
        if (ctx->pc != 0x283898u) { return; }
    }
    ctx->pc = 0x283898u;
label_283898:
    // 0x283898: 0x27a30178  addiu       $v1, $sp, 0x178
    ctx->pc = 0x283898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x28389c: 0x8fd20000  lw          $s2, 0x0($fp)
    ctx->pc = 0x28389cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2838a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2838a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2838a4: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x2838a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2838a8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2838a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x2838ac: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2838acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x2838b0: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x2838b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2838b4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2838B4u;
    {
        const bool branch_taken_0x2838b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2838b4) {
            ctx->pc = 0x2838D8u;
            goto label_2838d8;
        }
    }
    ctx->pc = 0x2838BCu;
    // 0x2838bc: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2838bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2838c0: 0x225082a  slt         $at, $s1, $a1
    ctx->pc = 0x2838c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2838c4: 0x221280a  movz        $a1, $s1, $at
    ctx->pc = 0x2838c4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x2838c8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2838c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2838cc: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x2838CCu;
    SET_GPR_U32(ctx, 31, 0x2838D4u);
    ctx->pc = 0x2838D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2838CCu;
            // 0x2838d0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2838D4u; }
        if (ctx->pc != 0x2838D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2838D4u; }
        if (ctx->pc != 0x2838D4u) { return; }
    }
    ctx->pc = 0x2838D4u;
label_2838d4:
    // 0x2838d4: 0x0  nop
    ctx->pc = 0x2838d4u;
    // NOP
label_2838d8:
    // 0x2838d8: 0xafd10000  sw          $s1, 0x0($fp)
    ctx->pc = 0x2838d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 17));
    // 0x2838dc: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x2838dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x2838e0: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2838e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2838e4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2838e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2838e8: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x2838e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2838ec: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x2838ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2838f0: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x2838f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2838f4: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2838f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2838f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2838f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2838fc: 0x27a30148  addiu       $v1, $sp, 0x148
    ctx->pc = 0x2838fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x283900: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x283900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x283904: 0x27a30144  addiu       $v1, $sp, 0x144
    ctx->pc = 0x283904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x283908: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x283908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28390c: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x28390cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x283910: 0x460301dd  msub.s      $f7, $f0, $f3
    ctx->pc = 0x283910u;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
    // 0x283914: 0x27a30134  addiu       $v1, $sp, 0x134
    ctx->pc = 0x283914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x283918: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x283918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x28391c: 0x4605001a  mula.s      $f0, $f5
    ctx->pc = 0x28391cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x283920: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x283920u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x283924: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x283924u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x283928: 0x4605201d  msub.s      $f0, $f4, $f5
    ctx->pc = 0x283928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x28392c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28392cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x283930: 0xe4870004  swc1        $f7, 0x4($a0)
    ctx->pc = 0x283930u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x283934: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x283934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x283938: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x283938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x28393c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x28393cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283940: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x283940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283944: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x283944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283948: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x283948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28394c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x28394cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x283950: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x283950u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x283954: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x283954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x283958: 0x46060032  c.eq.s      $f0, $f6
    ctx->pc = 0x283958u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28395c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x28395Cu;
    {
        const bool branch_taken_0x28395c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28395c) {
            ctx->pc = 0x283980u;
            goto label_283980;
        }
    }
    ctx->pc = 0x283964u;
    // 0x283964: 0x0  nop
    ctx->pc = 0x283964u;
    // NOP
    // 0x283968: 0x0  nop
    ctx->pc = 0x283968u;
    // NOP
    // 0x28396c: 0x4600a196  rsqrt.s     $f6, $f20, $f0
    ctx->pc = 0x28396cu;
    ctx->f[6] = 1.0f / sqrtf(ctx->f[20]);
    // 0x283970: 0x0  nop
    ctx->pc = 0x283970u;
    // NOP
    // 0x283974: 0x0  nop
    ctx->pc = 0x283974u;
    // NOP
    // 0x283978: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x283978u;
    {
        const bool branch_taken_0x283978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283978) {
            ctx->pc = 0x283980u;
            goto label_283980;
        }
    }
    ctx->pc = 0x283980u;
label_283980:
    // 0x283980: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x283980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283984: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x283984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x283988: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x283988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x28398c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x28398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283990: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x283990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x283994: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x283994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x283998: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x283998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28399c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x28399cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2839a0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2839a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2839a4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2839a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2839a8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2839a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2839ac: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2839acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2839b0: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x2839b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2839b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2839b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2839b8: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2839b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2839bc: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x2839bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2839c0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2839c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2839c4: 0x2a39821  addu        $s3, $s5, $v1
    ctx->pc = 0x2839c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2839c8: 0x1677ff95  bne         $s3, $s7, . + 4 + (-0x6B << 2)
    ctx->pc = 0x2839C8u;
    {
        const bool branch_taken_0x2839c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 23));
        if (branch_taken_0x2839c8) {
            ctx->pc = 0x283820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283820;
        }
    }
    ctx->pc = 0x2839D0u;
label_2839d0:
    // 0x2839d0: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x2839d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2839d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2839d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2839d8: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2839d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2839dc: 0x1460ff7e  bnez        $v1, . + 4 + (-0x82 << 2)
    ctx->pc = 0x2839DCu;
    {
        const bool branch_taken_0x2839dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2839E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2839DCu;
            // 0x2839e0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839dc) {
            ctx->pc = 0x2837D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2837d8;
        }
    }
    ctx->pc = 0x2839E4u;
    // 0x2839e4: 0x0  nop
    ctx->pc = 0x2839e4u;
    // NOP
label_2839e8:
    // 0x2839e8: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x2839e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2839ec: 0x18a00090  blez        $a1, . + 4 + (0x90 << 2)
    ctx->pc = 0x2839ECu;
    {
        const bool branch_taken_0x2839ec = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2839ec) {
            ctx->pc = 0x283C30u;
            goto label_283c30;
        }
    }
    ctx->pc = 0x2839F4u;
    // 0x2839f4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2839f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2839f8: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x2839f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2839fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2839fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a00: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x283a00u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x283a04: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x283A04u;
    {
        const bool branch_taken_0x283a04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283A04u;
            // 0x283a08: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a04) {
            ctx->pc = 0x283B30u;
            goto label_283b30;
        }
    }
    ctx->pc = 0x283A0Cu;
    // 0x283a0c: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x283a0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x283a10: 0x14200037  bnez        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x283A10u;
    {
        const bool branch_taken_0x283a10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x283A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283A10u;
            // 0x283a14: 0x24a6fff8  addiu       $a2, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a10) {
            ctx->pc = 0x283AF0u;
            goto label_283af0;
        }
    }
    ctx->pc = 0x283A18u;
    // 0x283a18: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x283a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x283a1c: 0x0  nop
    ctx->pc = 0x283a1cu;
    // NOP
label_283a20:
    // 0x283a20: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x283a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x283a24: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x283a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x283a28: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x283a28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x283a2c: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x283a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x283a30: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x283a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x283a34: 0xc4840010  lwc1        $f4, 0x10($a0)
    ctx->pc = 0x283a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x283a38: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x283a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x283a3c: 0xc4960018  lwc1        $f22, 0x18($a0)
    ctx->pc = 0x283a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x283a40: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x283a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x283a44: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x283a44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x283a48: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x283a48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x283a4c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x283a4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x283a50: 0xc4950020  lwc1        $f21, 0x20($a0)
    ctx->pc = 0x283a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x283a54: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x283a54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x283a58: 0xc4930024  lwc1        $f19, 0x24($a0)
    ctx->pc = 0x283a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x283a5c: 0xc4920028  lwc1        $f18, 0x28($a0)
    ctx->pc = 0x283a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x283a60: 0x46161080  add.s       $f2, $f2, $f22
    ctx->pc = 0x283a60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
    // 0x283a64: 0xc4910030  lwc1        $f17, 0x30($a0)
    ctx->pc = 0x283a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x283a68: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x283a68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x283a6c: 0xc4900034  lwc1        $f16, 0x34($a0)
    ctx->pc = 0x283a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x283a70: 0x46130840  add.s       $f1, $f1, $f19
    ctx->pc = 0x283a70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[19]);
    // 0x283a74: 0xc48f0038  lwc1        $f15, 0x38($a0)
    ctx->pc = 0x283a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x283a78: 0x46121080  add.s       $f2, $f2, $f18
    ctx->pc = 0x283a78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[18]);
    // 0x283a7c: 0xc48e0040  lwc1        $f14, 0x40($a0)
    ctx->pc = 0x283a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x283a80: 0x46110000  add.s       $f0, $f0, $f17
    ctx->pc = 0x283a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[17]);
    // 0x283a84: 0xc48d0044  lwc1        $f13, 0x44($a0)
    ctx->pc = 0x283a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x283a88: 0x46100840  add.s       $f1, $f1, $f16
    ctx->pc = 0x283a88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[16]);
    // 0x283a8c: 0xc48c0048  lwc1        $f12, 0x48($a0)
    ctx->pc = 0x283a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x283a90: 0x460f1080  add.s       $f2, $f2, $f15
    ctx->pc = 0x283a90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[15]);
    // 0x283a94: 0xc48b0050  lwc1        $f11, 0x50($a0)
    ctx->pc = 0x283a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x283a98: 0x460e0000  add.s       $f0, $f0, $f14
    ctx->pc = 0x283a98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[14]);
    // 0x283a9c: 0xc48a0054  lwc1        $f10, 0x54($a0)
    ctx->pc = 0x283a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x283aa0: 0x460d0840  add.s       $f1, $f1, $f13
    ctx->pc = 0x283aa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    // 0x283aa4: 0xc4890058  lwc1        $f9, 0x58($a0)
    ctx->pc = 0x283aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x283aa8: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x283aa8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x283aac: 0xc4880060  lwc1        $f8, 0x60($a0)
    ctx->pc = 0x283aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x283ab0: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x283ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x283ab4: 0xc4870064  lwc1        $f7, 0x64($a0)
    ctx->pc = 0x283ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x283ab8: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x283ab8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x283abc: 0xc4860068  lwc1        $f6, 0x68($a0)
    ctx->pc = 0x283abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x283ac0: 0x46091080  add.s       $f2, $f2, $f9
    ctx->pc = 0x283ac0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[9]);
    // 0x283ac4: 0xc4850070  lwc1        $f5, 0x70($a0)
    ctx->pc = 0x283ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x283ac8: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x283ac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x283acc: 0xc4840074  lwc1        $f4, 0x74($a0)
    ctx->pc = 0x283accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x283ad0: 0xc4830078  lwc1        $f3, 0x78($a0)
    ctx->pc = 0x283ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x283ad4: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x283ad4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x283ad8: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x283ad8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x283adc: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x283adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x283ae0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x283ae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x283ae4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x283ae4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x283ae8: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x283AE8u;
    {
        const bool branch_taken_0x283ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283AE8u;
            // 0x283aec: 0x46031080  add.s       $f2, $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ae8) {
            ctx->pc = 0x283A20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283a20;
        }
    }
    ctx->pc = 0x283AF0u;
label_283af0:
    // 0x283af0: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x283af0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x283af4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x283AF4u;
    {
        const bool branch_taken_0x283af4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x283af4) {
            ctx->pc = 0x283B30u;
            goto label_283b30;
        }
    }
    ctx->pc = 0x283AFCu;
    // 0x283afc: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x283afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x283b00: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x283b00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x283b04: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x283b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_283b08:
    // 0x283b08: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x283b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x283b0c: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x283b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x283b10: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x283b10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x283b14: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x283b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x283b18: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x283b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x283b1c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x283b1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x283b20: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x283b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x283b24: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x283b24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x283b28: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x283B28u;
    {
        const bool branch_taken_0x283b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283B28u;
            // 0x283b2c: 0x46031080  add.s       $f2, $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b28) {
            ctx->pc = 0x283B08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283b08;
        }
    }
    ctx->pc = 0x283B30u;
label_283b30:
    // 0x283b30: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x283b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x283b34: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x283b34u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x283b38: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x283b38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x283b3c: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x283b3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x283b40: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x283b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x283b44: 0x460210dc  madd.s      $f3, $f2, $f2
    ctx->pc = 0x283b44u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x283b48: 0x46051836  c.le.s      $f3, $f5
    ctx->pc = 0x283b48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283b4c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x283B4Cu;
    {
        const bool branch_taken_0x283b4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x283b4c) {
            ctx->pc = 0x283C30u;
            goto label_283c30;
        }
    }
    ctx->pc = 0x283B54u;
    // 0x283b54: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x283b54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x283b58: 0x0  nop
    ctx->pc = 0x283b58u;
    // NOP
    // 0x283b5c: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x283b5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283b60: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x283B60u;
    {
        const bool branch_taken_0x283b60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x283b60) {
            ctx->pc = 0x283B88u;
            goto label_283b88;
        }
    }
    ctx->pc = 0x283B68u;
    // 0x283b68: 0x0  nop
    ctx->pc = 0x283b68u;
    // NOP
    // 0x283b6c: 0x0  nop
    ctx->pc = 0x283b6cu;
    // NOP
    // 0x283b70: 0x4603a116  rsqrt.s     $f4, $f20, $f3
    ctx->pc = 0x283b70u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[20]);
    // 0x283b74: 0x0  nop
    ctx->pc = 0x283b74u;
    // NOP
    // 0x283b78: 0x0  nop
    ctx->pc = 0x283b78u;
    // NOP
    // 0x283b7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283B7Cu;
    {
        const bool branch_taken_0x283b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283b7c) {
            ctx->pc = 0x283B88u;
            goto label_283b88;
        }
    }
    ctx->pc = 0x283B84u;
    // 0x283b84: 0x0  nop
    ctx->pc = 0x283b84u;
    // NOP
label_283b88:
    // 0x283b88: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x283b88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x283b8c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x283b8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x283b90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x283b90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x283b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b98: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x283b98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x283b9c: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x283B9Cu;
    {
        const bool branch_taken_0x283b9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x283BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283B9Cu;
            // 0x283ba0: 0x46041082  mul.s       $f2, $f2, $f4 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b9c) {
            ctx->pc = 0x283C08u;
            goto label_283c08;
        }
    }
    ctx->pc = 0x283BA4u;
    // 0x283ba4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x283ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x283ba8: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x283ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x283bac: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x283bacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x283bb0: 0x0  nop
    ctx->pc = 0x283bb0u;
    // NOP
    // 0x283bb4: 0x46051981  sub.s       $f6, $f3, $f5
    ctx->pc = 0x283bb4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_283bb8:
    // 0x283bb8: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x283bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x283bbc: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x283bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x283bc0: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x283bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x283bc4: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x283bc4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x283bc8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x283bc8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x283bcc: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x283bccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x283bd0: 0x460218dc  madd.s      $f3, $f3, $f2
    ctx->pc = 0x283bd0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x283bd4: 0x46061834  c.lt.s      $f3, $f6
    ctx->pc = 0x283bd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283bd8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x283BD8u;
    {
        const bool branch_taken_0x283bd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x283BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283BD8u;
            // 0x283bdc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283bd8) {
            ctx->pc = 0x283BE4u;
            goto label_283be4;
        }
    }
    ctx->pc = 0x283BE0u;
    // 0x283be0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x283be0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283be4:
    // 0x283be4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x283be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x283be8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x283BE8u;
    {
        const bool branch_taken_0x283be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x283be8) {
            ctx->pc = 0x283BF8u;
            goto label_283bf8;
        }
    }
    ctx->pc = 0x283BF0u;
    // 0x283bf0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x283BF0u;
    {
        const bool branch_taken_0x283bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283BF0u;
            // 0x283bf4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283bf0) {
            ctx->pc = 0x283C08u;
            goto label_283c08;
        }
    }
    ctx->pc = 0x283BF8u;
label_283bf8:
    // 0x283bf8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x283bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x283bfc: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x283bfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x283c00: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x283C00u;
    {
        const bool branch_taken_0x283c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x283C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283C00u;
            // 0x283c04: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c00) {
            ctx->pc = 0x283BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283bb8;
        }
    }
    ctx->pc = 0x283C08u;
label_283c08:
    // 0x283c08: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x283c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
    // 0x283c0c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x283c0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x283c10: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x283C10u;
    {
        const bool branch_taken_0x283c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x283c10) {
            ctx->pc = 0x283C30u;
            goto label_283c30;
        }
    }
    ctx->pc = 0x283C18u;
    // 0x283c18: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x283c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x283c1c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x283c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x283c20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x283c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283c24: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x283c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x283c28: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x283c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x283c2c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x283c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_283c30:
    // 0x283c30: 0x27a30178  addiu       $v1, $sp, 0x178
    ctx->pc = 0x283c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x283c34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x283c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x283c38: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x283c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x283c3c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x283c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x283c40: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x283C40u;
    {
        const bool branch_taken_0x283c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x283c40) {
            ctx->pc = 0x283C70u;
            goto label_283c70;
        }
    }
    ctx->pc = 0x283C48u;
    // 0x283c48: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x283c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x283c4c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x283c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x283c50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283c54: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x283c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x283c58: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x283c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x283c5c: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x283c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x283c60: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x283c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x283c64: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x283c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x283c68: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x283C68u;
    SET_GPR_U32(ctx, 31, 0x283C70u);
    ctx->pc = 0x283C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283C68u;
            // 0x283c6c: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283C70u; }
        if (ctx->pc != 0x283C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283C70u; }
        if (ctx->pc != 0x283C70u) { return; }
    }
    ctx->pc = 0x283C70u;
label_283c70:
    // 0x283c70: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x283c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x283c74: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x283c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x283c78: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x283c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x283c7c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x283c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x283c80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x283c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x283c84: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x283c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x283c88: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x283c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x283c8c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x283c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x283c90: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x283c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x283c94: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x283c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x283c98: 0x1460febf  bnez        $v1, . + 4 + (-0x141 << 2)
    ctx->pc = 0x283C98u;
    {
        const bool branch_taken_0x283c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x283c98) {
            ctx->pc = 0x283798u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283798;
        }
    }
    ctx->pc = 0x283CA0u;
label_283ca0:
    // 0x283ca0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x283ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x283ca4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x283ca4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x283ca8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x283ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x283cac: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x283cacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x283cb0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x283cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x283cb4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x283cb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x283cb8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x283cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x283cbc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x283cbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x283cc0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x283cc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x283cc4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x283cc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283cc8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x283cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283ccc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x283cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283cd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x283cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x283CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283CD4u;
            // 0x283cd8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283CDCu;
    // 0x283cdc: 0x0  nop
    ctx->pc = 0x283cdcu;
    // NOP
}
