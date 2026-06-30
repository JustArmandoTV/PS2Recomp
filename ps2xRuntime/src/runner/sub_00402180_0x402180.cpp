#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00402180
// Address: 0x402180 - 0x402460
void sub_00402180_0x402180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00402180_0x402180");
#endif

    switch (ctx->pc) {
        case 0x4021f8u: goto label_4021f8;
        case 0x402200u: goto label_402200;
        case 0x402218u: goto label_402218;
        case 0x40222cu: goto label_40222c;
        case 0x402250u: goto label_402250;
        case 0x402258u: goto label_402258;
        case 0x4022d8u: goto label_4022d8;
        case 0x402334u: goto label_402334;
        case 0x4023d0u: goto label_4023d0;
        case 0x402428u: goto label_402428;
        case 0x402440u: goto label_402440;
        default: break;
    }

    ctx->pc = 0x402180u;

    // 0x402180: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x402180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x402184: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x402184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x402188: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x402188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x40218c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x40218cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x402190: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x402190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x402194: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x402194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x402198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x402198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40219c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40219cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4021a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4021a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4021a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4021a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4021a8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4021a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4021ac: 0x2111823  subu        $v1, $s0, $s1
    ctx->pc = 0x4021acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x4021b0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4021B0u;
    {
        const bool branch_taken_0x4021b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4021B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4021B0u;
            // 0x4021b4: 0x3a883  sra         $s5, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4021b0) {
            ctx->pc = 0x4021C0u;
            goto label_4021c0;
        }
    }
    ctx->pc = 0x4021B8u;
    // 0x4021b8: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x4021b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x4021bc: 0x3a883  sra         $s5, $v1, 2
    ctx->pc = 0x4021bcu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 3), 2));
label_4021c0:
    // 0x4021c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4021c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4021c4: 0x75082b  sltu        $at, $v1, $s5
    ctx->pc = 0x4021c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x4021c8: 0x50200026  beql        $at, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x4021C8u;
    {
        const bool branch_taken_0x4021c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4021c8) {
            ctx->pc = 0x4021CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4021C8u;
            // 0x4021cc: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402264u;
            goto label_402264;
        }
    }
    ctx->pc = 0x4021D0u;
    // 0x4021d0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x4021d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x4021d4: 0x2a1082b  sltu        $at, $s5, $at
    ctx->pc = 0x4021d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x4021d8: 0x5420000a  bnel        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4021D8u;
    {
        const bool branch_taken_0x4021d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4021d8) {
            ctx->pc = 0x4021DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4021D8u;
            // 0x4021dc: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402204u;
            goto label_402204;
        }
    }
    ctx->pc = 0x4021E0u;
    // 0x4021e0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4021e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x4021e4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4021e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4021e8: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x4021e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x4021ec: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4021ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4021f0: 0xc049e92  jal         func_127A48
    ctx->pc = 0x4021F0u;
    SET_GPR_U32(ctx, 31, 0x4021F8u);
    ctx->pc = 0x4021F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4021F0u;
            // 0x4021f4: 0x24a5b8e0  addiu       $a1, $a1, -0x4720 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4021F8u; }
        if (ctx->pc != 0x4021F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4021F8u; }
        if (ctx->pc != 0x4021F8u) { return; }
    }
    ctx->pc = 0x4021F8u;
label_4021f8:
    // 0x4021f8: 0xc04981a  jal         func_126068
    ctx->pc = 0x4021F8u;
    SET_GPR_U32(ctx, 31, 0x402200u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402200u; }
        if (ctx->pc != 0x402200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402200u; }
        if (ctx->pc != 0x402200u) { return; }
    }
    ctx->pc = 0x402200u;
label_402200:
    // 0x402200: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x402200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_402204:
    // 0x402204: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x402204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x402208: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x402208u;
    {
        const bool branch_taken_0x402208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x402208) {
            ctx->pc = 0x40220Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x402208u;
            // 0x40220c: 0x152080  sll         $a0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402224u;
            goto label_402224;
        }
    }
    ctx->pc = 0x402210u;
    // 0x402210: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x402210u;
    SET_GPR_U32(ctx, 31, 0x402218u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402218u; }
        if (ctx->pc != 0x402218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402218u; }
        if (ctx->pc != 0x402218u) { return; }
    }
    ctx->pc = 0x402218u;
