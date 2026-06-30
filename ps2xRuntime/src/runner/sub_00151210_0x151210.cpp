#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00151210
// Address: 0x151210 - 0x151420
void sub_00151210_0x151210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151210_0x151210");
#endif

    switch (ctx->pc) {
        case 0x151318u: goto label_151318;
        case 0x151320u: goto label_151320;
        case 0x151334u: goto label_151334;
        case 0x151350u: goto label_151350;
        case 0x151388u: goto label_151388;
        case 0x1513a4u: goto label_1513a4;
        case 0x1513f4u: goto label_1513f4;
        case 0x151404u: goto label_151404;
        default: break;
    }

    ctx->pc = 0x151210u;

    // 0x151210: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x151210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x151214: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x151214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x151218: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x151218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15121c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15121cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x151220: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151224: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151228: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x151228u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15122c: 0x8c445824  lw          $a0, 0x5824($v0)
    ctx->pc = 0x15122cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22564)));
    // 0x151230: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x151230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x151234: 0x3443c000  ori         $v1, $v0, 0xC000
    ctx->pc = 0x151234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x151238: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x151238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15123c: 0x10430052  beq         $v0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x15123Cu;
    {
        const bool branch_taken_0x15123c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x151240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15123Cu;
            // 0x151240: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15123c) {
            ctx->pc = 0x151388u;
            goto label_151388;
        }
    }
    ctx->pc = 0x151244u;
    // 0x151244: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x151244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x151248: 0x8c4257f0  lw          $v0, 0x57F0($v0)
    ctx->pc = 0x151248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22512)));
    // 0x15124c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15124Cu;
    {
        const bool branch_taken_0x15124c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15124c) {
            ctx->pc = 0x151270u;
            goto label_151270;
        }
    }
    ctx->pc = 0x151254u;
    // 0x151254: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x151254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x151258: 0x8c425830  lw          $v0, 0x5830($v0)
    ctx->pc = 0x151258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22576)));
    // 0x15125c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15125Cu;
    {
        const bool branch_taken_0x15125c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15125c) {
            ctx->pc = 0x151270u;
            goto label_151270;
        }
    }
    ctx->pc = 0x151264u;
    // 0x151264: 0x34832000  ori         $v1, $a0, 0x2000
    ctx->pc = 0x151264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x151268: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x151268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15126c: 0xac435824  sw          $v1, 0x5824($v0)
    ctx->pc = 0x15126cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22564), GPR_U32(ctx, 3));
label_151270:
    // 0x151270: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x151270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x151274: 0x8c445824  lw          $a0, 0x5824($v0)
    ctx->pc = 0x151274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22564)));
    // 0x151278: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x151278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15127c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15127cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151280: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x151280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x151284: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151284u;
    {
        const bool branch_taken_0x151284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151284u;
            // 0x151288: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151284) {
            ctx->pc = 0x151294u;
            goto label_151294;
        }
    }
    ctx->pc = 0x15128Cu;
    // 0x15128c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x15128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x151290: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x151290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_151294:
    // 0x151294: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x151294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x151298: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x151298u;
    {
        const bool branch_taken_0x151298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151298) {
            ctx->pc = 0x15129Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151298u;
            // 0x15129c: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1512ACu;
            goto label_1512ac;
        }
    }
    ctx->pc = 0x1512A0u;
    // 0x1512a0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1512a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1512a4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1512a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1512a8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1512a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1512ac:
    // 0x1512ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1512ACu;
    {
        const bool branch_taken_0x1512ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1512ac) {
            ctx->pc = 0x1512B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1512ACu;
            // 0x1512b0: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1512C0u;
            goto label_1512c0;
        }
    }
    ctx->pc = 0x1512B4u;
    // 0x1512b4: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1512b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1512b8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1512b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1512bc: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x1512bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_1512c0:
    // 0x1512c0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1512C0u;
    {
        const bool branch_taken_0x1512c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1512c0) {
            ctx->pc = 0x1512C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1512C0u;
            // 0x1512c4: 0x34901000  ori         $s0, $a0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1512CCu;
            goto label_1512cc;
        }
    }
    ctx->pc = 0x1512C8u;
    // 0x1512c8: 0x34900800  ori         $s0, $a0, 0x800
    ctx->pc = 0x1512c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
