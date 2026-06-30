#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00401FB0
// Address: 0x401fb0 - 0x402180
void sub_00401FB0_0x401fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00401FB0_0x401fb0");
#endif

    switch (ctx->pc) {
        case 0x402018u: goto label_402018;
        case 0x402020u: goto label_402020;
        case 0x402038u: goto label_402038;
        case 0x40205cu: goto label_40205c;
        case 0x402064u: goto label_402064;
        case 0x4020dcu: goto label_4020dc;
        case 0x40213cu: goto label_40213c;
        default: break;
    }

    ctx->pc = 0x401fb0u;

    // 0x401fb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x401fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x401fb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x401fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x401fb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x401fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x401fbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x401fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x401fc0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x401fc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401fc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x401fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x401fc8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x401fc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401fcc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x401fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401fd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x401fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x401fd4: 0x2532023  subu        $a0, $s2, $s3
    ctx->pc = 0x401fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x401fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x401fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x401fdc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x401FDCu;
    {
        const bool branch_taken_0x401fdc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x401FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401FDCu;
            // 0x401fe0: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401fdc) {
            ctx->pc = 0x401FECu;
            goto label_401fec;
        }
    }
    ctx->pc = 0x401FE4u;
    // 0x401fe4: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x401fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x401fe8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x401fe8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_401fec:
    // 0x401fec: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x401fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x401ff0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x401ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x401ff4: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x401ff4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x401ff8: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x401FF8u;
    {
        const bool branch_taken_0x401ff8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x401FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401FF8u;
            // 0x401ffc: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401ff8) {
            ctx->pc = 0x402020u;
            goto label_402020;
        }
    }
    ctx->pc = 0x402000u;
    // 0x402000: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x402000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x402004: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x402004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x402008: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x402008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x40200c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x40200cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x402010: 0xc049e92  jal         func_127A48
    ctx->pc = 0x402010u;
    SET_GPR_U32(ctx, 31, 0x402018u);
    ctx->pc = 0x402014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402010u;
            // 0x402014: 0x24a5b8c0  addiu       $a1, $a1, -0x4740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402018u; }
        if (ctx->pc != 0x402018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402018u; }
        if (ctx->pc != 0x402018u) { return; }
    }
    ctx->pc = 0x402018u;
label_402018:
    // 0x402018: 0xc04981a  jal         func_126068
    ctx->pc = 0x402018u;
    SET_GPR_U32(ctx, 31, 0x402020u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402020u; }
        if (ctx->pc != 0x402020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402020u; }
        if (ctx->pc != 0x402020u) { return; }
    }
    ctx->pc = 0x402020u;
label_402020:
    // 0x402020: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x402020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x402024: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x402024u;
    {
        const bool branch_taken_0x402024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x402024) {
            ctx->pc = 0x402158u;
            goto label_402158;
        }
    }
    ctx->pc = 0x40202Cu;
    // 0x40202c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x40202cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x402030: 0xc040180  jal         func_100600
    ctx->pc = 0x402030u;
    SET_GPR_U32(ctx, 31, 0x402038u);
    ctx->pc = 0x402034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402030u;
            // 0x402034: 0x26910008  addiu       $s1, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402038u; }
        if (ctx->pc != 0x402038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402038u; }
        if (ctx->pc != 0x402038u) { return; }
    }
    ctx->pc = 0x402038u;
label_402038:
    // 0x402038: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x402038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40203c: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x40203Cu;
    {
        const bool branch_taken_0x40203c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x40203c) {
            ctx->pc = 0x402040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40203Cu;
            // 0x402040: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402068u;
            goto label_402068;
        }
    }
    ctx->pc = 0x402044u;
    // 0x402044: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x402044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x402048: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x402048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x40204c: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x40204cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x402050: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x402050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x402054: 0xc049e92  jal         func_127A48
    ctx->pc = 0x402054u;
    SET_GPR_U32(ctx, 31, 0x40205Cu);
    ctx->pc = 0x402058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402054u;
            // 0x402058: 0x24a5c870  addiu       $a1, $a1, -0x3790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40205Cu; }
        if (ctx->pc != 0x40205Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40205Cu; }
        if (ctx->pc != 0x40205Cu) { return; }
    }
    ctx->pc = 0x40205Cu;
label_40205c:
    // 0x40205c: 0xc04981a  jal         func_126068
    ctx->pc = 0x40205Cu;
    SET_GPR_U32(ctx, 31, 0x402064u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402064u; }
        if (ctx->pc != 0x402064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402064u; }
        if (ctx->pc != 0x402064u) { return; }
    }
    ctx->pc = 0x402064u;
