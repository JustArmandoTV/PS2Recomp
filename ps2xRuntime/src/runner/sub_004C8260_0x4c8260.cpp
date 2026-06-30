#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C8260
// Address: 0x4c8260 - 0x4c83d0
void sub_004C8260_0x4c8260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C8260_0x4c8260");
#endif

    switch (ctx->pc) {
        case 0x4c8288u: goto label_4c8288;
        case 0x4c82a0u: goto label_4c82a0;
        case 0x4c82c0u: goto label_4c82c0;
        case 0x4c8300u: goto label_4c8300;
        case 0x4c8360u: goto label_4c8360;
        case 0x4c836cu: goto label_4c836c;
        case 0x4c8378u: goto label_4c8378;
        case 0x4c8384u: goto label_4c8384;
        case 0x4c8390u: goto label_4c8390;
        case 0x4c839cu: goto label_4c839c;
        case 0x4c83b4u: goto label_4c83b4;
        default: break;
    }

    ctx->pc = 0x4c8260u;

    // 0x4c8260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c8260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c8264: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c8264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c8268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c8268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c826c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c826cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c8270: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4c8270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8274: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x4c8274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x4c8278: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c8278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c827c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4c827cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x4c8280: 0xc0b4adc  jal         func_2D2B70
    ctx->pc = 0x4C8280u;
    SET_GPR_U32(ctx, 31, 0x4C8288u);
    ctx->pc = 0x4C8284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8280u;
            // 0x4c8284: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B70u;
    if (runtime->hasFunction(0x2D2B70u)) {
        auto targetFn = runtime->lookupFunction(0x2D2B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8288u; }
        if (ctx->pc != 0x4C8288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2B70_0x2d2b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8288u; }
        if (ctx->pc != 0x4C8288u) { return; }
    }
    ctx->pc = 0x4C8288u;
label_4c8288:
    // 0x4c8288: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c8288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c828c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4c828cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4c8290: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x4c8290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x4c8294: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4c8294u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4c8298: 0xc13212c  jal         func_4C84B0
    ctx->pc = 0x4C8298u;
    SET_GPR_U32(ctx, 31, 0x4C82A0u);
    ctx->pc = 0x4C829Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8298u;
            // 0x4c829c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C84B0u;
    if (runtime->hasFunction(0x4C84B0u)) {
        auto targetFn = runtime->lookupFunction(0x4C84B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C82A0u; }
        if (ctx->pc != 0x4C82A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C84B0_0x4c84b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C82A0u; }
        if (ctx->pc != 0x4C82A0u) { return; }
    }
    ctx->pc = 0x4C82A0u;
label_4c82a0:
    // 0x4c82a0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c82a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c82a4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c82a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c82a8: 0x24631990  addiu       $v1, $v1, 0x1990
    ctx->pc = 0x4c82a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6544));
    // 0x4c82ac: 0x244219c8  addiu       $v0, $v0, 0x19C8
    ctx->pc = 0x4c82acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6600));
    // 0x4c82b0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c82b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4c82b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c82b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c82b8: 0xc132128  jal         func_4C84A0
    ctx->pc = 0x4C82B8u;
    SET_GPR_U32(ctx, 31, 0x4C82C0u);
    ctx->pc = 0x4C82BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C82B8u;
            // 0x4c82bc: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C84A0u;
    if (runtime->hasFunction(0x4C84A0u)) {
        auto targetFn = runtime->lookupFunction(0x4C84A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C82C0u; }
        if (ctx->pc != 0x4C82C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C84A0_0x4c84a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C82C0u; }
        if (ctx->pc != 0x4C82C0u) { return; }
    }
    ctx->pc = 0x4C82C0u;
label_4c82c0:
    // 0x4c82c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4c82c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4c82c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c82c8: 0x24421830  addiu       $v0, $v0, 0x1830
    ctx->pc = 0x4c82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6192));
    // 0x4c82cc: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x4c82ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x4c82d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c82d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c82d4: 0x24421838  addiu       $v0, $v0, 0x1838
    ctx->pc = 0x4c82d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6200));
    // 0x4c82d8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4c82d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x4c82dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c82e0: 0x24421870  addiu       $v0, $v0, 0x1870
    ctx->pc = 0x4c82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6256));
    // 0x4c82e4: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x4c82e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x4c82e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c82e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c82ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c82ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c82f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c82f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c82f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c82f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c82f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4C82F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C82FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C82F8u;
            // 0x4c82fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C8300u;