label_402218:
    // 0x402218: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x402218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x40221c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x40221cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x402220: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x402220u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_402224:
    // 0x402224: 0xc040180  jal         func_100600
    ctx->pc = 0x402224u;
    SET_GPR_U32(ctx, 31, 0x40222Cu);
    ctx->pc = 0x402228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402224u;
            // 0x402228: 0x26540008  addiu       $s4, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40222Cu; }
        if (ctx->pc != 0x40222Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40222Cu; }
        if (ctx->pc != 0x40222Cu) { return; }
    }
    ctx->pc = 0x40222Cu;
label_40222c:
    // 0x40222c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x40222cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402230: 0x5660000a  bnel        $s3, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x402230u;
    {
        const bool branch_taken_0x402230 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x402230) {
            ctx->pc = 0x402234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x402230u;
            // 0x402234: 0xae930000  sw          $s3, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40225Cu;
            goto label_40225c;
        }
    }
    ctx->pc = 0x402238u;
    // 0x402238: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x402238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x40223c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x40223cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x402240: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x402240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x402244: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x402244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x402248: 0xc049e92  jal         func_127A48
    ctx->pc = 0x402248u;
    SET_GPR_U32(ctx, 31, 0x402250u);
    ctx->pc = 0x40224Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402248u;
            // 0x40224c: 0x24a5c870  addiu       $a1, $a1, -0x3790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402250u; }
        if (ctx->pc != 0x402250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402250u; }
        if (ctx->pc != 0x402250u) { return; }
    }
    ctx->pc = 0x402250u;
label_402250:
    // 0x402250: 0xc04981a  jal         func_126068
    ctx->pc = 0x402250u;
    SET_GPR_U32(ctx, 31, 0x402258u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402258u; }
        if (ctx->pc != 0x402258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402258u; }
        if (ctx->pc != 0x402258u) { return; }
    }
    ctx->pc = 0x402258u;
label_402258:
    // 0x402258: 0xae930000  sw          $s3, 0x0($s4)
    ctx->pc = 0x402258u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
label_40225c:
    // 0x40225c: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x40225cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
    // 0x402260: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x402260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_402264:
    // 0x402264: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x402264u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x402268: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x402268u;
    {
        const bool branch_taken_0x402268 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x402268) {
            ctx->pc = 0x402350u;
            goto label_402350;
        }
    }
    ctx->pc = 0x402270u;
    // 0x402270: 0x2114023  subu        $t0, $s0, $s1
    ctx->pc = 0x402270u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x402274: 0x2606ffe0  addiu       $a2, $s0, -0x20
    ctx->pc = 0x402274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x402278: 0x25070003  addiu       $a3, $t0, 0x3
    ctx->pc = 0x402278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x40227c: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x40227Cu;
    {
        const bool branch_taken_0x40227c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x402280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40227Cu;
            // 0x402280: 0x72083  sra         $a0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40227c) {
            ctx->pc = 0x40228Cu;
            goto label_40228c;
        }
    }
    ctx->pc = 0x402284u;
    // 0x402284: 0x24e40003  addiu       $a0, $a3, 0x3
    ctx->pc = 0x402284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x402288: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x402288u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
label_40228c:
    // 0x40228c: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x40228cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x402290: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x402290u;
    {
        const bool branch_taken_0x402290 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x402290) {
            ctx->pc = 0x402328u;
            goto label_402328;
        }
    }
    ctx->pc = 0x402298u;
    // 0x402298: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x402298u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x40229c: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x40229Cu;
    {
        const bool branch_taken_0x40229c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4022A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40229Cu;
            // 0x4022a0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40229c) {
            ctx->pc = 0x4022D0u;
            goto label_4022d0;
        }
    }
    ctx->pc = 0x4022A4u;
    // 0x4022a4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x4022a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x4022a8: 0x1052024  and         $a0, $t0, $a1
    ctx->pc = 0x4022a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x4022ac: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4022ACu;
    {
        const bool branch_taken_0x4022ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4022B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4022ACu;
            // 0x4022b0: 0x64090001  daddiu      $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4022ac) {
            ctx->pc = 0x4022C4u;
            goto label_4022c4;
        }
    }
    ctx->pc = 0x4022B4u;
    // 0x4022b4: 0xe52024  and         $a0, $a3, $a1
    ctx->pc = 0x4022b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4022b8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4022B8u;
    {
        const bool branch_taken_0x4022b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4022b8) {
            ctx->pc = 0x4022C4u;
            goto label_4022c4;
        }
    }
    ctx->pc = 0x4022C0u;
    // 0x4022c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4022c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4022c4:
    // 0x4022c4: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4022C4u;
    {
        const bool branch_taken_0x4022c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x4022c4) {
            ctx->pc = 0x4022D0u;
            goto label_4022d0;
        }
    }
    ctx->pc = 0x4022CCu;
    // 0x4022cc: 0x640a0001  daddiu      $t2, $zero, 0x1
    ctx->pc = 0x4022ccu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4022d0:
    // 0x4022d0: 0x11400015  beqz        $t2, . + 4 + (0x15 << 2)
    ctx->pc = 0x4022D0u;
    {
        const bool branch_taken_0x4022d0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x4022d0) {
            ctx->pc = 0x402328u;
            goto label_402328;
        }
    }
    ctx->pc = 0x4022D8u;
