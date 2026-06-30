#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100620
// Address: 0x100620 - 0x100800
void sub_00100620_0x100620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100620_0x100620");
#endif

    switch (ctx->pc) {
        case 0x10065cu: goto label_10065c;
        case 0x1006b4u: goto label_1006b4;
        case 0x1006c4u: goto label_1006c4;
        case 0x100720u: goto label_100720;
        case 0x100740u: goto label_100740;
        case 0x100798u: goto label_100798;
        case 0x1007ccu: goto label_1007cc;
        default: break;
    }

    ctx->pc = 0x100620u;

    // 0x100620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x100620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x100624: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x100624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x100628: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x100628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10062c: 0x2442ca48  addiu       $v0, $v0, -0x35B8
    ctx->pc = 0x10062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953544));
    // 0x100630: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x100630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x100634: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x100638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10063c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10063cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100640: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x100640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x100644: 0x26320004  addiu       $s2, $s1, 0x4
    ctx->pc = 0x100644u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x100648: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x100648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x10064c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10064cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100650: 0xac5189c8  sw          $s1, -0x7638($v0)
    ctx->pc = 0x100650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937032), GPR_U32(ctx, 17));
    // 0x100654: 0xc0fe63c  jal         func_3F98F0
    ctx->pc = 0x100654u;
    SET_GPR_U32(ctx, 31, 0x10065Cu);
    ctx->pc = 0x100658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100654u;
            // 0x100658: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F98F0u;
    if (runtime->hasFunction(0x3F98F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F98F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10065Cu; }
        if (ctx->pc != 0x10065Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F98F0_0x3f98f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10065Cu; }
        if (ctx->pc != 0x10065Cu) { return; }
    }
    ctx->pc = 0x10065Cu;
label_10065c:
    // 0x10065c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x10065cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x100660: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x100660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x100664: 0x2463ca38  addiu       $v1, $v1, -0x35C8
    ctx->pc = 0x100664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953528));
    // 0x100668: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x100668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x10066c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x10066cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x100670: 0x2484ca20  addiu       $a0, $a0, -0x35E0
    ctx->pc = 0x100670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953504));
    // 0x100674: 0xac527378  sw          $s2, 0x7378($v0)
    ctx->pc = 0x100674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29560), GPR_U32(ctx, 18));
    // 0x100678: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x10067c: 0x2463ca2c  addiu       $v1, $v1, -0x35D4
    ctx->pc = 0x10067cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953516));
    // 0x100680: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x100680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x100684: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x100684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x100688: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x100688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x10068c: 0x3444cfdc  ori         $a0, $v0, 0xCFDC
    ctx->pc = 0x10068cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53212);
    // 0x100690: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x100690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x100694: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x100694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x100698: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x100698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x10069c: 0x2442b900  addiu       $v0, $v0, -0x4700
    ctx->pc = 0x10069cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949120));
    // 0x1006a0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1006a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1006a4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1006a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1006a8: 0x508023  subu        $s0, $v0, $s0
    ctx->pc = 0x1006a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1006ac: 0xc04a23e  jal         func_1288F8
    ctx->pc = 0x1006ACu;
    SET_GPR_U32(ctx, 31, 0x1006B4u);
    ctx->pc = 0x1006B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1006ACu;
            // 0x1006b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288F8u;
    if (runtime->hasFunction(0x1288F8u)) {
        auto targetFn = runtime->lookupFunction(0x1288F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1006B4u; }
        if (ctx->pc != 0x1006B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001288F8_0x1288f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1006B4u; }
        if (ctx->pc != 0x1006B4u) { return; }
    }
    ctx->pc = 0x1006B4u;
label_1006b4:
    // 0x1006b4: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x1006b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1006b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1006b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1006bc: 0xc0fe618  jal         func_3F9860
    ctx->pc = 0x1006BCu;
    SET_GPR_U32(ctx, 31, 0x1006C4u);
    ctx->pc = 0x1006C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1006BCu;
            // 0x1006c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9860u;
    if (runtime->hasFunction(0x3F9860u)) {
        auto targetFn = runtime->lookupFunction(0x3F9860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1006C4u; }
        if (ctx->pc != 0x1006C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9860_0x3f9860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1006C4u; }
        if (ctx->pc != 0x1006C4u) { return; }
    }
    ctx->pc = 0x1006C4u;
label_1006c4:
    // 0x1006c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1006c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1006c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1006c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1006cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1006ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1006d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1006d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1006d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1006d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1006d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1006D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1006DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1006D8u;
            // 0x1006dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1006E0u;
    // 0x1006e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1006e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1006e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1006e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1006e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1006e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1006ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1006ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1006f0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1006F0u;
    {
        const bool branch_taken_0x1006f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1006f0) {
            ctx->pc = 0x1006F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1006F0u;
            // 0x1006f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100724u;
            goto label_100724;
        }
    }
    ctx->pc = 0x1006F8u;
    // 0x1006f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1006f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1006fc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x1006fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x100700: 0x2442ca48  addiu       $v0, $v0, -0x35B8
    ctx->pc = 0x100700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953544));
    // 0x100704: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x100704u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x100708: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x100708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10070c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x10070cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x100710: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x100710u;
    {
        const bool branch_taken_0x100710 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x100714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100710u;
            // 0x100714: 0xac4089c8  sw          $zero, -0x7638($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937032), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100710) {
            ctx->pc = 0x100720u;
            goto label_100720;
        }
    }
    ctx->pc = 0x100718u;
    // 0x100718: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x100718u;
    SET_GPR_U32(ctx, 31, 0x100720u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100720u; }
        if (ctx->pc != 0x100720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100720u; }
        if (ctx->pc != 0x100720u) { return; }
    }
    ctx->pc = 0x100720u;