label_1512cc:
    // 0x1512cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1512ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1512d0: 0x8c435814  lw          $v1, 0x5814($v0)
    ctx->pc = 0x1512d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22548)));
    // 0x1512d4: 0x306200fc  andi        $v0, $v1, 0xFC
    ctx->pc = 0x1512d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
    // 0x1512d8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1512D8u;
    {
        const bool branch_taken_0x1512d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1512d8) {
            ctx->pc = 0x151368u;
            goto label_151368;
        }
    }
    ctx->pc = 0x1512E0u;
    // 0x1512e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1512e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1512e4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1512e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1512e8: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1512E8u;
    {
        const bool branch_taken_0x1512e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1512e8) {
            ctx->pc = 0x1512ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1512E8u;
            // 0x1512ec: 0xc78f8364  lwc1        $f15, -0x7C9C($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x15133Cu;
            goto label_15133c;
        }
    }
    ctx->pc = 0x1512F0u;
    // 0x1512f0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1512f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1512f4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1512F4u;
    {
        const bool branch_taken_0x1512f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1512f4) {
            ctx->pc = 0x151328u;
            goto label_151328;
        }
    }
    ctx->pc = 0x1512FCu;
    // 0x1512fc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1512fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x151300: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151300u;
    {
        const bool branch_taken_0x151300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x151300) {
            ctx->pc = 0x151304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151300u;
            // 0x151304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151310u;
            goto label_151310;
        }
    }
    ctx->pc = 0x151308u;
    // 0x151308: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x151308u;
    {
        const bool branch_taken_0x151308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15130Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151308u;
            // 0x15130c: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151308) {
            ctx->pc = 0x151354u;
            goto label_151354;
        }
    }
    ctx->pc = 0x151310u;
label_151310:
    // 0x151310: 0xc053960  jal         func_14E580
    ctx->pc = 0x151310u;
    SET_GPR_U32(ctx, 31, 0x151318u);
    ctx->pc = 0x14E580u;
    if (runtime->hasFunction(0x14E580u)) {
        auto targetFn = runtime->lookupFunction(0x14E580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151318u; }
        if (ctx->pc != 0x151318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E580_0x14e580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151318u; }
        if (ctx->pc != 0x151318u) { return; }
    }
    ctx->pc = 0x151318u;
label_151318:
    // 0x151318: 0xc052da0  jal         func_14B680
    ctx->pc = 0x151318u;
    SET_GPR_U32(ctx, 31, 0x151320u);
    ctx->pc = 0x15131Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151318u;
            // 0x15131c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B680u;
    if (runtime->hasFunction(0x14B680u)) {
        auto targetFn = runtime->lookupFunction(0x14B680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151320u; }
        if (ctx->pc != 0x151320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B680_0x14b680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151320u; }
        if (ctx->pc != 0x151320u) { return; }
    }
    ctx->pc = 0x151320u;
label_151320:
    // 0x151320: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x151320u;
    {
        const bool branch_taken_0x151320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151320) {
            ctx->pc = 0x151350u;
            goto label_151350;
        }
    }
    ctx->pc = 0x151328u;
label_151328:
    // 0x151328: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x151328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15132c: 0xc052da0  jal         func_14B680
    ctx->pc = 0x15132Cu;
    SET_GPR_U32(ctx, 31, 0x151334u);
    ctx->pc = 0x151330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15132Cu;
            // 0x151330: 0x8c445774  lw          $a0, 0x5774($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B680u;
    if (runtime->hasFunction(0x14B680u)) {
        auto targetFn = runtime->lookupFunction(0x14B680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151334u; }
        if (ctx->pc != 0x151334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B680_0x14b680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151334u; }
        if (ctx->pc != 0x151334u) { return; }
    }
    ctx->pc = 0x151334u;
label_151334:
    // 0x151334: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x151334u;
    {
        const bool branch_taken_0x151334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151334) {
            ctx->pc = 0x151350u;
            goto label_151350;
        }
    }
    ctx->pc = 0x15133Cu;
label_15133c:
    // 0x15133c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15133cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151340: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x151340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x151344: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x151344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x151348: 0xc052d48  jal         func_14B520
    ctx->pc = 0x151348u;
    SET_GPR_U32(ctx, 31, 0x151350u);
    ctx->pc = 0x15134Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151348u;
            // 0x15134c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151350u; }
        if (ctx->pc != 0x151350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B520_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151350u; }
        if (ctx->pc != 0x151350u) { return; }
    }
    ctx->pc = 0x151350u;
label_151350:
    // 0x151350: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x151350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_151354:
    // 0x151354: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x151354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x151358: 0x34631fff  ori         $v1, $v1, 0x1FFF
    ctx->pc = 0x151358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8191);
    // 0x15135c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15135cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x151360: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x151360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x151364: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x151364u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_151368:
    // 0x151368: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x151368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15136c: 0x8c425844  lw          $v0, 0x5844($v0)
    ctx->pc = 0x15136cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22596)));
    // 0x151370: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x151370u;
    {
        const bool branch_taken_0x151370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x151370) {
            ctx->pc = 0x151388u;
            goto label_151388;
        }
    }
    ctx->pc = 0x151378u;
    // 0x151378: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x151378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15137c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15137cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151380: 0xc04fd58  jal         func_13F560
    ctx->pc = 0x151380u;
    SET_GPR_U32(ctx, 31, 0x151388u);
    ctx->pc = 0x151384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151380u;
            // 0x151384: 0xac505844  sw          $s0, 0x5844($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22596), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F560u;
    if (runtime->hasFunction(0x13F560u)) {
        auto targetFn = runtime->lookupFunction(0x13F560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151388u; }
        if (ctx->pc != 0x151388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F560_0x13f560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151388u; }
        if (ctx->pc != 0x151388u) { return; }
    }
    ctx->pc = 0x151388u;
