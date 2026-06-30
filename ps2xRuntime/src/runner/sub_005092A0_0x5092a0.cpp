#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005092A0
// Address: 0x5092a0 - 0x509410
void sub_005092A0_0x5092a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005092A0_0x5092a0");
#endif

    switch (ctx->pc) {
        case 0x5092c4u: goto label_5092c4;
        case 0x509364u: goto label_509364;
        case 0x509394u: goto label_509394;
        case 0x5093dcu: goto label_5093dc;
        default: break;
    }

    ctx->pc = 0x5092a0u;

    // 0x5092a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5092a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x5092a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5092a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x5092a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5092a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x5092ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5092acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x5092b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5092b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5092b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x5092b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5092b8: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x5092b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x5092bc: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x5092BCu;
    SET_GPR_U32(ctx, 31, 0x5092C4u);
    ctx->pc = 0x5092C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5092BCu;
            // 0x5092c0: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5092C4u; }
        if (ctx->pc != 0x5092C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5092C4u; }
        if (ctx->pc != 0x5092C4u) { return; }
    }
    ctx->pc = 0x5092C4u;
label_5092c4:
    // 0x5092c4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x5092c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x5092c8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x5092c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x5092cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x5092ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x5092d0: 0x50600047  beql        $v1, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x5092D0u;
    {
        const bool branch_taken_0x5092d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5092d0) {
            ctx->pc = 0x5092D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5092D0u;
            // 0x5092d4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5093F0u;
            goto label_5093f0;
        }
    }
    ctx->pc = 0x5092D8u;
    // 0x5092d8: 0x82230023  lb          $v1, 0x23($s1)
    ctx->pc = 0x5092d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x5092dc: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x5092dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x5092e0: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x5092e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x5092e4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x5092e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x5092e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x5092e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x5092ec: 0x82230023  lb          $v1, 0x23($s1)
    ctx->pc = 0x5092ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x5092f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x5092f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x5092f4: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x5092f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x5092f8: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x5092f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x5092fc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x5092fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x509300: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x509300u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x509304: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x509304u;
    {
        const bool branch_taken_0x509304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x509304) {
            ctx->pc = 0x509308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509304u;
            // 0x509308: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509314u;
            goto label_509314;
        }
    }
    ctx->pc = 0x50930Cu;
    // 0x50930c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x50930cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x509310: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x509310u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_509314:
    // 0x509314: 0x28810000  slti        $at, $a0, 0x0
    ctx->pc = 0x509314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x509318: 0x14200034  bnez        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x509318u;
    {
        const bool branch_taken_0x509318 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x509318) {
            ctx->pc = 0x5093ECu;
            goto label_5093ec;
        }
    }
    ctx->pc = 0x509320u;
    // 0x509320: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x509320u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x509324: 0x14830031  bne         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x509324u;
    {
        const bool branch_taken_0x509324 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x509324) {
            ctx->pc = 0x5093ECu;
            goto label_5093ec;
        }
    }
    ctx->pc = 0x50932Cu;
    // 0x50932c: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x50932cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x509330: 0x1483002e  bne         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x509330u;
    {
        const bool branch_taken_0x509330 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x509330) {
            ctx->pc = 0x5093ECu;
            goto label_5093ec;
        }
    }
    ctx->pc = 0x509338u;
    // 0x509338: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x509338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x50933c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x50933cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x509340: 0x24630390  addiu       $v1, $v1, 0x390
    ctx->pc = 0x509340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 912));
    // 0x509344: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x509344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x509348: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x509348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x50934c: 0x18600023  blez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x50934Cu;
    {
        const bool branch_taken_0x50934c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x509350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50934Cu;
            // 0x509350: 0x8e310024  lw          $s1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50934c) {
            ctx->pc = 0x5093DCu;
            goto label_5093dc;
        }
    }
    ctx->pc = 0x509354u;
    // 0x509354: 0x8e220e00  lw          $v0, 0xE00($s1)
    ctx->pc = 0x509354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3584)));
    // 0x509358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x509358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50935c: 0xc075ecc  jal         func_1D7B30
    ctx->pc = 0x50935Cu;
    SET_GPR_U32(ctx, 31, 0x509364u);
    ctx->pc = 0x509360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50935Cu;
            // 0x509360: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509364u; }
        if (ctx->pc != 0x509364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509364u; }
        if (ctx->pc != 0x509364u) { return; }
    }
    ctx->pc = 0x509364u;
