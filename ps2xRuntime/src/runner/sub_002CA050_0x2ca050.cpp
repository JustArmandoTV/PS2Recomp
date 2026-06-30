#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CA050
// Address: 0x2ca050 - 0x2ca1e0
void sub_002CA050_0x2ca050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA050_0x2ca050");
#endif

    switch (ctx->pc) {
        case 0x2ca06cu: goto label_2ca06c;
        case 0x2ca08cu: goto label_2ca08c;
        case 0x2ca110u: goto label_2ca110;
        case 0x2ca170u: goto label_2ca170;
        case 0x2ca17cu: goto label_2ca17c;
        case 0x2ca188u: goto label_2ca188;
        case 0x2ca194u: goto label_2ca194;
        case 0x2ca1a0u: goto label_2ca1a0;
        case 0x2ca1acu: goto label_2ca1ac;
        case 0x2ca1c4u: goto label_2ca1c4;
        default: break;
    }

    ctx->pc = 0x2ca050u;

    // 0x2ca050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca054: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2ca054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2ca058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ca058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ca05c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2ca05cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2ca060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ca064: 0xc0b2924  jal         func_2CA490
    ctx->pc = 0x2CA064u;
    SET_GPR_U32(ctx, 31, 0x2CA06Cu);
    ctx->pc = 0x2CA068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA064u;
            // 0x2ca068: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA490u;
    if (runtime->hasFunction(0x2CA490u)) {
        auto targetFn = runtime->lookupFunction(0x2CA490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA06Cu; }
        if (ctx->pc != 0x2CA06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA490_0x2ca490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA06Cu; }
        if (ctx->pc != 0x2CA06Cu) { return; }
    }
    ctx->pc = 0x2CA06Cu;
label_2ca06c:
    // 0x2ca06c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ca06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ca070: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca074: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x2ca074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x2ca078: 0x24420438  addiu       $v0, $v0, 0x438
    ctx->pc = 0x2ca078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1080));
    // 0x2ca07c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ca07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ca080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca084: 0xc0b2920  jal         func_2CA480
    ctx->pc = 0x2CA084u;
    SET_GPR_U32(ctx, 31, 0x2CA08Cu);
    ctx->pc = 0x2CA088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA084u;
            // 0x2ca088: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA480u;
    if (runtime->hasFunction(0x2CA480u)) {
        auto targetFn = runtime->lookupFunction(0x2CA480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA08Cu; }
        if (ctx->pc != 0x2CA08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA480_0x2ca480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA08Cu; }
        if (ctx->pc != 0x2CA08Cu) { return; }
    }
    ctx->pc = 0x2CA08Cu;
label_2ca08c:
    // 0x2ca08c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2ca08cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2ca090: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x2ca090u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
    // 0x2ca094: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ca094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ca098: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2ca098u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x2ca09c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2ca09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2ca0a0: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x2ca0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x2ca0a4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x2ca0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x2ca0a8: 0x2508c4f0  addiu       $t0, $t0, -0x3B10
    ctx->pc = 0x2ca0a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952176));
    // 0x2ca0ac: 0x24e765d0  addiu       $a3, $a3, 0x65D0
    ctx->pc = 0x2ca0acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26064));
    // 0x2ca0b0: 0x24c66608  addiu       $a2, $a2, 0x6608
    ctx->pc = 0x2ca0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26120));
    // 0x2ca0b4: 0x8c490968  lw          $t1, 0x968($v0)
    ctx->pc = 0x2ca0b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x2ca0b8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2ca0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x2ca0bc: 0x24a549f0  addiu       $a1, $a1, 0x49F0
    ctx->pc = 0x2ca0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18928));
    // 0x2ca0c0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ca0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ca0c4: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2ca0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2ca0c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ca0c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca0cc: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x2ca0ccu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2ca0d0: 0xa20800a8  sb          $t0, 0xA8($s0)
    ctx->pc = 0x2ca0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 8));
    // 0x2ca0d4: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x2ca0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x2ca0d8: 0xae060064  sw          $a2, 0x64($s0)
    ctx->pc = 0x2ca0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
    // 0x2ca0dc: 0x8c840e80  lw          $a0, 0xE80($a0)
    ctx->pc = 0x2ca0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3712)));
    // 0x2ca0e0: 0x8c840968  lw          $a0, 0x968($a0)
    ctx->pc = 0x2ca0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
    // 0x2ca0e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ca0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ca0e8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2ca0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ca0ec: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2ca0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca0f0: 0xe4604010  swc1        $f0, 0x4010($v1)
    ctx->pc = 0x2ca0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16400), bits); }
    // 0x2ca0f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ca0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca0f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA0FCu;
            // 0x2ca100: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA104u;
    // 0x2ca104: 0x0  nop
    ctx->pc = 0x2ca104u;
    // NOP
    // 0x2ca108: 0x0  nop
    ctx->pc = 0x2ca108u;
    // NOP
    // 0x2ca10c: 0x0  nop
    ctx->pc = 0x2ca10cu;
    // NOP