label_151388:
    // 0x151388: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x151388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15138c: 0x8c425814  lw          $v0, 0x5814($v0)
    ctx->pc = 0x15138cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22548)));
    // 0x151390: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x151390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x151394: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x151394u;
    {
        const bool branch_taken_0x151394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151394) {
            ctx->pc = 0x151398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151394u;
            // 0x151398: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1513FCu;
            goto label_1513fc;
        }
    }
    ctx->pc = 0x15139Cu;
    // 0x15139c: 0xc056b10  jal         func_15AC40
    ctx->pc = 0x15139Cu;
    SET_GPR_U32(ctx, 31, 0x1513A4u);
    ctx->pc = 0x15AC40u;
    if (runtime->hasFunction(0x15AC40u)) {
        auto targetFn = runtime->lookupFunction(0x15AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1513A4u; }
        if (ctx->pc != 0x1513A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC40_0x15ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1513A4u; }
        if (ctx->pc != 0x1513A4u) { return; }
    }
    ctx->pc = 0x1513A4u;
label_1513a4:
    // 0x1513a4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1513a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1513a8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1513a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1513ac: 0x50830016  beql        $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1513ACu;
    {
        const bool branch_taken_0x1513ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1513ac) {
            ctx->pc = 0x1513B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1513ACu;
            // 0x1513b0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151408u;
            goto label_151408;
        }
    }
    ctx->pc = 0x1513B4u;
    // 0x1513b4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1513b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1513b8: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1513B8u;
    {
        const bool branch_taken_0x1513b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1513b8) {
            ctx->pc = 0x151404u;
            goto label_151404;
        }
    }
    ctx->pc = 0x1513C0u;
    // 0x1513c0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1513c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1513c4: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1513C4u;
    {
        const bool branch_taken_0x1513c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1513c4) {
            ctx->pc = 0x151404u;
            goto label_151404;
        }
    }
    ctx->pc = 0x1513CCu;
    // 0x1513cc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1513ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1513d0: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1513D0u;
    {
        const bool branch_taken_0x1513d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1513d0) {
            ctx->pc = 0x1513D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1513D0u;
            // 0x1513d4: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1513ECu;
            goto label_1513ec;
        }
    }
    ctx->pc = 0x1513D8u;
    // 0x1513d8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1513d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1513dc: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1513DCu;
    {
        const bool branch_taken_0x1513dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1513dc) {
            ctx->pc = 0x151404u;
            goto label_151404;
        }
    }
    ctx->pc = 0x1513E4u;
    // 0x1513e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1513E4u;
    {
        const bool branch_taken_0x1513e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1513e4) {
            ctx->pc = 0x151404u;
            goto label_151404;
        }
    }
    ctx->pc = 0x1513ECu;
label_1513ec:
    // 0x1513ec: 0xc053c64  jal         func_14F190
    ctx->pc = 0x1513ECu;
    SET_GPR_U32(ctx, 31, 0x1513F4u);
    ctx->pc = 0x1513F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1513ECu;
            // 0x1513f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F190u;
    if (runtime->hasFunction(0x14F190u)) {
        auto targetFn = runtime->lookupFunction(0x14F190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1513F4u; }
        if (ctx->pc != 0x1513F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014F190_0x14f190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1513F4u; }
        if (ctx->pc != 0x1513F4u) { return; }
    }
    ctx->pc = 0x1513F4u;
label_1513f4:
    // 0x1513f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1513F4u;
    {
        const bool branch_taken_0x1513f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1513f4) {
            ctx->pc = 0x151404u;
            goto label_151404;
        }
    }
    ctx->pc = 0x1513FCu;
label_1513fc:
    // 0x1513fc: 0xc053a84  jal         func_14EA10
    ctx->pc = 0x1513FCu;
    SET_GPR_U32(ctx, 31, 0x151404u);
    ctx->pc = 0x151400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1513FCu;
            // 0x151400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14EA10u;
    if (runtime->hasFunction(0x14EA10u)) {
        auto targetFn = runtime->lookupFunction(0x14EA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151404u; }
        if (ctx->pc != 0x151404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014EA10_0x14ea10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151404u; }
        if (ctx->pc != 0x151404u) { return; }
    }
    ctx->pc = 0x151404u;
label_151404:
    // 0x151404: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x151404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_151408:
    // 0x151408: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15140c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15140cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151414: 0x3e00008  jr          $ra
    ctx->pc = 0x151414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151414u;
            // 0x151418: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15141Cu;
    // 0x15141c: 0x0  nop
    ctx->pc = 0x15141cu;
    // NOP
}