label_4022d8:
    // 0x4022d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4022d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4022dc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4022dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x4022e0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4022e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4022e4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x4022e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x4022e8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4022e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4022ec: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4022ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x4022f0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x4022f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4022f4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4022f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x4022f8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x4022f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4022fc: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x4022fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x402300: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x402300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x402304: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x402304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x402308: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x402308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x40230c: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x40230cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
    // 0x402310: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x402310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x402314: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x402314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x402318: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x402318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x40231c: 0x226202b  sltu        $a0, $s1, $a2
    ctx->pc = 0x40231cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x402320: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x402320u;
    {
        const bool branch_taken_0x402320 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x402324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402320u;
            // 0x402324: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402320) {
            ctx->pc = 0x4022D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4022d8;
        }
    }
    ctx->pc = 0x402328u;
label_402328:
    // 0x402328: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x402328u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x40232c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x40232Cu;
    {
        const bool branch_taken_0x40232c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40232c) {
            ctx->pc = 0x402350u;
            goto label_402350;
        }
    }
    ctx->pc = 0x402334u;
label_402334:
    // 0x402334: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x402334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x402338: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x402338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x40233c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x40233cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x402340: 0x230202b  sltu        $a0, $s1, $s0
    ctx->pc = 0x402340u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x402344: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x402344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x402348: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x402348u;
    {
        const bool branch_taken_0x402348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x402348) {
            ctx->pc = 0x402334u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_402334;
        }
    }
    ctx->pc = 0x402350u;