label_4c8300:
    // 0x4c8300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c8300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c8304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c8304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c8308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c8308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c830c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c830cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c8310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c8310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8314: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4C8314u;
    {
        const bool branch_taken_0x4c8314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8314u;
            // 0x4c8318: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8314) {
            ctx->pc = 0x4C83B4u;
            goto label_4c83b4;
        }
    }
    ctx->pc = 0x4C831Cu;
    // 0x4c831c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c831cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c8320: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c8320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c8324: 0x24631990  addiu       $v1, $v1, 0x1990
    ctx->pc = 0x4c8324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6544));
    // 0x4c8328: 0x244219c8  addiu       $v0, $v0, 0x19C8
    ctx->pc = 0x4c8328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6600));
    // 0x4c832c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c832cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c8330: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4C8330u;
    {
        const bool branch_taken_0x4c8330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8330u;
            // 0x4c8334: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8330) {
            ctx->pc = 0x4C839Cu;
            goto label_4c839c;
        }
    }
    ctx->pc = 0x4C8338u;
    // 0x4c8338: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c8338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c833c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c833cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c8340: 0x24631940  addiu       $v1, $v1, 0x1940
    ctx->pc = 0x4c8340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6464));
    // 0x4c8344: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4c8344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x4c8348: 0x24421978  addiu       $v0, $v0, 0x1978
    ctx->pc = 0x4c8348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6520));
    // 0x4c834c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c834cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c8350: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4c8350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4c8354: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4c8354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4c8358: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4C8358u;
    SET_GPR_U32(ctx, 31, 0x4C8360u);
    ctx->pc = 0x4C835Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8358u;
            // 0x4c835c: 0x24a57b90  addiu       $a1, $a1, 0x7B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8360u; }
        if (ctx->pc != 0x4C8360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8360u; }
        if (ctx->pc != 0x4C8360u) { return; }
    }
    ctx->pc = 0x4C8360u;
label_4c8360:
    // 0x4c8360: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4c8360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4c8364: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4C8364u;
    SET_GPR_U32(ctx, 31, 0x4C836Cu);
    ctx->pc = 0x4C8368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8364u;
            // 0x4c8368: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C836Cu; }
        if (ctx->pc != 0x4C836Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C836Cu; }
        if (ctx->pc != 0x4C836Cu) { return; }
    }
    ctx->pc = 0x4C836Cu;
label_4c836c:
    // 0x4c836c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4c836cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4c8370: 0xc13210c  jal         func_4C8430
    ctx->pc = 0x4C8370u;
    SET_GPR_U32(ctx, 31, 0x4C8378u);
    ctx->pc = 0x4C8374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8370u;
            // 0x4c8374: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C8430u;
    if (runtime->hasFunction(0x4C8430u)) {
        auto targetFn = runtime->lookupFunction(0x4C8430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8378u; }
        if (ctx->pc != 0x4C8378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C8430_0x4c8430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8378u; }
        if (ctx->pc != 0x4C8378u) { return; }
    }
    ctx->pc = 0x4C8378u;
label_4c8378:
    // 0x4c8378: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4c8378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4c837c: 0xc13210c  jal         func_4C8430
    ctx->pc = 0x4C837Cu;
    SET_GPR_U32(ctx, 31, 0x4C8384u);
    ctx->pc = 0x4C8380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C837Cu;
            // 0x4c8380: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C8430u;
    if (runtime->hasFunction(0x4C8430u)) {
        auto targetFn = runtime->lookupFunction(0x4C8430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8384u; }
        if (ctx->pc != 0x4C8384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C8430_0x4c8430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8384u; }
        if (ctx->pc != 0x4C8384u) { return; }
    }
    ctx->pc = 0x4C8384u;
label_4c8384:
    // 0x4c8384: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4c8384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4c8388: 0xc1320f4  jal         func_4C83D0
    ctx->pc = 0x4C8388u;
    SET_GPR_U32(ctx, 31, 0x4C8390u);
    ctx->pc = 0x4C838Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8388u;
            // 0x4c838c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C83D0u;
    if (runtime->hasFunction(0x4C83D0u)) {
        auto targetFn = runtime->lookupFunction(0x4C83D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8390u; }
        if (ctx->pc != 0x4C8390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C83D0_0x4c83d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C8390u; }
        if (ctx->pc != 0x4C8390u) { return; }
    }
    ctx->pc = 0x4C8390u;
label_4c8390:
    // 0x4c8390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c8390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8394: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4C8394u;
    SET_GPR_U32(ctx, 31, 0x4C839Cu);
    ctx->pc = 0x4C8398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C8394u;
            // 0x4c8398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C839Cu; }
        if (ctx->pc != 0x4C839Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C839Cu; }
        if (ctx->pc != 0x4C839Cu) { return; }
    }
    ctx->pc = 0x4C839Cu;
label_4c839c:
    // 0x4c839c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4c839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4c83a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c83a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4c83a4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C83A4u;
    {
        const bool branch_taken_0x4c83a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c83a4) {
            ctx->pc = 0x4C83A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C83A4u;
            // 0x4c83a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C83B8u;
            goto label_4c83b8;
        }
    }
    ctx->pc = 0x4C83ACu;
    // 0x4c83ac: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C83ACu;
    SET_GPR_U32(ctx, 31, 0x4C83B4u);
    ctx->pc = 0x4C83B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C83ACu;
            // 0x4c83b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C83B4u; }
        if (ctx->pc != 0x4C83B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C83B4u; }
        if (ctx->pc != 0x4C83B4u) { return; }
    }
    ctx->pc = 0x4C83B4u;
label_4c83b4:
    // 0x4c83b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c83b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c83b8:
    // 0x4c83b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c83b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c83bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c83bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c83c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c83c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c83c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4C83C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C83C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C83C4u;
            // 0x4c83c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C83CCu;
    // 0x4c83cc: 0x0  nop
    ctx->pc = 0x4c83ccu;
    // NOP
}