label_402064:
    // 0x402064: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x402064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_402068:
    // 0x402068: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x402068u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x40206c: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x40206Cu;
    {
        const bool branch_taken_0x40206c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x402070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40206Cu;
            // 0x402070: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40206c) {
            ctx->pc = 0x402158u;
            goto label_402158;
        }
    }
    ctx->pc = 0x402074u;
    // 0x402074: 0x2534023  subu        $t0, $s2, $s3
    ctx->pc = 0x402074u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x402078: 0x2646ffe0  addiu       $a2, $s2, -0x20
    ctx->pc = 0x402078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
    // 0x40207c: 0x25070003  addiu       $a3, $t0, 0x3
    ctx->pc = 0x40207cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x402080: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x402080u;
    {
        const bool branch_taken_0x402080 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x402084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402080u;
            // 0x402084: 0x72083  sra         $a0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402080) {
            ctx->pc = 0x402090u;
            goto label_402090;
        }
    }
    ctx->pc = 0x402088u;
    // 0x402088: 0x24e40003  addiu       $a0, $a3, 0x3
    ctx->pc = 0x402088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x40208c: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x40208cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
label_402090:
    // 0x402090: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x402090u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x402094: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x402094u;
    {
        const bool branch_taken_0x402094 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x402094) {
            ctx->pc = 0x402130u;
            goto label_402130;
        }
    }
    ctx->pc = 0x40209Cu;
    // 0x40209c: 0x253082b  sltu        $at, $s2, $s3
    ctx->pc = 0x40209cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x4020a0: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x4020A0u;
    {
        const bool branch_taken_0x4020a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4020A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4020A0u;
            // 0x4020a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4020a0) {
            ctx->pc = 0x4020D4u;
            goto label_4020d4;
        }
    }
    ctx->pc = 0x4020A8u;
    // 0x4020a8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x4020a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x4020ac: 0x1052024  and         $a0, $t0, $a1
    ctx->pc = 0x4020acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x4020b0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4020B0u;
    {
        const bool branch_taken_0x4020b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4020B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4020B0u;
            // 0x4020b4: 0x64090001  daddiu      $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4020b0) {
            ctx->pc = 0x4020C8u;
            goto label_4020c8;
        }
    }
    ctx->pc = 0x4020B8u;
    // 0x4020b8: 0xe52024  and         $a0, $a3, $a1
    ctx->pc = 0x4020b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4020bc: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4020BCu;
    {
        const bool branch_taken_0x4020bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4020bc) {
            ctx->pc = 0x4020C8u;
            goto label_4020c8;
        }
    }
    ctx->pc = 0x4020C4u;
    // 0x4020c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4020c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4020c8:
    // 0x4020c8: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4020C8u;
    {
        const bool branch_taken_0x4020c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x4020c8) {
            ctx->pc = 0x4020D4u;
            goto label_4020d4;
        }
    }
    ctx->pc = 0x4020D0u;
    // 0x4020d0: 0x640a0001  daddiu      $t2, $zero, 0x1
    ctx->pc = 0x4020d0u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4020d4:
    // 0x4020d4: 0x11400016  beqz        $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x4020D4u;
    {
        const bool branch_taken_0x4020d4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x4020d4) {
            ctx->pc = 0x402130u;
            goto label_402130;
        }
    }
    ctx->pc = 0x4020DCu;
label_4020dc:
    // 0x4020dc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4020dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4020e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4020e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x4020e4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x4020e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4020e8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x4020e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x4020ec: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x4020ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4020f0: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4020f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x4020f4: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x4020f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x4020f8: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4020f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x4020fc: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x4020fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x402100: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x402100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x402104: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x402104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x402108: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x402108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x40210c: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x40210cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x402110: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x402110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
    // 0x402114: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x402114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x402118: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x402118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x40211c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x40211cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x402120: 0x266202b  sltu        $a0, $s3, $a2
    ctx->pc = 0x402120u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x402124: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x402124u;
    {
        const bool branch_taken_0x402124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x402128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402124u;
            // 0x402128: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402124) {
            ctx->pc = 0x4020DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4020dc;
        }
    }
    ctx->pc = 0x40212Cu;
    // 0x40212c: 0x0  nop
    ctx->pc = 0x40212cu;
    // NOP
label_402130:
    // 0x402130: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x402130u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x402134: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x402134u;
    {
        const bool branch_taken_0x402134 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x402134) {
            ctx->pc = 0x402158u;
            goto label_402158;
        }
    }
    ctx->pc = 0x40213Cu;
label_40213c:
    // 0x40213c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x40213cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x402140: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x402140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x402144: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x402144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x402148: 0x272202b  sltu        $a0, $s3, $s2
    ctx->pc = 0x402148u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x40214c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x40214cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x402150: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x402150u;
    {
        const bool branch_taken_0x402150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x402150) {
            ctx->pc = 0x40213Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40213c;
        }
    }
    ctx->pc = 0x402158u;
label_402158:
    // 0x402158: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x402158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40215c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x40215cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x402160: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x402160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x402164: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x402164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x402168: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x402168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40216c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40216cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x402170: 0x3e00008  jr          $ra
    ctx->pc = 0x402170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x402174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402170u;
            // 0x402174: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x402178u;
    // 0x402178: 0x0  nop
    ctx->pc = 0x402178u;
    // NOP
    // 0x40217c: 0x0  nop
    ctx->pc = 0x40217cu;
    // NOP
}