label_402350:
    // 0x402350: 0xae550004  sw          $s5, 0x4($s2)
    ctx->pc = 0x402350u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 21));
    // 0x402354: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x402354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x402358: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x402358u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40235c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x40235cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x402360: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x402360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x402364: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x402364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x402368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x402368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40236c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40236cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x402370: 0x3e00008  jr          $ra
    ctx->pc = 0x402370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x402374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402370u;
            // 0x402374: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x402378u;
    // 0x402378: 0x0  nop
    ctx->pc = 0x402378u;
    // NOP
    // 0x40237c: 0x0  nop
    ctx->pc = 0x40237cu;
    // NOP
    // 0x402380: 0x80b0ef0  j           func_2C3BC0
    ctx->pc = 0x402380u;
    ctx->pc = 0x402384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402380u;
            // 0x402384: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C3BC0u;
    {
        auto targetFn = runtime->lookupFunction(0x2C3BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x402388u;
    // 0x402388: 0x0  nop
    ctx->pc = 0x402388u;
    // NOP
    // 0x40238c: 0x0  nop
    ctx->pc = 0x40238cu;
    // NOP
    // 0x402390: 0x8100184  j           func_400610
    ctx->pc = 0x402390u;
    ctx->pc = 0x402394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402390u;
            // 0x402394: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x400610u;
    {
        auto targetFn = runtime->lookupFunction(0x400610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x402398u;
    // 0x402398: 0x0  nop
    ctx->pc = 0x402398u;
    // NOP
    // 0x40239c: 0x0  nop
    ctx->pc = 0x40239cu;
    // NOP
    // 0x4023a0: 0x81000ac  j           func_4002B0
    ctx->pc = 0x4023A0u;
    ctx->pc = 0x4023A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4023A0u;
            // 0x4023a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4002B0u;
    {
        auto targetFn = runtime->lookupFunction(0x4002B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4023A8u;
    // 0x4023a8: 0x0  nop
    ctx->pc = 0x4023a8u;
    // NOP
    // 0x4023ac: 0x0  nop
    ctx->pc = 0x4023acu;
    // NOP
    // 0x4023b0: 0x80feef8  j           func_3FBBE0
    ctx->pc = 0x4023B0u;
    ctx->pc = 0x4023B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4023B0u;
            // 0x4023b4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FBBE0u;
    {
        auto targetFn = runtime->lookupFunction(0x3FBBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4023B8u;
    // 0x4023b8: 0x0  nop
    ctx->pc = 0x4023b8u;
    // NOP
    // 0x4023bc: 0x0  nop
    ctx->pc = 0x4023bcu;
    // NOP
    // 0x4023c0: 0x80fee74  j           func_3FB9D0
    ctx->pc = 0x4023C0u;
    ctx->pc = 0x4023C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4023C0u;
            // 0x4023c4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FB9D0u;
    {
        auto targetFn = runtime->lookupFunction(0x3FB9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4023C8u;
    // 0x4023c8: 0x0  nop
    ctx->pc = 0x4023c8u;
    // NOP
    // 0x4023cc: 0x0  nop
    ctx->pc = 0x4023ccu;
    // NOP
label_4023d0:
    // 0x4023d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4023d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4023d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4023d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4023d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4023d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4023dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4023dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4023e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4023e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4023e4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4023E4u;
    {
        const bool branch_taken_0x4023e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4023E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4023E4u;
            // 0x4023e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4023e4) {
            ctx->pc = 0x402440u;
            goto label_402440;
        }
    }
    ctx->pc = 0x4023ECu;
    // 0x4023ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4023ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4023f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4023f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4023f4: 0x2463a5f0  addiu       $v1, $v1, -0x5A10
    ctx->pc = 0x4023f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944240));
    // 0x4023f8: 0x2442a628  addiu       $v0, $v0, -0x59D8
    ctx->pc = 0x4023f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944296));
    // 0x4023fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4023fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x402400: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x402400u;
    {
        const bool branch_taken_0x402400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x402404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402400u;
            // 0x402404: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402400) {
            ctx->pc = 0x402428u;
            goto label_402428;
        }
    }
    ctx->pc = 0x402408u;
    // 0x402408: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x402408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x40240c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x40240cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x402410: 0x2463a6a0  addiu       $v1, $v1, -0x5960
    ctx->pc = 0x402410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944416));
    // 0x402414: 0x2442a6d8  addiu       $v0, $v0, -0x5928
    ctx->pc = 0x402414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944472));
    // 0x402418: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x402418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x40241c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40241cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x402420: 0xc100918  jal         func_402460
    ctx->pc = 0x402420u;
    SET_GPR_U32(ctx, 31, 0x402428u);
    ctx->pc = 0x402424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402420u;
            // 0x402424: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x402460u;
    if (runtime->hasFunction(0x402460u)) {
        auto targetFn = runtime->lookupFunction(0x402460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402428u; }
        if (ctx->pc != 0x402428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00402460_0x402460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402428u; }
        if (ctx->pc != 0x402428u) { return; }
    }
    ctx->pc = 0x402428u;
label_402428:
    // 0x402428: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x402428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x40242c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x40242cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x402430: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x402430u;
    {
        const bool branch_taken_0x402430 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x402430) {
            ctx->pc = 0x402434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x402430u;
            // 0x402434: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x402444u;
            goto label_402444;
        }
    }
    ctx->pc = 0x402438u;
    // 0x402438: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x402438u;
    SET_GPR_U32(ctx, 31, 0x402440u);
    ctx->pc = 0x40243Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x402438u;
            // 0x40243c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402440u; }
        if (ctx->pc != 0x402440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x402440u; }
        if (ctx->pc != 0x402440u) { return; }
    }
    ctx->pc = 0x402440u;
label_402440:
    // 0x402440: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x402440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_402444:
    // 0x402444: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x402444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x402448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x402448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40244c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40244cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x402450: 0x3e00008  jr          $ra
    ctx->pc = 0x402450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x402454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x402450u;
            // 0x402454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x402458u;
    // 0x402458: 0x0  nop
    ctx->pc = 0x402458u;
    // NOP
    // 0x40245c: 0x0  nop
    ctx->pc = 0x40245cu;
    // NOP
}