label_509364:
    // 0x509364: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x509364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
    // 0x509368: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x509368u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x50936c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x50936Cu;
    {
        const bool branch_taken_0x50936c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x509370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50936Cu;
            // 0x509370: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50936c) {
            ctx->pc = 0x509384u;
            goto label_509384;
        }
    }
    ctx->pc = 0x509374u;
    // 0x509374: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x509374u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x509378: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x509378u;
    {
        const bool branch_taken_0x509378 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x509378) {
            ctx->pc = 0x509384u;
            goto label_509384;
        }
    }
    ctx->pc = 0x509380u;
    // 0x509380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x509380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_509384:
    // 0x509384: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x509384u;
    {
        const bool branch_taken_0x509384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x509384) {
            ctx->pc = 0x5093A0u;
            goto label_5093a0;
        }
    }
    ctx->pc = 0x50938Cu;
    // 0x50938c: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x50938Cu;
    SET_GPR_U32(ctx, 31, 0x509394u);
    ctx->pc = 0x509390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50938Cu;
            // 0x509390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509394u; }
        if (ctx->pc != 0x509394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x509394u; }
        if (ctx->pc != 0x509394u) { return; }
    }
    ctx->pc = 0x509394u;
label_509394:
    // 0x509394: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x509394u;
    {
        const bool branch_taken_0x509394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x509394) {
            ctx->pc = 0x5093A0u;
            goto label_5093a0;
        }
    }
    ctx->pc = 0x50939Cu;
    // 0x50939c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x50939cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5093a0:
    // 0x5093a0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x5093A0u;
    {
        const bool branch_taken_0x5093a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x5093a0) {
            ctx->pc = 0x5093B8u;
            goto label_5093b8;
        }
    }
    ctx->pc = 0x5093A8u;
    // 0x5093a8: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x5093a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
    // 0x5093ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x5093acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x5093b0: 0x5483000b  bnel        $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x5093B0u;
    {
        const bool branch_taken_0x5093b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x5093b0) {
            ctx->pc = 0x5093B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5093B0u;
            // 0x5093b4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5093E0u;
            goto label_5093e0;
        }
    }
    ctx->pc = 0x5093B8u;
label_5093b8:
    // 0x5093b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5093b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x5093bc: 0x922411aa  lbu         $a0, 0x11AA($s1)
    ctx->pc = 0x5093bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
    // 0x5093c0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x5093c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x5093c4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x5093c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x5093c8: 0x26260890  addiu       $a2, $s1, 0x890
    ctx->pc = 0x5093c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x5093cc: 0x262702c0  addiu       $a3, $s1, 0x2C0
    ctx->pc = 0x5093ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    // 0x5093d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x5093d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5093d4: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x5093D4u;
    SET_GPR_U32(ctx, 31, 0x5093DCu);
    ctx->pc = 0x5093D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5093D4u;
            // 0x5093d8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5093DCu; }
        if (ctx->pc != 0x5093DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5093DCu; }
        if (ctx->pc != 0x5093DCu) { return; }
    }
    ctx->pc = 0x5093DCu;
label_5093dc:
    // 0x5093dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x5093dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5093e0:
    // 0x5093e0: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x5093e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x5093e4: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x5093e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x5093e8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x5093e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_5093ec:
    // 0x5093ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x5093ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_5093f0:
    // 0x5093f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5093f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5093f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5093f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5093f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5093f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5093fc: 0x3e00008  jr          $ra
    ctx->pc = 0x5093FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5093FCu;
            // 0x509400: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x509404u;
    // 0x509404: 0x0  nop
    ctx->pc = 0x509404u;
    // NOP
    // 0x509408: 0x0  nop
    ctx->pc = 0x509408u;
    // NOP
    // 0x50940c: 0x0  nop
    ctx->pc = 0x50940cu;
    // NOP
}