label_100720:
    // 0x100720: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x100720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100724:
    // 0x100724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10072c: 0x3e00008  jr          $ra
    ctx->pc = 0x10072Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10072Cu;
            // 0x100730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100734u;
    // 0x100734: 0x0  nop
    ctx->pc = 0x100734u;
    // NOP
    // 0x100738: 0x0  nop
    ctx->pc = 0x100738u;
    // NOP
    // 0x10073c: 0x0  nop
    ctx->pc = 0x10073cu;
    // NOP
label_100740:
    // 0x100740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x100744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x100748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10074c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10074cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x100750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x100750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100754: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x100754u;
    {
        const bool branch_taken_0x100754 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x100758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100754u;
            // 0x100758: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100754) {
            ctx->pc = 0x1007CCu;
            goto label_1007cc;
        }
    }
    ctx->pc = 0x10075Cu;
    // 0x10075c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x10075cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x100760: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x100760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x100764: 0x2463ca20  addiu       $v1, $v1, -0x35E0
    ctx->pc = 0x100764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953504));
    // 0x100768: 0x2442ca2c  addiu       $v0, $v0, -0x35D4
    ctx->pc = 0x100768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953516));
    // 0x10076c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x10076cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x100770: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x100770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x100774: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x100774u;
    {
        const bool branch_taken_0x100774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x100778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100774u;
            // 0x100778: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100774) {
            ctx->pc = 0x100798u;
            goto label_100798;
        }
    }
    ctx->pc = 0x10077Cu;
    // 0x10077c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x10077cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x100780: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x100780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x100784: 0x2463ca38  addiu       $v1, $v1, -0x35C8
    ctx->pc = 0x100784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953528));
    // 0x100788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10078c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x10078cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x100790: 0xc0fe620  jal         func_3F9880
    ctx->pc = 0x100790u;
    SET_GPR_U32(ctx, 31, 0x100798u);
    ctx->pc = 0x100794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100790u;
            // 0x100794: 0xac407378  sw          $zero, 0x7378($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9880u;
    if (runtime->hasFunction(0x3F9880u)) {
        auto targetFn = runtime->lookupFunction(0x3F9880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100798u; }
        if (ctx->pc != 0x100798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9880_0x3f9880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100798u; }
        if (ctx->pc != 0x100798u) { return; }
    }
    ctx->pc = 0x100798u;
label_100798:
    // 0x100798: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x100798u;
    {
        const bool branch_taken_0x100798 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x100798) {
            ctx->pc = 0x10079Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100798u;
            // 0x10079c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1007B8u;
            goto label_1007b8;
        }
    }
    ctx->pc = 0x1007A0u;
    // 0x1007a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1007a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1007a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1007a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1007a8: 0x2463ca48  addiu       $v1, $v1, -0x35B8
    ctx->pc = 0x1007a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953544));
    // 0x1007ac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1007acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1007b0: 0xac4089c8  sw          $zero, -0x7638($v0)
    ctx->pc = 0x1007b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937032), GPR_U32(ctx, 0));
    // 0x1007b4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1007b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1007b8:
    // 0x1007b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1007b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1007bc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1007BCu;
    {
        const bool branch_taken_0x1007bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1007bc) {
            ctx->pc = 0x1007C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1007BCu;
            // 0x1007c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1007D0u;
            goto label_1007d0;
        }
    }
    ctx->pc = 0x1007C4u;
    // 0x1007c4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1007C4u;
    SET_GPR_U32(ctx, 31, 0x1007CCu);
    ctx->pc = 0x1007C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1007C4u;
            // 0x1007c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1007CCu; }
        if (ctx->pc != 0x1007CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1007CCu; }
        if (ctx->pc != 0x1007CCu) { return; }
    }
    ctx->pc = 0x1007CCu;
label_1007cc:
    // 0x1007cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1007ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1007d0:
    // 0x1007d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1007d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1007d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1007d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1007d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1007d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1007dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1007DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1007E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1007DCu;
            // 0x1007e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1007E4u;
    // 0x1007e4: 0x0  nop
    ctx->pc = 0x1007e4u;
    // NOP
    // 0x1007e8: 0x0  nop
    ctx->pc = 0x1007e8u;
    // NOP
    // 0x1007ec: 0x0  nop
    ctx->pc = 0x1007ecu;
    // NOP
    // 0x1007f0: 0x80401d0  j           func_100740
    ctx->pc = 0x1007F0u;
    ctx->pc = 0x1007F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1007F0u;
            // 0x1007f4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100740u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_100740;
    ctx->pc = 0x1007F8u;
    // 0x1007f8: 0x0  nop
    ctx->pc = 0x1007f8u;
    // NOP
    // 0x1007fc: 0x0  nop
    ctx->pc = 0x1007fcu;
    // NOP
}