label_2ca110:
    // 0x2ca110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ca110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ca114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ca114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ca118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ca11c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ca11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ca120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ca120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca124: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2CA124u;
    {
        const bool branch_taken_0x2ca124 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA124u;
            // 0x2ca128: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca124) {
            ctx->pc = 0x2CA1C4u;
            goto label_2ca1c4;
        }
    }
    ctx->pc = 0x2CA12Cu;
    // 0x2ca12c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ca12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ca130: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca134: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x2ca134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x2ca138: 0x24420438  addiu       $v0, $v0, 0x438
    ctx->pc = 0x2ca138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1080));
    // 0x2ca13c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ca13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ca140: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CA140u;
    {
        const bool branch_taken_0x2ca140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA140u;
            // 0x2ca144: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca140) {
            ctx->pc = 0x2CA1ACu;
            goto label_2ca1ac;
        }
    }
    ctx->pc = 0x2CA148u;
    // 0x2ca148: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ca148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ca14c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ca14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ca150: 0x246303b0  addiu       $v1, $v1, 0x3B0
    ctx->pc = 0x2ca150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 944));
    // 0x2ca154: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2ca154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2ca158: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2ca158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x2ca15c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ca15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ca160: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2ca160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2ca164: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2ca164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2ca168: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2CA168u;
    SET_GPR_U32(ctx, 31, 0x2CA170u);
    ctx->pc = 0x2CA16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA168u;
            // 0x2ca16c: 0x24a5a2b0  addiu       $a1, $a1, -0x5D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA170u; }
        if (ctx->pc != 0x2CA170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA170u; }
        if (ctx->pc != 0x2CA170u) { return; }
    }
    ctx->pc = 0x2CA170u;
label_2ca170:
    // 0x2ca170: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2ca170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2ca174: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x2CA174u;
    SET_GPR_U32(ctx, 31, 0x2CA17Cu);
    ctx->pc = 0x2CA178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA174u;
            // 0x2ca178: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA17Cu; }
        if (ctx->pc != 0x2CA17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA17Cu; }
        if (ctx->pc != 0x2CA17Cu) { return; }
    }
    ctx->pc = 0x2CA17Cu;
label_2ca17c:
    // 0x2ca17c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2ca17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2ca180: 0xc0b2890  jal         func_2CA240
    ctx->pc = 0x2CA180u;
    SET_GPR_U32(ctx, 31, 0x2CA188u);
    ctx->pc = 0x2CA184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA180u;
            // 0x2ca184: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA240u;
    if (runtime->hasFunction(0x2CA240u)) {
        auto targetFn = runtime->lookupFunction(0x2CA240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA188u; }
        if (ctx->pc != 0x2CA188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA240_0x2ca240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA188u; }
        if (ctx->pc != 0x2CA188u) { return; }
    }
    ctx->pc = 0x2CA188u;
label_2ca188:
    // 0x2ca188: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2ca188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2ca18c: 0xc0b2890  jal         func_2CA240
    ctx->pc = 0x2CA18Cu;
    SET_GPR_U32(ctx, 31, 0x2CA194u);
    ctx->pc = 0x2CA190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA18Cu;
            // 0x2ca190: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA240u;
    if (runtime->hasFunction(0x2CA240u)) {
        auto targetFn = runtime->lookupFunction(0x2CA240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA194u; }
        if (ctx->pc != 0x2CA194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA240_0x2ca240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA194u; }
        if (ctx->pc != 0x2CA194u) { return; }
    }
    ctx->pc = 0x2CA194u;
label_2ca194:
    // 0x2ca194: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2ca194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2ca198: 0xc0b2878  jal         func_2CA1E0
    ctx->pc = 0x2CA198u;
    SET_GPR_U32(ctx, 31, 0x2CA1A0u);
    ctx->pc = 0x2CA19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA198u;
            // 0x2ca19c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA1E0u;
    if (runtime->hasFunction(0x2CA1E0u)) {
        auto targetFn = runtime->lookupFunction(0x2CA1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA1A0u; }
        if (ctx->pc != 0x2CA1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA1E0_0x2ca1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA1A0u; }
        if (ctx->pc != 0x2CA1A0u) { return; }
    }
    ctx->pc = 0x2CA1A0u;
label_2ca1a0:
    // 0x2ca1a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca1a4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2CA1A4u;
    SET_GPR_U32(ctx, 31, 0x2CA1ACu);
    ctx->pc = 0x2CA1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA1A4u;
            // 0x2ca1a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA1ACu; }
        if (ctx->pc != 0x2CA1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA1ACu; }
        if (ctx->pc != 0x2CA1ACu) { return; }
    }
    ctx->pc = 0x2CA1ACu;
label_2ca1ac:
    // 0x2ca1ac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2ca1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2ca1b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ca1b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ca1b4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CA1B4u;
    {
        const bool branch_taken_0x2ca1b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ca1b4) {
            ctx->pc = 0x2CA1B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA1B4u;
            // 0x2ca1b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CA1C8u;
            goto label_2ca1c8;
        }
    }
    ctx->pc = 0x2CA1BCu;
    // 0x2ca1bc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CA1BCu;
    SET_GPR_U32(ctx, 31, 0x2CA1C4u);
    ctx->pc = 0x2CA1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA1BCu;
            // 0x2ca1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA1C4u; }
        if (ctx->pc != 0x2CA1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA1C4u; }
        if (ctx->pc != 0x2CA1C4u) { return; }
    }
    ctx->pc = 0x2CA1C4u;
label_2ca1c4:
    // 0x2ca1c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ca1c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca1c8:
    // 0x2ca1c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ca1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca1cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca1ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca1d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA1D4u;
            // 0x2ca1d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA1DCu;
    // 0x2ca1dc: 0x0  nop
    ctx->pc = 0x2ca1dcu;
    // NOP
}
